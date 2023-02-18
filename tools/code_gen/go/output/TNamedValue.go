type TNamedValue struct {
  handle unsafe.Pointer
}

func TNamedValueCreate() TNamedValue {
  retObj := TNamedValue{}
  retObj.handle = unsafe.Pointer(C.named_value_create())
  return retObj
}

func TNamedValueCast(nv TNamedValue) TNamedValue {
  retObj := TNamedValue{}
  retObj.handle = unsafe.Pointer(C.named_value_cast((*C.named_value_t)(nv.handle)))
  return retObj
}

func (this TNamedValue) SetName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.named_value_set_name((*C.named_value_t)(this.handle), aname));
}

func (this TNamedValue) SetValue(value TValue) TRet {
  return TRet(C.named_value_set_value((*C.named_value_t)(this.handle), (*C.value_t)(value.handle)));
}

func (this TNamedValue) GetValue() TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.named_value_get_value((*C.named_value_t)(this.handle)))
  return retObj
}

func (this TNamedValue) Destroy() TRet {
  return TRet(C.named_value_destroy((*C.named_value_t)(this.handle)));
}

func (this TNamedValue) GetName() string {
  return C.GoString((*C.named_value_t)(unsafe.Pointer(this.handle)).name);
}

