type TTabButton struct {
  TWidget
}

func TTabButtonCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TTabButton{}
  retObj.handle = unsafe.Pointer(C.tab_button_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TTabButtonCast(widget TWidget) TTabButton {
  retObj := TTabButton{}
  retObj.handle = unsafe.Pointer(C.tab_button_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TTabButton) SetValue(value bool) TRet {
  return TRet(C.tab_button_set_value((*C.widget_t)(this.handle), (C.bool_t)(value)));
}

func (this TTabButton) SetIcon(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.tab_button_set_icon((*C.widget_t)(this.handle), aname));
}

func (this TTabButton) SetActiveIcon(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.tab_button_set_active_icon((*C.widget_t)(this.handle), aname));
}

func (this TTabButton) SetMaxW(max_w int32) TRet {
  return TRet(C.tab_button_set_max_w((*C.widget_t)(this.handle), (C.int32_t)(max_w)));
}

func (this TTabButton) Restack(index uint32) TRet {
  return TRet(C.tab_button_restack((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TTabButton) SetLoadUi(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.tab_button_set_load_ui((*C.widget_t)(this.handle), aname));
}

func (this TTabButton) GetLoadUi() string {
  return C.GoString((*C.tab_button_t)(unsafe.Pointer(this.handle)).load_ui);
}

func (this TTabButton) GetActiveIcon() string {
  return C.GoString((*C.tab_button_t)(unsafe.Pointer(this.handle)).active_icon);
}

func (this TTabButton) GetIcon() string {
  return C.GoString((*C.tab_button_t)(unsafe.Pointer(this.handle)).icon);
}

func (this TTabButton) GetMaxW() int32 {
  return (int32)((*C.tab_button_t)(unsafe.Pointer(this.handle)).max_w);
}

