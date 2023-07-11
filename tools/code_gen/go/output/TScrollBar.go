type TScrollBar struct {
  TWidget
}

func TScrollBarCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TScrollBar{}
  retObj.handle = unsafe.Pointer(C.scroll_bar_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TScrollBarCast(widget TWidget) TScrollBar {
  retObj := TScrollBar{}
  retObj.handle = unsafe.Pointer(C.scroll_bar_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func TScrollBarCreateMobile(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TScrollBar{}
  retObj.handle = unsafe.Pointer(C.scroll_bar_create_mobile((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TScrollBarCreateDesktop(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TScrollBar{}
  retObj.handle = unsafe.Pointer(C.scroll_bar_create_desktop((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TScrollBar) SetParams(virtual_size int32, row int32) TRet {
  return TRet(C.scroll_bar_set_params((*C.widget_t)(this.handle), (C.int32_t)(virtual_size), (C.int32_t)(row)));
}

func (this TScrollBar) ScrollTo(value int32, duration int32) TRet {
  return TRet(C.scroll_bar_scroll_to((*C.widget_t)(this.handle), (C.int32_t)(value), (C.int32_t)(duration)));
}

func (this TScrollBar) SetValue(value int32) TRet {
  return TRet(C.scroll_bar_set_value((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TScrollBar) AddDelta(delta int32) TRet {
  return TRet(C.scroll_bar_add_delta((*C.widget_t)(this.handle), (C.int32_t)(delta)));
}

func (this TScrollBar) ScrollDelta(delta int32) TRet {
  return TRet(C.scroll_bar_scroll_delta((*C.widget_t)(this.handle), (C.int32_t)(delta)));
}

func (this TScrollBar) SetValueOnly(value int32) TRet {
  return TRet(C.scroll_bar_set_value_only((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TScrollBar) SetAutoHide(auto_hide bool) TRet {
  return TRet(C.scroll_bar_set_auto_hide((*C.widget_t)(this.handle), (C.bool_t)(auto_hide)));
}

func (this TScrollBar) IsMobile() bool {
  return (bool)(C.scroll_bar_is_mobile((*C.widget_t)(this.handle)));
}

func (this TScrollBar) SetAnimatorTime(animator_time uint32) TRet {
  return TRet(C.scroll_bar_set_animator_time((*C.widget_t)(this.handle), (C.uint32_t)(animator_time)));
}

func (this TScrollBar) HideByOpacityAnimation(duration int32, delay int32) TRet {
  return TRet(C.scroll_bar_hide_by_opacity_animation((*C.widget_t)(this.handle), (C.int32_t)(duration), (C.int32_t)(delay)));
}

func (this TScrollBar) ShowByOpacityAnimation(duration int32, delay int32) TRet {
  return TRet(C.scroll_bar_show_by_opacity_animation((*C.widget_t)(this.handle), (C.int32_t)(duration), (C.int32_t)(delay)));
}

func (this TScrollBar) GetVirtualSize() int32 {
  return (int32)((*C.scroll_bar_t)(unsafe.Pointer(this.handle)).virtual_size);
}

func (this TScrollBar) GetRow() int32 {
  return (int32)((*C.scroll_bar_t)(unsafe.Pointer(this.handle)).row);
}

func (this TScrollBar) GetAnimatorTime() uint32 {
  return (uint32)((*C.scroll_bar_t)(unsafe.Pointer(this.handle)).animator_time);
}

func (this TScrollBar) GetAnimatable() bool {
  return (bool)((*C.scroll_bar_t)(unsafe.Pointer(this.handle)).animatable);
}

func (this TScrollBar) GetAutoHide() bool {
  return (bool)((*C.scroll_bar_t)(unsafe.Pointer(this.handle)).auto_hide);
}

