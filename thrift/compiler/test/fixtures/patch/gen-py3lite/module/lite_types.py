#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.py3lite.types as _fbthrift_py3lite_types
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions


import patch.lite_types


class MyStruct(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "boolVal",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "byteVal",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "i16Val",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "i32Val",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "i64Val",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "floatVal",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
        ),
        (
            7,  # id
            True,  # isUnqualified
            "doubleVal",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
        ),
        (
            8,  # id
            True,  # isUnqualified
            "stringVal",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
        ),
        (
            9,  # id
            True,  # isUnqualified
            "binaryVal",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/patch/MyStruct"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStruct()



class MyStructPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "boolVal",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.BoolPatch),  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "byteVal",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.BytePatch),  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "i16Val",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.I16Patch),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "i32Val",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.I32Patch),  # typeinfo
            None,  # default value
        ),
        (
            5,  # id
            True,  # isUnqualified
            "i64Val",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.I64Patch),  # typeinfo
            None,  # default value
        ),
        (
            6,  # id
            True,  # isUnqualified
            "floatVal",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.FloatPatch),  # typeinfo
            None,  # default value
        ),
        (
            7,  # id
            True,  # isUnqualified
            "doubleVal",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.DoublePatch),  # typeinfo
            None,  # default value
        ),
        (
            8,  # id
            True,  # isUnqualified
            "stringVal",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.StringPatch),  # typeinfo
            None,  # default value
        ),
        (
            9,  # id
            True,  # isUnqualified
            "binaryVal",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(patch.lite_types.BinaryPatch),  # typeinfo
            None,  # default value
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStructPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/patch/MyStructPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStructPatch()



class MyStructValuePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            False,  # isUnqualified
            "assign",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
        ),
        (
            2,  # id
            True,  # isUnqualified
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStructPatch),  # typeinfo
            None,  # default value
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStructValuePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/patch/MyStructValuePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStructValuePatch()



class OptionalMyStructValuePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            True,  # isUnqualified
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
        ),
        (
            3,  # id
            True,  # isUnqualified
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStructValuePatch),  # typeinfo
            None,  # default value
        ),
        (
            1,  # id
            False,  # isUnqualified
            "ensure",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
        ),
        (
            4,  # id
            True,  # isUnqualified
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(MyStructValuePatch),  # typeinfo
            None,  # default value
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.OptionalMyStructValuePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/patch/OptionalMyStructValuePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalMyStructValuePatch()


# This unfortunately has to be down here to prevent circular imports
import module.lite_metadata


def _fbthrift_metadata__struct_MyStruct():
    return module.lite_metadata.gen_metadata_struct_MyStruct()
def _fbthrift_metadata__struct_MyStructPatch():
    return module.lite_metadata.gen_metadata_struct_MyStructPatch()
def _fbthrift_metadata__struct_MyStructValuePatch():
    return module.lite_metadata.gen_metadata_struct_MyStructValuePatch()
def _fbthrift_metadata__struct_OptionalMyStructValuePatch():
    return module.lite_metadata.gen_metadata_struct_OptionalMyStructValuePatch()



_fbthrift_py3lite_types.fill_specs(
    MyStruct,
    MyStructPatch,
    MyStructValuePatch,
    OptionalMyStructValuePatch,
)
