#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport patch.types as _patch_types
cimport patch.builders as _patch_builders

cimport module.types as _module_types

cdef class MyData_Builder(thrift.py3.builder.StructBuilder):
    cdef public str data1
    cdef public pint data2


cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool boolVal
    cdef public pint byteVal
    cdef public pint i16Val
    cdef public pint i32Val
    cdef public pint i64Val
    cdef public pfloat floatVal
    cdef public pfloat doubleVal
    cdef public str stringVal
    cdef public bytes binaryVal
    cdef public object structVal
    cdef public pbool optBoolVal
    cdef public pint optByteVal
    cdef public pint optI16Val
    cdef public pint optI32Val
    cdef public pint optI64Val
    cdef public pfloat optFloatVal
    cdef public pfloat optDoubleVal
    cdef public str optStringVal
    cdef public bytes optBinaryVal
    cdef public object optStructVal


cdef class MyDataPatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public object data1
    cdef public object data2


cdef class MyDataValuePatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public object assign
    cdef public pbool clear
    cdef public object patch


cdef class OptionalMyDataValuePatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool clear
    cdef public object patch
    cdef public object ensure
    cdef public object patchAfter


cdef class MyStructPatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public object boolVal
    cdef public object byteVal
    cdef public object i16Val
    cdef public object i32Val
    cdef public object i64Val
    cdef public object floatVal
    cdef public object doubleVal
    cdef public object stringVal
    cdef public object binaryVal
    cdef public object structVal
    cdef public object optBoolVal
    cdef public object optByteVal
    cdef public object optI16Val
    cdef public object optI32Val
    cdef public object optI64Val
    cdef public object optFloatVal
    cdef public object optDoubleVal
    cdef public object optStringVal
    cdef public object optBinaryVal
    cdef public object optStructVal


cdef class MyStructValuePatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public object assign
    cdef public pbool clear
    cdef public object patch


cdef class OptionalMyStructValuePatch_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool clear
    cdef public object patch
    cdef public object ensure
    cdef public object patchAfter


