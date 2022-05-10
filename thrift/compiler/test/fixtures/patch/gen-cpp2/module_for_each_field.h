/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::test::fixtures::patch::MyData> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).data1_ref()...);
    f(1, static_cast<T&&>(t).data2_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).option1_ref()...);
    f(1, static_cast<T&&>(t).option2_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).boolVal_ref()...);
    f(1, static_cast<T&&>(t).byteVal_ref()...);
    f(2, static_cast<T&&>(t).i16Val_ref()...);
    f(3, static_cast<T&&>(t).i32Val_ref()...);
    f(4, static_cast<T&&>(t).i64Val_ref()...);
    f(5, static_cast<T&&>(t).floatVal_ref()...);
    f(6, static_cast<T&&>(t).doubleVal_ref()...);
    f(7, static_cast<T&&>(t).stringVal_ref()...);
    f(8, static_cast<T&&>(t).binaryVal_ref()...);
    f(9, static_cast<T&&>(t).structVal_ref()...);
    f(10, static_cast<T&&>(t).optBoolVal_ref()...);
    f(11, static_cast<T&&>(t).optByteVal_ref()...);
    f(12, static_cast<T&&>(t).optI16Val_ref()...);
    f(13, static_cast<T&&>(t).optI32Val_ref()...);
    f(14, static_cast<T&&>(t).optI64Val_ref()...);
    f(15, static_cast<T&&>(t).optFloatVal_ref()...);
    f(16, static_cast<T&&>(t).optDoubleVal_ref()...);
    f(17, static_cast<T&&>(t).optStringVal_ref()...);
    f(18, static_cast<T&&>(t).optBinaryVal_ref()...);
    f(19, static_cast<T&&>(t).optStructVal_ref()...);
    f(20, static_cast<T&&>(t).optListVal_ref()...);
    f(21, static_cast<T&&>(t).optSetVal_ref()...);
    f(22, static_cast<T&&>(t).optMapVal_ref()...);
    f(23, static_cast<T&&>(t).unionVal_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyDataPatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).data1_ref()...);
    f(1, static_cast<T&&>(t).data2_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyDataValuePatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).assign_ref()...);
    f(1, static_cast<T&&>(t).clear_ref()...);
    f(2, static_cast<T&&>(t).patch_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::OptionalMyDataValuePatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyUnionPatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).option1_ref()...);
    f(1, static_cast<T&&>(t).option2_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyUnionValuePatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::OptionalMyUnionValuePatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyStructField21PatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).assign_ref()...);
    f(1, static_cast<T&&>(t).clear_ref()...);
    f(2, static_cast<T&&>(t).prepend_ref()...);
    f(3, static_cast<T&&>(t).append_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::OptionalMyStructField21PatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyStructField22PatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).assign_ref()...);
    f(1, static_cast<T&&>(t).clear_ref()...);
    f(2, static_cast<T&&>(t).remove_ref()...);
    f(3, static_cast<T&&>(t).add_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::OptionalMyStructField22PatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyStructField23PatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).assign_ref()...);
    f(1, static_cast<T&&>(t).clear_ref()...);
    f(2, static_cast<T&&>(t).put_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::OptionalMyStructField23PatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyStructPatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).boolVal_ref()...);
    f(1, static_cast<T&&>(t).byteVal_ref()...);
    f(2, static_cast<T&&>(t).i16Val_ref()...);
    f(3, static_cast<T&&>(t).i32Val_ref()...);
    f(4, static_cast<T&&>(t).i64Val_ref()...);
    f(5, static_cast<T&&>(t).floatVal_ref()...);
    f(6, static_cast<T&&>(t).doubleVal_ref()...);
    f(7, static_cast<T&&>(t).stringVal_ref()...);
    f(8, static_cast<T&&>(t).binaryVal_ref()...);
    f(9, static_cast<T&&>(t).structVal_ref()...);
    f(10, static_cast<T&&>(t).optBoolVal_ref()...);
    f(11, static_cast<T&&>(t).optByteVal_ref()...);
    f(12, static_cast<T&&>(t).optI16Val_ref()...);
    f(13, static_cast<T&&>(t).optI32Val_ref()...);
    f(14, static_cast<T&&>(t).optI64Val_ref()...);
    f(15, static_cast<T&&>(t).optFloatVal_ref()...);
    f(16, static_cast<T&&>(t).optDoubleVal_ref()...);
    f(17, static_cast<T&&>(t).optStringVal_ref()...);
    f(18, static_cast<T&&>(t).optBinaryVal_ref()...);
    f(19, static_cast<T&&>(t).optStructVal_ref()...);
    f(20, static_cast<T&&>(t).optListVal_ref()...);
    f(21, static_cast<T&&>(t).optSetVal_ref()...);
    f(22, static_cast<T&&>(t).optMapVal_ref()...);
    f(23, static_cast<T&&>(t).unionVal_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::MyStructValuePatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).assign_ref()...);
    f(1, static_cast<T&&>(t).clear_ref()...);
    f(2, static_cast<T&&>(t).patch_ref()...);
  }
};

template <>
struct ForEachField<::test::fixtures::patch::OptionalMyStructValuePatchStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).clear_ref()...);
    f(1, static_cast<T&&>(t).patch_ref()...);
    f(2, static_cast<T&&>(t).ensure_ref()...);
    f(3, static_cast<T&&>(t).patchAfter_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
