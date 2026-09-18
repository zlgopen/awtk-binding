type TView struct {
  TWidget
}

func TViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TView{}
  retObj.handle = unsafe.Pointer(C.view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TView) SetDefaultFocusedChild(default_focused_child string) TRet {
  adefault_focused_child := C.CString(default_focused_child)
  defer C.free(unsafe.Pointer(adefault_focused_child))
  return TRet(C.view_set_default_focused_child((*C.widget_t)(this.handle), adefault_focused_child));
}

func TViewCast(widget TWidget) TView {
  retObj := TView{}
  retObj.handle = unsafe.Pointer(C.view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TView) GetDefaultFocusedChild() string {
  return C.GoString((*C.view_t)(unsafe.Pointer(this.handle)).default_focused_child);
}

