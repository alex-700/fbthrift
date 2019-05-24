/*
 * Copyright 2018-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <chrono>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>

#include <glog/logging.h>

#include <folly/ExceptionWrapper.h>
#include <folly/ScopeGuard.h>
#include <folly/SocketAddress.h>
#include <folly/Try.h>
#include <folly/container/F14Map.h>
#include <folly/io/async/AsyncSocket.h>
#include <folly/io/async/AsyncTransport.h>
#include <folly/io/async/DelayedDestruction.h>
#include <folly/io/async/EventBase.h>

#include <thrift/lib/cpp/transport/TTransportException.h>
#include <thrift/lib/cpp2/transport/rocket/Types.h>
#include <thrift/lib/cpp2/transport/rocket/client/RequestContext.h>
#include <thrift/lib/cpp2/transport/rocket/client/RequestContextQueue.h>
#include <thrift/lib/cpp2/transport/rocket/client/RocketClientFlowable.h>
#include <thrift/lib/cpp2/transport/rocket/client/RocketStreamServerCallback.h>
#include <thrift/lib/cpp2/transport/rocket/framing/Frames.h>
#include <thrift/lib/cpp2/transport/rocket/framing/Parser.h>

namespace folly {
class IOBuf;

namespace fibers {
class FiberManager;
} // namespace fibers
} // namespace folly

namespace apache {
namespace thrift {
namespace rocket {

class RocketClientWriteCallback;

class RocketClient : public folly::DelayedDestruction,
                     private folly::AsyncTransportWrapper::WriteCallback,
                     public std::enable_shared_from_this<RocketClient> {
 public:
  RocketClient(const RocketClient&) = delete;
  RocketClient(RocketClient&&) = delete;
  RocketClient& operator=(const RocketClient&) = delete;
  RocketClient& operator=(RocketClient&&) = delete;

  ~RocketClient() final;

  static std::shared_ptr<RocketClient> create(
      folly::EventBase& evb,
      folly::AsyncTransportWrapper::UniquePtr socket,
      std::unique_ptr<SetupFrame> setupFrame);

  // Main send*Sync() API. Must be called on the EventBase's FiberManager.
  FOLLY_NODISCARD folly::Try<Payload> sendRequestResponseSync(
      Payload&& request,
      std::chrono::milliseconds timeout,
      RocketClientWriteCallback* writeCallback);

  FOLLY_NODISCARD folly::Try<void> sendRequestFnfSync(
      Payload&& request,
      RocketClientWriteCallback* writeCallback);

  void sendRequestStream(
      Payload&& request,
      std::chrono::milliseconds firstResponseTimeout,
      StreamClientCallback* StreamClientCallback);

  // Note that createStream is non-blocking.
  std::shared_ptr<RocketClientFlowable> createStream(Payload&& request);

  void sendRequestN(StreamId streamId, int32_t n);
  void cancelStream(StreamId streamId);
  void freeStream(StreamId streamId);

  // AsyncTransportWrapper::WriteCallback implementation
  void writeSuccess() noexcept final;
  void writeErr(
      size_t bytesWritten,
      const folly::AsyncSocketException& e) noexcept final;

  // Hard close: stop reading from socket and abort all in-progress writes
  // immediately.
  void closeNow(folly::exception_wrapper ew) noexcept;

  // Initiate shutdown, but not as hard as closeNow(). Pending writes buffered
  // up within AsyncSocket will still have a chance to complete (all the way to
  // writeSuccess() or writeErr()). Other in-progress requests will be failed
  // with the exception specified by ew.
  void close(folly::exception_wrapper ew) noexcept;

  void setCloseCallback(folly::Function<void()> closeCallback) {
    closeCallback_ = std::move(closeCallback);
  }

  bool isAlive() const {
    return state_ == ConnectionState::CONNECTED;
  }

  size_t streams() const {
    return streams_.size() + streamsV2_.size();
  }

  const folly::AsyncTransportWrapper* getTransportWrapper() const {
    return socket_.get();
  }

  folly::AsyncTransportWrapper* getTransportWrapper() {
    return socket_.get();
  }

  bool isDetachable() const {
    DCHECK(evb_);
    evb_->dcheckIsInEventBaseThread();

    // Client is only detachable if there are no inflight requests, no active
    // streams, and if the underlying transport is detachable, i.e., has no
    // inflight writes of its own.
    return !writeLoopCallback_.isLoopCallbackScheduled() && !requests_ &&
        streams_.empty() && streamsV2_.empty() &&
        (!socket_ || socket_->isDetachable());
  }

  void attachEventBase(folly::EventBase& evb) {
    DCHECK(!evb_);
    evb.dcheckIsInEventBaseThread();

    evb_ = &evb;
    socket_->attachEventBase(evb_);
    evb_->runOnDestruction(*eventBaseDestructionCallback_);
  }

  void detachEventBase() {
    DCHECK(evb_);
    evb_->dcheckIsInEventBaseThread();
    DCHECK(!writeLoopCallback_.isLoopCallbackScheduled());
    eventBaseDestructionCallback_->cancel();
    socket_->detachEventBase();
    evb_ = nullptr;
  }

  void setOnDetachable(folly::Function<void()> onDetachable) {
    onDetachable_ = std::move(onDetachable);
  }

  void notifyIfDetachable() {
    if (onDetachable_ && isDetachable()) {
      onDetachable_();
    }
  }

 private:
  folly::EventBase* evb_;
  folly::fibers::FiberManager* fm_;
  folly::AsyncTransportWrapper::UniquePtr socket_;
  folly::Function<void()> onDetachable_;
  size_t requests_{0};
  StreamId nextStreamId_{1};
  std::unique_ptr<SetupFrame> setupFrame_;
  enum class ConnectionState : uint8_t {
    CONNECTED,
    CLOSED,
    ERROR,
  };
  // Client must be constructed with an already open socket
  ConnectionState state_{ConnectionState::CONNECTED};

  RequestContextQueue queue_;

  struct StreamWrapper {
    StreamWrapper(
        std::unique_ptr<Payload> payload,
        std::shared_ptr<RocketClientFlowable> f)
        : requestStreamPayload(std::move(payload)), flowable(std::move(f)) {}

    std::unique_ptr<Payload> requestStreamPayload;
    std::shared_ptr<RocketClientFlowable> flowable;
  };
  using StreamMap = std::unordered_map<StreamId, StreamWrapper>;
  StreamMap streams_;

  class FirstResponseTimeout : public folly::HHWheelTimer::Callback {
   public:
    FirstResponseTimeout(RocketClient& client, StreamId streamId)
        : client_(client), streamId_(streamId) {}

    void timeoutExpired() noexcept override;

   private:
    RocketClient& client_;
    StreamId streamId_;
  };

  using StreamV2Map =
      folly::F14FastMap<StreamId, std::unique_ptr<RocketStreamServerCallback>>;
  StreamV2Map streamsV2_;
  folly::F14FastMap<StreamId, Payload> bufferedFragments_;
  using FirstResponseTimeoutMap =
      folly::F14FastMap<StreamId, std::unique_ptr<FirstResponseTimeout>>;
  FirstResponseTimeoutMap firstResponseTimeouts_;

  Parser<RocketClient> parser_;

  class WriteLoopCallback : public folly::EventBase::LoopCallback {
   public:
    explicit WriteLoopCallback(RocketClient& client) : client_(client) {}
    ~WriteLoopCallback() final = default;
    void runLoopCallback() noexcept final;

   private:
    RocketClient& client_;
    bool rescheduled_{false};
  };
  WriteLoopCallback writeLoopCallback_;

  std::unique_ptr<folly::EventBase::OnDestructionCallback>
      eventBaseDestructionCallback_;
  folly::Function<void()> closeCallback_;

  RocketClient(
      folly::EventBase& evb,
      folly::AsyncTransportWrapper::UniquePtr socket,
      std::unique_ptr<SetupFrame> setupFrame);

  FOLLY_NODISCARD folly::Try<void> sendRequestNSync(
      StreamId streamId,
      int32_t n);
  FOLLY_NODISCARD folly::Try<void> sendCancelSync(StreamId streamId);
  FOLLY_NODISCARD folly::Try<void> scheduleWrite(RequestContext& ctx);

  StreamId makeStreamId() {
    const StreamId rid = nextStreamId_;
    // rsocket protocol specifies that clients must generate odd stream IDs
    nextStreamId_ += 2;
    return rid;
  }

  StreamWrapper* getStreamById(StreamId streamId);
  RocketStreamServerCallback* getStreamV2ById(StreamId streamId);

  void handleFrame(std::unique_ptr<folly::IOBuf> frame);
  void handleResponseFrame(
      RequestContext& ctx,
      FrameType frameType,
      std::unique_ptr<folly::IOBuf> frame);
  void handleStreamFrame(
      RocketClientFlowable& stream,
      FrameType frameType,
      std::unique_ptr<folly::IOBuf> frame);
  void handleStreamFrame(
      RocketStreamServerCallback& serverCallback,
      FrameType frameType,
      std::unique_ptr<folly::IOBuf> frame);

  void writeScheduledRequestsToSocket() noexcept;

  void scheduleFirstResponseTimeout(
      StreamId streamId,
      std::chrono::milliseconds timeout);
  folly::Optional<Payload> bufferOrGetFullPayload(PayloadFrame&& payloadFrame);

  FOLLY_NODISCARD auto makeRequestCountGuard() {
    ++requests_;
    return folly::makeGuard([this] {
      if (!--requests_) {
        notifyIfDetachable();
      }
    });
  }

  template <class T>
  friend class Parser;
};

} // namespace rocket
} // namespace thrift
} // namespace apache
