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

#include <thrift/conformance/data/CompatibilityGenerator.h>

#include <cstdio>
#include <optional>
#include <random>
#include <set>
#include <stdexcept>
#include <string_view>
#include <vector>

#include <boost/mp11.hpp>
#include <fmt/core.h>
#include <folly/init/Init.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/conformance/cpp2/AnyRegistry.h>
#include <thrift/conformance/cpp2/Object.h>
#include <thrift/conformance/cpp2/Protocol.h>
#include <thrift/conformance/data/ValueGenerator.h>
#include <thrift/conformance/data/internal/TestGenerator.h>
#include <thrift/conformance/if/gen-cpp2/test_suite_types.h>
#include <thrift/lib/cpp/util/EnumUtils.h>
#include <thrift/lib/cpp2/protocol/Serializer.h>
#include <thrift/lib/cpp2/type/Name.h>
#include <thrift/test/testset/Testset.h>
#include <thrift/test/testset/gen-cpp2/testset_types_custom_protocol.h>

// TODO: use FieldQualifier
using apache::thrift::test::testset::FieldModifier;
using apache::thrift::test::testset::detail::mod_set;
using apache::thrift::test::testset::detail::struct_ByFieldType;
namespace mp11 = boost::mp11;

namespace apache::thrift::conformance::data {

namespace {

[[nodiscard]] std::unique_ptr<folly::IOBuf> serialize(
    const Object& a, const Protocol& protocol) {
  switch (auto p = protocol.standard()) {
    case StandardProtocol::Compact:
      return serializeObject<apache::thrift::CompactProtocolWriter>(a);
    case StandardProtocol::Binary:
      return serializeObject<apache::thrift::BinaryProtocolWriter>(a);
    default:
      throw std::invalid_argument(
          "Unsupported protocol: " + util::enumNameSafe(p));
  }
}

template <class TT>
[[nodiscard]] TestCase addFieldTestCase(const Protocol& protocol) {
  const typename struct_ByFieldType<TT, mod_set<>>::type def;

  RoundTripTestCase roundTrip;
  roundTrip.request()->value() = AnyRegistry::generated().store(def, protocol);
  roundTrip.request()->value()->data() = *serialize({}, protocol);
  roundTrip.expectedResponse().emplace().value() =
      AnyRegistry::generated().store(def, protocol);

  TestCase testCase;
  testCase.name() = fmt::format("testset.{}/AddField", type::getName<TT>());
  testCase.test()->roundTrip_ref() = std::move(roundTrip);
  return testCase;
}

template <class T>
[[nodiscard]] Object toObject(const T& t) {
  Value v;
  ::apache::thrift::protocol::detail::ObjectWriter writer{&v};
  t.write(&writer);
  return std::move(*v.objectValue_ref());
}

template <class TT>
[[nodiscard]] std::vector<TestCase> removeFieldTestCase(
    const Protocol& protocol) {
  const typename struct_ByFieldType<TT, mod_set<>>::type def;
  std::vector<TestCase> ret;

  for (const auto& value : ValueGenerator<TT>::getInterestingValues()) {
    typename struct_ByFieldType<TT, mod_set<>>::type data;
    data.field_1() = value.value;

    Object obj = toObject(def);
    Object dataObj = toObject(data);
    for (auto&& i : *dataObj.members()) {
      // Add new field with non-existing field id
      obj.members()[obj.members()->rbegin()->first + 1] = i.second;
    }

    RoundTripTestCase roundTrip;
    roundTrip.request()->value() =
        AnyRegistry::generated().store(def, protocol);
    roundTrip.request()->value()->data() = *serialize(obj, protocol);
    roundTrip.expectedResponse().emplace().value() =
        AnyRegistry::generated().store(def, protocol);

    TestCase testCase;
    testCase.name() = fmt::format(
        "testset.{}/RemoveField/{}", type::getName<TT>(), value.name);
    testCase.test()->roundTrip_ref() = std::move(roundTrip);
    ret.push_back(std::move(testCase));
  }

  return ret;
}

template <class ThriftStruct>
[[nodiscard]] std::unique_ptr<folly::IOBuf> serializeThriftStruct(
    const ThriftStruct& s, const Protocol& protocol) {
  static_assert(is_thrift_class_v<ThriftStruct>);
  switch (auto p = protocol.standard()) {
    case StandardProtocol::Compact:
      return apache::thrift::CompactSerializer::serialize<folly::IOBufQueue>(s)
          .move();
    case StandardProtocol::Binary:
      return apache::thrift::BinarySerializer::serialize<folly::IOBufQueue>(s)
          .move();
    default:
      throw std::invalid_argument(
          "Unsupported protocol: " + util::enumNameSafe(p));
  }
}

constexpr auto alwaysReturnTrue = [](auto&&) { return true; };

template <
    class Old,
    class New,
    bool compatible,
    class ShouldTest = decltype(alwaysReturnTrue)>
[[nodiscard]] std::vector<TestCase> changeFieldTypeTestCase(
    const Protocol& protocol, ShouldTest shouldTest = alwaysReturnTrue) {
  static_assert(!std::is_same_v<Old, New>);

  std::vector<TestCase> ret;

  for (const auto& value : ValueGenerator<Old>::getInterestingValues()) {
    if (!shouldTest(value)) {
      continue;
    }

    typename struct_ByFieldType<Old, mod_set<FieldModifier::Optional>>::type
        old_data;
    typename struct_ByFieldType<New, mod_set<FieldModifier::Optional>>::type
        new_data;

    old_data.field_1() = value.value;

    if constexpr (compatible) {
      // If type change is compatible, new data will be deserialized as old data
      new_data.field_1() = static_cast<type::native_type<New>>(value.value);
    }

    RoundTripTestCase roundTrip;
    roundTrip.request()->value() =
        AnyRegistry::generated().store(new_data, protocol);
    roundTrip.request()->value()->data() =
        *serializeThriftStruct(old_data, protocol);
    roundTrip.expectedResponse().emplace().value() =
        AnyRegistry::generated().store(new_data, protocol);

    TestCase testCase;
    testCase.name() = fmt::format(
        "testset.{}.{}/ChangeFieldType/{}",
        type::getName<Old>(),
        type::getName<New>(),
        value.name);
    testCase.test()->roundTrip_ref() = std::move(roundTrip);
    ret.push_back(std::move(testCase));
  }

  return ret;
}

template <class T>
[[nodiscard]] const char* getQualifierName() {
  if (std::is_same_v<T, mod_set<>>) {
    return "Unqualified";
  }
  // TODO(ytj): use std::is_same_v<T, mod_set<type::FieldQualifier::Optional>>
  if (std::is_same_v<T, mod_set<FieldModifier::Optional>>) {
    return "Optional";
  }
  if (std::is_same_v<T, mod_set<FieldModifier::Required>>) {
    return "Required";
  }
  throw std::runtime_error("Unknown ModSet");
}

template <class Old, class New>
[[nodiscard]] std::vector<TestCase> changeQualifierTestCase(
    const Protocol& protocol) {
  using TypeTag = type::list<type::i32_t>;
  std::vector<TestCase> ret;

  for (const auto& value : ValueGenerator<TypeTag>::getInterestingValues()) {
    typename struct_ByFieldType<TypeTag, Old>::type old_data;
    typename struct_ByFieldType<TypeTag, New>::type new_data;

    old_data.field_1() = value.value;
    new_data.field_1() = value.value;

    RoundTripTestCase roundTrip;
    roundTrip.request()->value() =
        AnyRegistry::generated().store(old_data, protocol);
    roundTrip.expectedResponse().emplace().value() =
        AnyRegistry::generated().store(new_data, protocol);

    TestCase testCase;
    testCase.name() = fmt::format(
        "testset.{}.{}/ChangeQualifier/{}",
        getQualifierName<Old>(),
        getQualifierName<New>(),
        value.name);
    testCase.test()->roundTrip_ref() = std::move(roundTrip);
    ret.push_back(std::move(testCase));
  }

  return ret;
}

template <typename TT>
Test createCompatibilityTest(const Protocol& protocol) {
  Test test;
  test.name() = protocol.name();

  auto addToTest = [&](std::vector<TestCase>&& tests) {
    for (auto& t : tests) {
      test.testCases()->push_back(std::move(t));
    }
  };

  addToTest({addFieldTestCase<TT>(protocol)});
  addToTest(removeFieldTestCase<TT>(protocol));
  addToTest(changeFieldTypeTestCase<type::i32_t, type::i16_t, false>(protocol));
  addToTest(changeFieldTypeTestCase<type::i32_t, type::i64_t, false>(protocol));
  addToTest(
      changeFieldTypeTestCase<type::string_t, type::binary_t, true>(protocol));
  addToTest(changeFieldTypeTestCase<type::binary_t, type::string_t, true>(
      protocol, [](auto&& value) { return value.name != "bad_utf8"; }));
  addToTest(changeFieldTypeTestCase<type::binary_t, type::string_t, false>(
      protocol, [](auto&& value) { return value.name == "bad_utf8"; }));
  addToTest(changeFieldTypeTestCase<
            type::set<type::i64_t>,
            type::list<type::i64_t>,
            false>(protocol));
  addToTest(changeFieldTypeTestCase<
            type::list<type::i64_t>,
            type::set<type::i64_t>,
            false>(protocol));

  // TODO: Test change between enum and integer.

  addToTest(
      changeQualifierTestCase<mod_set<>, mod_set<FieldModifier::Optional>>(
          protocol));
  addToTest(
      changeQualifierTestCase<mod_set<>, mod_set<FieldModifier::Required>>(
          protocol));
  addToTest(
      changeQualifierTestCase<mod_set<FieldModifier::Optional>, mod_set<>>(
          protocol));
  addToTest(changeQualifierTestCase<
            mod_set<FieldModifier::Optional>,
            mod_set<FieldModifier::Required>>(protocol));
  addToTest(
      changeQualifierTestCase<mod_set<FieldModifier::Required>, mod_set<>>(
          protocol));
  addToTest(changeQualifierTestCase<
            mod_set<FieldModifier::Required>,
            mod_set<FieldModifier::Optional>>(protocol));

  return test;
}
} // namespace

TestSuite createCompatibilitySuite() {
  TestSuite suite;
  suite.name() = "CompatibilityTest";
  for (const auto& protocol : detail::toProtocols(detail::kDefaultProtocols)) {
    mp11::mp_for_each<detail::PrimaryTypeTags>([&](auto t) {
      suite.tests()->emplace_back(
          createCompatibilityTest<decltype(t)>(protocol));
    });
  }
  return suite;
}

} // namespace apache::thrift::conformance::data
