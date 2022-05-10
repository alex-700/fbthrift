/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::structured_annotation_inline> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).count_ref());
    case 2:
      return f(1, static_cast<T&&>(t).name_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::structured_annotation_inline");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::structured_annotation_with_default> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).name_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::structured_annotation_with_default");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::structured_annotation_forward> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).count_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::structured_annotation_forward");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::structured_annotation_recursive> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).name_ref());
    case 2:
      return f(1, static_cast<T&&>(t).recurse_ref());
    case 3:
      return f(2, static_cast<T&&>(t).forward_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::structured_annotation_recursive");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::structured_annotation_nested> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).name_ref());
    case 2:
      return f(1, static_cast<T&&>(t).nest_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::structured_annotation_nested");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::MyStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).annotated_field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).annotated_type_ref());
    case 3:
      return f(2, static_cast<T&&>(t).annotated_recursive_ref());
    case 4:
      return f(3, static_cast<T&&>(t).annotated_nested_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::MyStruct");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::MyException> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).context_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::MyException");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::basic-structured-annotations::MyUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).first_ref());
    case 2:
      return f(1, static_cast<T&&>(t).second_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::basic-structured-annotations::MyUnion");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
