type TOverlay struct {
  TWindowBase
}

func TOverlayCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TOverlay{}
  retObj.handle = unsafe.Pointer(C.overlay_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TOverlay) SetClickThrough(click_through bool) TRet {
  return TRet(C.overlay_set_click_through((*C.widget_t)(this.handle), (C.bool_t)(click_through)));
}

func (this TOverlay) SetAlwaysOnTop(always_on_top bool) TRet {
  return TRet(C.overlay_set_always_on_top((*C.widget_t)(this.handle), (C.bool_t)(always_on_top)));
}

func (this TOverlay) SetModeless(modeless bool) TRet {
  return TRet(C.overlay_set_modeless((*C.widget_t)(this.handle), (C.bool_t)(modeless)));
}

func TOverlayCast(widget TWidget) TOverlay {
  retObj := TOverlay{}
  retObj.handle = unsafe.Pointer(C.overlay_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TOverlay) GetClickThrough() bool {
  return (bool)((*C.overlay_t)(unsafe.Pointer(this.handle)).click_through);
}

func (this TOverlay) GetAlwaysOnTop() bool {
  return (bool)((*C.overlay_t)(unsafe.Pointer(this.handle)).always_on_top);
}

func (this TOverlay) GetModeless() bool {
  return (bool)((*C.overlay_t)(unsafe.Pointer(this.handle)).modeless);
}

