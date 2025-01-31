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

#include <thrift/lib/cpp/Field.h>
#include <thrift/lib/cpp2/type/detail/Field.h>

namespace apache {
namespace thrift {
namespace type {

using detail::field_size_v;

} // namespace type
namespace field {
template <class Tag, class T>
using ordinal = typename detail::OrdinalImpl<Tag, T>::type;

template <class Tag, class T>
using id = ::apache::thrift::detail::st::struct_private_access::
    field_id<type::native_type<Tag>, ordinal<Tag, T>>;

template <class Tag, class T>
using type_tag = ::apache::thrift::detail::st::struct_private_access::
    type_tag<type::native_type<Tag>, ordinal<Tag, T>>;

template <class Tag, class T>
using ident = ::apache::thrift::detail::st::struct_private_access::
    ident<type::native_type<Tag>, ordinal<Tag, T>>;

namespace detail {
template <class Tag, class T>
FOLLY_INLINE_VARIABLE constexpr bool exists = ordinal<Tag, T>::value !=
    static_cast<FieldOrdinal>(0);

struct TagImpl {
 public:
  template <class Tag, class T>
  using apply = type::field<
      type_tag<Tag, T>,
      FieldContext<
          type::native_type<Tag>,
          folly::to_underlying(id<Tag, T>::value)>>;
};
} // namespace detail

template <class Tag, class T>
using tag = typename std::conditional_t<
    detail::exists<Tag, T>,
    detail::TagImpl,
    detail::MakeVoid>::template apply<Tag, T>;

} // namespace field
} // namespace thrift
} // namespace apache
