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

#include <any>
#include <typeinfo>

#include <folly/CPortability.h>
#include <folly/lang/Exception.h>
#include <thrift/lib/cpp2/type/NativeType.h>
#include <thrift/lib/cpp2/type/Tag.h>
#include <thrift/lib/cpp2/type/Type.h>

namespace apache {
namespace thrift {
namespace type {
namespace detail {

struct Ptr;

// Runtime type information for a Thrift type.
struct TypeInfo {
  const Type thriftType;
  const std::type_info& cppType;

  // Type-erased ~v-table.
  // TODO(afuller): Consider merging some of these functions to reduce size.
  bool (*empty)(const void*);
  bool (*identical)(const void*, const Ptr&);
  void (*clear)(void*);
  void (*append)(void*, const Ptr&);
  bool (*add)(void*, const Ptr&);
  bool (*put)(void*, FieldId, const Ptr*, const Ptr&);
  Ptr (*get)(Ptr, FieldId, const Ptr*);

  // Type-safe, const-preserving casting functions.
  template <typename T>
  constexpr T* tryAs(void* ptr) const noexcept {
    return cppType == typeid(T) ? static_cast<T*>(ptr) : nullptr;
  }
  template <typename T>
  const T* tryAs(const void* ptr) const noexcept {
    return cppType == typeid(T) ? static_cast<const T*>(ptr) : nullptr;
  }
  template <typename T, typename V = void>
  decltype(auto) as(V* ptr) const {
    if (auto* tptr = tryAs<T>(ptr)) {
      return *tptr;
    }
    folly::throw_exception<std::bad_any_cast>();
  }
};

// Returns the singleton TypeInfo.
template <typename Op, typename Tag, typename T = native_type<Tag>>
FOLLY_EXPORT const TypeInfo& getTypeInfo() {
  static const auto& kValue = *new TypeInfo{
      Tag{},
      typeid(T),
      &Op::empty,
      &Op::identical,
      &Op::clear,
      &Op::append,
      &Op::add,
      &Op::put,
      &Op::get,
  };
  return kValue;
}

} // namespace detail
} // namespace type
} // namespace thrift
} // namespace apache
