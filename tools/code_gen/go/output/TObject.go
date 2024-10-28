type TObject struct {
  TEmitter
}

func (this TObject) Unref() TRet {
  return TRet(C.object_unref((*C.object_t)(this.handle)));
}

func TObjectRef(obj TObject) TObject {
  retObj := TObject{}
  retObj.handle = unsafe.Pointer(C.object_ref((*C.object_t)(obj.handle)))
  return retObj
}

func (this TObject) GetType() string {
  return C.GoString(C.object_get_type((*C.object_t)(this.handle)));
}

func (this TObject) GetDesc() string {
  return C.GoString(C.object_get_desc((*C.object_t)(this.handle)));
}

func (this TObject) GetSize() uint32 {
  return (uint32)(C.object_get_size((*C.object_t)(this.handle)));
}

func (this TObject) IsCollection() bool {
  return (bool)(C.object_is_collection((*C.object_t)(this.handle)));
}

func (this TObject) SetName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_name((*C.object_t)(this.handle), aname));
}

func (this TObject) Compare(other TObject) int {
  return (int)(C.object_compare((*C.object_t)(this.handle), (*C.object_t)(other.handle)));
}

func (this TObject) GetProp(name string, v TValue) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_get_prop((*C.object_t)(this.handle), aname, (*C.value_t)(v.handle)));
}

func (this TObject) GetPropStr(name string) string {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return C.GoString(C.object_get_prop_str((*C.object_t)(this.handle), aname));
}

func (this TObject) GetPropPointer(name string) unsafe.Pointer {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (unsafe.Pointer)(C.object_get_prop_pointer((*C.object_t)(this.handle), aname));
}

func (this TObject) GetPropObject(name string) TObject {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TObject{}
  retObj.handle = unsafe.Pointer(C.object_get_prop_object((*C.object_t)(this.handle), aname))
  return retObj
}

func (this TObject) GetPropInt(name string, defval int32) int32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int32)(C.object_get_prop_int((*C.object_t)(this.handle), aname, (C.int32_t)(defval)));
}

func (this TObject) GetPropBool(name string, defval bool) bool {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (bool)(C.object_get_prop_bool((*C.object_t)(this.handle), aname, (C.bool_t)(defval)));
}

func (this TObject) GetPropFloat(name string, defval float64) float64 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (float64)(C.object_get_prop_float((*C.object_t)(this.handle), aname, (C.float_t)(defval)));
}

func (this TObject) GetPropDouble(name string, defval float64) float64 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (float64)(C.object_get_prop_double((*C.object_t)(this.handle), aname, (C.double)(defval)));
}

func (this TObject) RemoveProp(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_remove_prop((*C.object_t)(this.handle), aname));
}

func (this TObject) SetProp(name string, value TValue) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop((*C.object_t)(this.handle), aname, (*C.value_t)(value.handle)));
}

func (this TObject) SetPropStr(name string, value string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.object_set_prop_str((*C.object_t)(this.handle), aname, avalue));
}

func (this TObject) SetPropObject(name string, value TObject) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_object((*C.object_t)(this.handle), aname, (*C.object_t)(value.handle)));
}

func (this TObject) SetPropInt(name string, value int32) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_int((*C.object_t)(this.handle), aname, (C.int32_t)(value)));
}

func (this TObject) SetPropBool(name string, value bool) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_bool((*C.object_t)(this.handle), aname, (C.bool_t)(value)));
}

func (this TObject) SetPropFloat(name string, value float64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_float((*C.object_t)(this.handle), aname, (C.float_t)(value)));
}

func (this TObject) SetPropDouble(name string, value float64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_double((*C.object_t)(this.handle), aname, (C.double)(value)));
}

func (this TObject) CopyProp(src TObject, name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_copy_prop((*C.object_t)(this.handle), (*C.object_t)(src.handle), aname));
}

func (this TObject) CopyProps(src TObject, overwrite bool) TRet {
  return TRet(C.object_copy_props((*C.object_t)(this.handle), (*C.object_t)(src.handle), (C.bool_t)(overwrite)));
}

func (this TObject) HasProp(name string) bool {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (bool)(C.object_has_prop((*C.object_t)(this.handle), aname));
}

func (this TObject) Eval(expr string, v TValue) TRet {
  aexpr := C.CString(expr)
  defer C.free(unsafe.Pointer(aexpr))
  return TRet(C.object_eval((*C.object_t)(this.handle), aexpr, (*C.value_t)(v.handle)));
}

func (this TObject) CanExec(name string, args string) bool {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  aargs := C.CString(args)
  defer C.free(unsafe.Pointer(aargs))
  return (bool)(C.object_can_exec((*C.object_t)(this.handle), aname, aargs));
}

func (this TObject) Execute(name string, args string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  aargs := C.CString(args)
  defer C.free(unsafe.Pointer(aargs))
  return TRet(C.object_exec((*C.object_t)(this.handle), aname, aargs));
}

func (this TObject) NotifyChanged() TRet {
  return TRet(C.object_notify_changed((*C.object_t)(this.handle)));
}

func (this TObject) HasPropByPath(path string) bool {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return (bool)(C.object_has_prop_by_path((*C.object_t)(this.handle), apath));
}

func (this TObject) GetPropStrByPath(path string) string {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return C.GoString(C.object_get_prop_str_by_path((*C.object_t)(this.handle), apath));
}

func (this TObject) GetPropPointerByPath(path string) unsafe.Pointer {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return (unsafe.Pointer)(C.object_get_prop_pointer_by_path((*C.object_t)(this.handle), apath));
}

func (this TObject) GetPropObjectByPath(path string) TObject {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  retObj := TObject{}
  retObj.handle = unsafe.Pointer(C.object_get_prop_object_by_path((*C.object_t)(this.handle), apath))
  return retObj
}

func (this TObject) GetPropIntByPath(path string, defval int32) int32 {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return (int32)(C.object_get_prop_int_by_path((*C.object_t)(this.handle), apath, (C.int32_t)(defval)));
}

func (this TObject) GetPropBoolByPath(path string, defval bool) bool {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return (bool)(C.object_get_prop_bool_by_path((*C.object_t)(this.handle), apath, (C.bool_t)(defval)));
}

func (this TObject) GetPropFloatByPath(path string, defval float64) float64 {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return (float64)(C.object_get_prop_float_by_path((*C.object_t)(this.handle), apath, (C.float_t)(defval)));
}

func (this TObject) SetPropByPath(path string, value TValue) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return TRet(C.object_set_prop_by_path((*C.object_t)(this.handle), apath, (*C.value_t)(value.handle)));
}

func (this TObject) SetPropStrByPath(path string, value string) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.object_set_prop_str_by_path((*C.object_t)(this.handle), apath, avalue));
}

func (this TObject) SetPropObjectByPath(path string, value TObject) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return TRet(C.object_set_prop_object_by_path((*C.object_t)(this.handle), apath, (*C.object_t)(value.handle)));
}

func (this TObject) SetPropIntByPath(path string, value int32) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return TRet(C.object_set_prop_int_by_path((*C.object_t)(this.handle), apath, (C.int32_t)(value)));
}

func (this TObject) SetPropBoolByPath(path string, value bool) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return TRet(C.object_set_prop_bool_by_path((*C.object_t)(this.handle), apath, (C.bool_t)(value)));
}

func (this TObject) SetPropFloatByPath(path string, value float64) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  return TRet(C.object_set_prop_float_by_path((*C.object_t)(this.handle), apath, (C.float_t)(value)));
}

func (this TObject) CanExecByPath(path string, args string) bool {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  aargs := C.CString(args)
  defer C.free(unsafe.Pointer(aargs))
  return (bool)(C.object_can_exec_by_path((*C.object_t)(this.handle), apath, aargs));
}

func (this TObject) ExecuteByPath(path string, args string) TRet {
  apath := C.CString(path)
  defer C.free(unsafe.Pointer(apath))
  aargs := C.CString(args)
  defer C.free(unsafe.Pointer(aargs))
  return TRet(C.object_exec_by_path((*C.object_t)(this.handle), apath, aargs));
}

func (this TObject) GetPropInt8(name string, defval int8) int8 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int8)(C.object_get_prop_int8((*C.object_t)(this.handle), aname, (C.int8_t)(defval)));
}

func (this TObject) SetPropInt8(name string, value int8) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_int8((*C.object_t)(this.handle), aname, (C.int8_t)(value)));
}

func (this TObject) GetPropUint8(name string, defval uint8) uint8 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (uint8)(C.object_get_prop_uint8((*C.object_t)(this.handle), aname, (C.uint8_t)(defval)));
}

func (this TObject) SetPropUint8(name string, value uint8) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_uint8((*C.object_t)(this.handle), aname, (C.uint8_t)(value)));
}

func (this TObject) GetPropInt16(name string, defval int16) int16 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int16)(C.object_get_prop_int16((*C.object_t)(this.handle), aname, (C.int16_t)(defval)));
}

func (this TObject) SetPropInt16(name string, value int16) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_int16((*C.object_t)(this.handle), aname, (C.int16_t)(value)));
}

func (this TObject) GetPropUint16(name string, defval uint16) uint16 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (uint16)(C.object_get_prop_uint16((*C.object_t)(this.handle), aname, (C.uint16_t)(defval)));
}

func (this TObject) SetPropUint16(name string, value uint16) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_uint16((*C.object_t)(this.handle), aname, (C.uint16_t)(value)));
}

func (this TObject) GetPropInt32(name string, defval int32) int32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int32)(C.object_get_prop_int32((*C.object_t)(this.handle), aname, (C.int32_t)(defval)));
}

func (this TObject) SetPropInt32(name string, value int32) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_int32((*C.object_t)(this.handle), aname, (C.int32_t)(value)));
}

func (this TObject) GetPropUint32(name string, defval uint32) uint32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (uint32)(C.object_get_prop_uint32((*C.object_t)(this.handle), aname, (C.uint32_t)(defval)));
}

func (this TObject) SetPropUint32(name string, value uint32) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_uint32((*C.object_t)(this.handle), aname, (C.uint32_t)(value)));
}

func (this TObject) GetPropInt64(name string, defval int64) int64 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int64)(C.object_get_prop_int64((*C.object_t)(this.handle), aname, (C.int64_t)(defval)));
}

func (this TObject) SetPropInt64(name string, value int64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_int64((*C.object_t)(this.handle), aname, (C.int64_t)(value)));
}

func (this TObject) GetPropUint64(name string, defval int64) int64 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int64)(C.object_get_prop_uint64((*C.object_t)(this.handle), aname, (C.uint64_t)(defval)));
}

func (this TObject) SetPropUint64(name string, value int64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.object_set_prop_uint64((*C.object_t)(this.handle), aname, (C.uint64_t)(value)));
}

func (this TObject) ClearProps() TRet {
  return TRet(C.object_clear_props((*C.object_t)(this.handle)));
}

func (this TObject) GetRefCount() int32 {
  return (int32)((*C.object_t)(unsafe.Pointer(this.handle)).ref_count);
}

func (this TObject) GetName() string {
  return C.GoString((*C.object_t)(unsafe.Pointer(this.handle)).name);
}

