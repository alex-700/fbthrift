/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <atomic>

#include <thrift/lib/cpp2/async/RequestChannel.h>

namespace apache::thrift {

// Wrapper around a RequestChannel object where an RAII guard is held during
// execution of the request if RequestGuardType is a valid RAII guard, and/or
// lifetime of the guard if ChannelGuardType is a valilid RAII guard
template <class RequestGuardType, class ChannelGuardType>
class GuardedRequestChannel : public RequestChannel {
 public:
  using Impl = RequestChannel;
  using ImplPtr = std::shared_ptr<Impl>;

  static RequestChannel::Ptr newChannel(ImplPtr impl) {
    return {new GuardedRequestChannel(std::move(impl)), {}};
  }

  void setCloseCallback(CloseCallback* callback) override;

  folly::EventBase* getEventBase() const override;

  uint16_t getProtocolId() override;

  void sendRequestResponse(
      RpcOptions&& rpcOptions,
      MethodMetadata&& methodMetadata,
      SerializedRequest&& serializedRequest,
      std::shared_ptr<transport::THeader> header,
      RequestClientCallback::Ptr cb) override;

 private:
  GuardedRequestChannel(ImplPtr impl) : impl_{std::move(impl)} {}
  ImplPtr impl_;
  ChannelGuardType guard_;
};
} // namespace apache::thrift
#include <thrift/lib/cpp2/async/GuardedRequestChannel-inl.h>
