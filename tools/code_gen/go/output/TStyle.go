type TStyle struct {
  handle unsafe.Pointer
}

func (this TStyle) NotifyWidgetStateChanged(widget TWidget) TRet {
  return TRet(C.style_notify_widget_state_changed((*C.style_t)(this.handle), (*C.widget_t)(widget.handle)));
}

func (this TStyle) IsValid() bool {
  return (bool)(C.style_is_valid((*C.style_t)(this.handle)));
}

func (this TStyle) GetInt(name string, defval int32) int32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int32)(C.style_get_int((*C.style_t)(this.handle), aname, (C.int32_t)(defval)));
}

func (this TStyle) GetUint(name string, defval uint32) uint32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (uint32)(C.style_get_uint((*C.style_t)(this.handle), aname, (C.uint32_t)(defval)));
}

func (this TStyle) GetStr(name string, defval string) string {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  adefval := C.CString(defval)
  defer C.free(unsafe.Pointer(adefval))
  return C.GoString(C.style_get_str((*C.style_t)(this.handle), aname, adefval));
}

func (this TStyle) Get(state string, name string, value TValue) TRet {
  astate := C.CString(state)
  defer C.free(unsafe.Pointer(astate))
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.style_get((*C.style_t)(this.handle), astate, aname, (*C.value_t)(value.handle)));
}

func (this TStyle) Set(state string, name string, value TValue) TRet {
  astate := C.CString(state)
  defer C.free(unsafe.Pointer(astate))
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.style_set((*C.style_t)(this.handle), astate, aname, (*C.value_t)(value.handle)));
}

func (this TStyle) UpdateState(theme TTheme, widget_type string, style_name string, widget_state string) TRet {
  awidget_type := C.CString(widget_type)
  defer C.free(unsafe.Pointer(awidget_type))
  astyle_name := C.CString(style_name)
  defer C.free(unsafe.Pointer(astyle_name))
  awidget_state := C.CString(widget_state)
  defer C.free(unsafe.Pointer(awidget_state))
  return TRet(C.style_update_state((*C.style_t)(this.handle), (*C.theme_t)(theme.handle), awidget_type, astyle_name, awidget_state));
}

func (this TStyle) GetStyleState() string {
  return C.GoString(C.style_get_style_state((*C.style_t)(this.handle)));
}

func (this TStyle) IsMutable() bool {
  return (bool)(C.style_is_mutable((*C.style_t)(this.handle)));
}

func (this TStyle) GetStyleType() string {
  return C.GoString(C.style_get_style_type((*C.style_t)(this.handle)));
}

