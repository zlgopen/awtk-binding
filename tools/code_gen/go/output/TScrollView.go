type TScrollView struct {
  TWidget
}

func TScrollViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TScrollView{}
  retObj.handle = unsafe.Pointer(C.scroll_view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TScrollViewCast(widget TWidget) TScrollView {
  retObj := TScrollView{}
  retObj.handle = unsafe.Pointer(C.scroll_view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TScrollView) SetVirtualW(w int) TRet {
  return TRet(C.scroll_view_set_virtual_w((*C.widget_t)(this.handle), (C.wh_t)(w)));
}

func (this TScrollView) SetVirtualH(h int) TRet {
  return TRet(C.scroll_view_set_virtual_h((*C.widget_t)(this.handle), (C.wh_t)(h)));
}

func (this TScrollView) SetXslidable(xslidable bool) TRet {
  return TRet(C.scroll_view_set_xslidable((*C.widget_t)(this.handle), (C.bool_t)(xslidable)));
}

func (this TScrollView) SetYslidable(yslidable bool) TRet {
  return TRet(C.scroll_view_set_yslidable((*C.widget_t)(this.handle), (C.bool_t)(yslidable)));
}

func (this TScrollView) SetSnapToPage(snap_to_page bool) TRet {
  return TRet(C.scroll_view_set_snap_to_page((*C.widget_t)(this.handle), (C.bool_t)(snap_to_page)));
}

func (this TScrollView) SetMoveToPage(move_to_page bool) TRet {
  return TRet(C.scroll_view_set_move_to_page((*C.widget_t)(this.handle), (C.bool_t)(move_to_page)));
}

func (this TScrollView) SetRecursive(recursive bool) TRet {
  return TRet(C.scroll_view_set_recursive((*C.widget_t)(this.handle), (C.bool_t)(recursive)));
}

func (this TScrollView) SetRecursiveOnly(recursive bool) TRet {
  return TRet(C.scroll_view_set_recursive_only((*C.widget_t)(this.handle), (C.bool_t)(recursive)));
}

func (this TScrollView) SetOffset(xoffset int32, yoffset int32) TRet {
  return TRet(C.scroll_view_set_offset((*C.widget_t)(this.handle), (C.int32_t)(xoffset), (C.int32_t)(yoffset)));
}

func (this TScrollView) SetSpeedScale(xspeed_scale float64, yspeed_scale float64) TRet {
  return TRet(C.scroll_view_set_speed_scale((*C.widget_t)(this.handle), (C.float_t)(xspeed_scale), (C.float_t)(yspeed_scale)));
}

func (this TScrollView) SetSlideLimitRatio(slide_limit_ratio float64) TRet {
  return TRet(C.scroll_view_set_slide_limit_ratio((*C.widget_t)(this.handle), (C.float_t)(slide_limit_ratio)));
}

func (this TScrollView) ScrollTo(xoffset_end int32, yoffset_end int32, duration int32) TRet {
  return TRet(C.scroll_view_scroll_to((*C.widget_t)(this.handle), (C.int32_t)(xoffset_end), (C.int32_t)(yoffset_end), (C.int32_t)(duration)));
}

func (this TScrollView) ScrollDeltaTo(xoffset_delta int32, yoffset_delta int32, duration int32) TRet {
  return TRet(C.scroll_view_scroll_delta_to((*C.widget_t)(this.handle), (C.int32_t)(xoffset_delta), (C.int32_t)(yoffset_delta), (C.int32_t)(duration)));
}

func (this TScrollView) GetVirtualW() int {
  return (int)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).virtual_w);
}

func (this TScrollView) GetVirtualH() int {
  return (int)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).virtual_h);
}

func (this TScrollView) GetXoffset() int32 {
  return (int32)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).xoffset);
}

func (this TScrollView) GetYoffset() int32 {
  return (int32)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).yoffset);
}

func (this TScrollView) GetXspeedScale() float64 {
  return (float64)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).xspeed_scale);
}

func (this TScrollView) GetYspeedScale() float64 {
  return (float64)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).yspeed_scale);
}

func (this TScrollView) GetXslidable() bool {
  return (bool)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).xslidable);
}

func (this TScrollView) GetYslidable() bool {
  return (bool)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).yslidable);
}

func (this TScrollView) GetSnapToPage() bool {
  return (bool)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).snap_to_page);
}

func (this TScrollView) GetMoveToPage() bool {
  return (bool)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).move_to_page);
}

func (this TScrollView) GetRecursive() bool {
  return (bool)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).recursive);
}

func (this TScrollView) GetSlideLimitRatio() float64 {
  return (float64)((*C.scroll_view_t)(unsafe.Pointer(this.handle)).slide_limit_ratio);
}

