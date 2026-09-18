type TPages struct {
  TWidget
}

func TPagesCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TPages{}
  retObj.handle = unsafe.Pointer(C.pages_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TPagesCast(widget TWidget) TPages {
  retObj := TPages{}
  retObj.handle = unsafe.Pointer(C.pages_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TPages) SetActive(index uint32) TRet {
  return TRet(C.pages_set_active((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TPages) SetAutoFocused(auto_focused bool) TRet {
  return TRet(C.pages_set_auto_focused((*C.widget_t)(this.handle), (C.bool_t)(auto_focused)));
}

func (this TPages) SetActiveByName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.pages_set_active_by_name((*C.widget_t)(this.handle), aname));
}

func (this TPages) GetActive() uint32 {
  return (uint32)((*C.pages_t)(unsafe.Pointer(this.handle)).active);
}

func (this TPages) GetAutoFocused() bool {
  return (bool)((*C.pages_t)(unsafe.Pointer(this.handle)).auto_focused);
}

