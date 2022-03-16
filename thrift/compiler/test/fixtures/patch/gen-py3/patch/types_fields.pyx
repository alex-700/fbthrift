#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport make_unique, unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast


@__cython.auto_pickle(False)
cdef class __GeneratePatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __GeneratePatch_FieldsSetter _fbthrift_create(_patch_types.cGeneratePatch* struct_cpp_obj):
        cdef __GeneratePatch_FieldsSetter __fbthrift_inst = __GeneratePatch_FieldsSetter.__new__(__GeneratePatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        return __fbthrift_inst

    cdef void set_field(__GeneratePatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __GeneratePatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)


@__cython.auto_pickle(False)
cdef class __BoolPatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __BoolPatch_FieldsSetter _fbthrift_create(_patch_types.cBoolPatch* struct_cpp_obj):
        cdef __BoolPatch_FieldsSetter __fbthrift_inst = __BoolPatch_FieldsSetter.__new__(__BoolPatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __BoolPatch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"invert")] = __BoolPatch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__BoolPatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __BoolPatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cBoolPatch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, bool):
            raise TypeError(f'assign is not a { bool !r}.')
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field invert
        if _fbthrift_value is None:
            __reset_field[_patch_types.cBoolPatch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, bool):
            raise TypeError(f'invert is not a { bool !r}.')
        deref(self._struct_cpp_obj).invert_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __BytePatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __BytePatch_FieldsSetter _fbthrift_create(_patch_types.cBytePatch* struct_cpp_obj):
        cdef __BytePatch_FieldsSetter __fbthrift_inst = __BytePatch_FieldsSetter.__new__(__BytePatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __BytePatch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"add")] = __BytePatch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__BytePatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __BytePatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cBytePatch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'assign is not a { int !r}.')
        _fbthrift_value = <cint8_t> _fbthrift_value
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field add
        if _fbthrift_value is None:
            __reset_field[_patch_types.cBytePatch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'add is not a { int !r}.')
        _fbthrift_value = <cint8_t> _fbthrift_value
        deref(self._struct_cpp_obj).add_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __I16Patch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __I16Patch_FieldsSetter _fbthrift_create(_patch_types.cI16Patch* struct_cpp_obj):
        cdef __I16Patch_FieldsSetter __fbthrift_inst = __I16Patch_FieldsSetter.__new__(__I16Patch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __I16Patch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"add")] = __I16Patch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__I16Patch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __I16Patch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cI16Patch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'assign is not a { int !r}.')
        _fbthrift_value = <cint16_t> _fbthrift_value
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field add
        if _fbthrift_value is None:
            __reset_field[_patch_types.cI16Patch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'add is not a { int !r}.')
        _fbthrift_value = <cint16_t> _fbthrift_value
        deref(self._struct_cpp_obj).add_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __I32Patch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __I32Patch_FieldsSetter _fbthrift_create(_patch_types.cI32Patch* struct_cpp_obj):
        cdef __I32Patch_FieldsSetter __fbthrift_inst = __I32Patch_FieldsSetter.__new__(__I32Patch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __I32Patch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"add")] = __I32Patch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__I32Patch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __I32Patch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cI32Patch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'assign is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field add
        if _fbthrift_value is None:
            __reset_field[_patch_types.cI32Patch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'add is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).add_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __I64Patch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __I64Patch_FieldsSetter _fbthrift_create(_patch_types.cI64Patch* struct_cpp_obj):
        cdef __I64Patch_FieldsSetter __fbthrift_inst = __I64Patch_FieldsSetter.__new__(__I64Patch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __I64Patch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"add")] = __I64Patch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__I64Patch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __I64Patch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cI64Patch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'assign is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field add
        if _fbthrift_value is None:
            __reset_field[_patch_types.cI64Patch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'add is not a { int !r}.')
        _fbthrift_value = <cint64_t> _fbthrift_value
        deref(self._struct_cpp_obj).add_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __FloatPatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __FloatPatch_FieldsSetter _fbthrift_create(_patch_types.cFloatPatch* struct_cpp_obj):
        cdef __FloatPatch_FieldsSetter __fbthrift_inst = __FloatPatch_FieldsSetter.__new__(__FloatPatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __FloatPatch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"add")] = __FloatPatch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__FloatPatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __FloatPatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cFloatPatch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'assign is not a { float !r}.')
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field add
        if _fbthrift_value is None:
            __reset_field[_patch_types.cFloatPatch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'add is not a { float !r}.')
        deref(self._struct_cpp_obj).add_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __DoublePatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __DoublePatch_FieldsSetter _fbthrift_create(_patch_types.cDoublePatch* struct_cpp_obj):
        cdef __DoublePatch_FieldsSetter __fbthrift_inst = __DoublePatch_FieldsSetter.__new__(__DoublePatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __DoublePatch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"add")] = __DoublePatch_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__DoublePatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __DoublePatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cDoublePatch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'assign is not a { float !r}.')
        deref(self._struct_cpp_obj).assign_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field add
        if _fbthrift_value is None:
            __reset_field[_patch_types.cDoublePatch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, (float, int)):
            raise TypeError(f'add is not a { float !r}.')
        deref(self._struct_cpp_obj).add_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __StringPatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __StringPatch_FieldsSetter _fbthrift_create(_patch_types.cStringPatch* struct_cpp_obj):
        cdef __StringPatch_FieldsSetter __fbthrift_inst = __StringPatch_FieldsSetter.__new__(__StringPatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __StringPatch_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"append")] = __StringPatch_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"prepend")] = __StringPatch_FieldsSetter._set_field_2
        return __fbthrift_inst

    cdef void set_field(__StringPatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __StringPatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cStringPatch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'assign is not a { str !r}.')
        deref(self._struct_cpp_obj).assign_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field append
        if _fbthrift_value is None:
            __reset_field[_patch_types.cStringPatch](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'append is not a { str !r}.')
        deref(self._struct_cpp_obj).append_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field prepend
        if _fbthrift_value is None:
            __reset_field[_patch_types.cStringPatch](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'prepend is not a { str !r}.')
        deref(self._struct_cpp_obj).prepend_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __BinaryPatch_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __BinaryPatch_FieldsSetter _fbthrift_create(_patch_types.cBinaryPatch* struct_cpp_obj):
        cdef __BinaryPatch_FieldsSetter __fbthrift_inst = __BinaryPatch_FieldsSetter.__new__(__BinaryPatch_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"assign")] = __BinaryPatch_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__BinaryPatch_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __BinaryPatch_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field assign
        if _fbthrift_value is None:
            __reset_field[_patch_types.cBinaryPatch](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, bytes):
            raise TypeError(f'assign is not a { bytes !r}.')
        deref(self._struct_cpp_obj).assign_ref().assign(_patch_types._folly_IOBuf(cmove(<string>_fbthrift_value)))

