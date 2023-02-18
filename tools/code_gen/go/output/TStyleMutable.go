type TStyleMutable struct {
  TStyle
}

func (this TStyleMutable) SetName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.style_mutable_set_name((*C.style_t)(this.handle), aname));
}

func (this TStyleMutable) SetInt(state string, name string, val uint32) TRet {
  astate := C.CString(state)
  defer C.free(unsafe.Pointer(astate))
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.style_mutable_set_int((*C.style_t)(this.handle), astate, aname, (C.uint32_t)(val)));
}

func TStyleMutableCast(s TStyle) TStyleMutable {
  retObj := TStyleMutable{}
  retObj.handle = unsafe.Pointer(C.style_mutable_cast((*C.style_t)(s.handle)))
  return retObj
}

func TStyleMutableCreate(default_style TStyle) TStyle {
  retObj := TStyleMutable{}
  retObj.handle = unsafe.Pointer(C.style_mutable_create((*C.style_t)(default_style.handle)))
  return retObj.TStyle
}

func (this TStyleMutable) GetName() string {
  return C.GoString((*C.style_mutable_t)(unsafe.Pointer(this.handle)).name);
}

