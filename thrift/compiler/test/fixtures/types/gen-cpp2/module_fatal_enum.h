/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_fatal.h"

#include <fatal/type/enum.h>

#include <type_traits>

namespace apache { namespace thrift { namespace fixtures { namespace types {

namespace thrift_fatal_impl_detail {

struct has_bitwise_ops_enum_traits {
  using type = ::apache::thrift::fixtures::types::has_bitwise_ops;
  using name = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::has_bitwise_ops;

  struct has_bitwise_ops__struct_unique_strings_list {
    using none = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::none;
    using zero = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::zero;
    using one = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::one;
    using two = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::two;
    using three = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::three;
  };

  struct has_bitwise_ops__struct_enum_members_none {
    using name = has_bitwise_ops__struct_unique_strings_list::none;
    using value = std::integral_constant<type, type::none>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct has_bitwise_ops__struct_enum_members_zero {
    using name = has_bitwise_ops__struct_unique_strings_list::zero;
    using value = std::integral_constant<type, type::zero>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct has_bitwise_ops__struct_enum_members_one {
    using name = has_bitwise_ops__struct_unique_strings_list::one;
    using value = std::integral_constant<type, type::one>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct has_bitwise_ops__struct_enum_members_two {
    using name = has_bitwise_ops__struct_unique_strings_list::two;
    using value = std::integral_constant<type, type::two>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct has_bitwise_ops__struct_enum_members_three {
    using name = has_bitwise_ops__struct_unique_strings_list::three;
    using value = std::integral_constant<type, type::three>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct has_bitwise_ops__struct_enum_members {
    using none = has_bitwise_ops__struct_enum_members_none;
    using zero = has_bitwise_ops__struct_enum_members_zero;
    using one = has_bitwise_ops__struct_enum_members_one;
    using two = has_bitwise_ops__struct_enum_members_two;
    using three = has_bitwise_ops__struct_enum_members_three;
  };

  using member = has_bitwise_ops__struct_enum_members;

  using fields = ::fatal::list<
      member::none,
      member::zero,
      member::one,
      member::two,
      member::three
  >;

  class annotations {
    struct annotations__unique_annotations_keys {
      using cpp_declare_bitwise_ops = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::cpp_declare_bitwise_ops;
    };

    struct annotations__unique_annotations_values {
      using cpp_declare_bitwise_ops = ::fatal::sequence<char, '1'>;
    };

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::list<
      ::apache::thrift::annotation<
        keys::cpp_declare_bitwise_ops,
        values::cpp_declare_bitwise_ops,
        ::std::integral_constant< ::std::uintmax_t, 1>
      >
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::none: return "none";
      case type::zero: return "zero";
      case type::one: return "one";
      case type::two: return "two";
      case type::three: return "three";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::apache::thrift::fixtures::types::thrift_fatal_impl_detail::has_bitwise_ops_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::apache::thrift::fixtures::types::thrift_fatal_impl_detail::has_bitwise_ops_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(1216557680140306888ull)
  >
);
namespace thrift_fatal_impl_detail {

struct is_unscoped_enum_traits {
  using type = ::apache::thrift::fixtures::types::is_unscoped;
  using name = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::is_unscoped;

  struct is_unscoped__struct_unique_strings_list {
    using hello = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::hello;
    using world = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::world;
  };

  struct is_unscoped__struct_enum_members_hello {
    using name = is_unscoped__struct_unique_strings_list::hello;
    using value = std::integral_constant<type, type::hello>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct is_unscoped__struct_enum_members_world {
    using name = is_unscoped__struct_unique_strings_list::world;
    using value = std::integral_constant<type, type::world>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct is_unscoped__struct_enum_members {
    using hello = is_unscoped__struct_enum_members_hello;
    using world = is_unscoped__struct_enum_members_world;
  };

  using member = is_unscoped__struct_enum_members;

  using fields = ::fatal::list<
      member::hello,
      member::world
  >;

  class annotations {
    struct annotations__unique_annotations_keys {
      using cpp_deprecated_enum_unscoped = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::cpp_deprecated_enum_unscoped;
    };

    struct annotations__unique_annotations_values {
      using cpp_deprecated_enum_unscoped = ::fatal::sequence<char, '1'>;
    };

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::list<
      ::apache::thrift::annotation<
        keys::cpp_deprecated_enum_unscoped,
        values::cpp_deprecated_enum_unscoped,
        ::std::integral_constant< ::std::uintmax_t, 1>
      >
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::hello: return "hello";
      case type::world: return "world";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::apache::thrift::fixtures::types::thrift_fatal_impl_detail::is_unscoped_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::apache::thrift::fixtures::types::thrift_fatal_impl_detail::is_unscoped_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(2509072249807621768ull)
  >
);
namespace thrift_fatal_impl_detail {

struct MyForwardRefEnum_enum_traits {
  using type = ::apache::thrift::fixtures::types::MyForwardRefEnum;
  using name = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::MyForwardRefEnum;

  struct MyForwardRefEnum__struct_unique_strings_list {
    using ZERO = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::ZERO;
    using NONZERO = thrift_fatal_impl_detail::apache_thrift_fixtures_types_module__unique_strings_list::NONZERO;
  };

  struct MyForwardRefEnum__struct_enum_members_ZERO {
    using name = MyForwardRefEnum__struct_unique_strings_list::ZERO;
    using value = std::integral_constant<type, type::ZERO>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct MyForwardRefEnum__struct_enum_members_NONZERO {
    using name = MyForwardRefEnum__struct_unique_strings_list::NONZERO;
    using value = std::integral_constant<type, type::NONZERO>;

    class annotations {
      public:
      using keys = void;
      using values = void;
      using map = ::fatal::list<
      >;
    };
  };

  struct MyForwardRefEnum__struct_enum_members {
    using ZERO = MyForwardRefEnum__struct_enum_members_ZERO;
    using NONZERO = MyForwardRefEnum__struct_enum_members_NONZERO;
  };

  using member = MyForwardRefEnum__struct_enum_members;

  using fields = ::fatal::list<
      member::ZERO,
      member::NONZERO
  >;

  class annotations {
    public:
    using keys = void;
    using values = void;
    using map = ::fatal::list<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::ZERO: return "ZERO";
      case type::NONZERO: return "NONZERO";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::apache::thrift::fixtures::types::thrift_fatal_impl_detail::MyForwardRefEnum_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::apache::thrift::fixtures::types::thrift_fatal_impl_detail::MyForwardRefEnum_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(11057525912578401640ull)
  >
);

}}}} // apache::thrift::fixtures::types
