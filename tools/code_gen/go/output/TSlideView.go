type TSlideView struct {
  TWidget
}

func TSlideViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSlideView{}
  retObj.handle = unsafe.Pointer(C.slide_view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSlideViewCast(widget TWidget) TSlideView {
  retObj := TSlideView{}
  retObj.handle = unsafe.Pointer(C.slide_view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSlideView) SetAutoPlay(auto_play uint16) TRet {
  return TRet(C.slide_view_set_auto_play((*C.widget_t)(this.handle), (C.uint16_t)(auto_play)));
}

func (this TSlideView) SetActive(index uint32) TRet {
  return TRet(C.slide_view_set_active((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TSlideView) SetActiveEx(index uint32, animate bool) TRet {
  return TRet(C.slide_view_set_active_ex((*C.widget_t)(this.handle), (C.uint32_t)(index), (C.bool_t)(animate)));
}

func (this TSlideView) SetVertical(vertical bool) TRet {
  return TRet(C.slide_view_set_vertical((*C.widget_t)(this.handle), (C.bool_t)(vertical)));
}

func (this TSlideView) SetAnimHint(anim_hint string) TRet {
  aanim_hint := C.CString(anim_hint)
  defer C.free(unsafe.Pointer(aanim_hint))
  return TRet(C.slide_view_set_anim_hint((*C.widget_t)(this.handle), aanim_hint));
}

func (this TSlideView) SetLoop(loop bool) TRet {
  return TRet(C.slide_view_set_loop((*C.widget_t)(this.handle), (C.bool_t)(loop)));
}

func (this TSlideView) SetDragThreshold(drag_threshold uint32) TRet {
  return TRet(C.slide_view_set_drag_threshold((*C.widget_t)(this.handle), (C.uint32_t)(drag_threshold)));
}

func (this TSlideView) SetAnimatingTime(animating_time uint32) TRet {
  return TRet(C.slide_view_set_animating_time((*C.widget_t)(this.handle), (C.uint32_t)(animating_time)));
}

func (this TSlideView) RemoveIndex(index uint32) TRet {
  return TRet(C.slide_view_remove_index((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TSlideView) GetVertical() bool {
  return (bool)((*C.slide_view_t)(unsafe.Pointer(this.handle)).vertical);
}

func (this TSlideView) GetAutoPlay() uint16 {
  return (uint16)((*C.slide_view_t)(unsafe.Pointer(this.handle)).auto_play);
}

func (this TSlideView) GetLoop() bool {
  return (bool)((*C.slide_view_t)(unsafe.Pointer(this.handle)).loop);
}

func (this TSlideView) GetAnimHint() string {
  return C.GoString((*C.slide_view_t)(unsafe.Pointer(this.handle)).anim_hint);
}

func (this TSlideView) GetDragThreshold() uint32 {
  return (uint32)((*C.slide_view_t)(unsafe.Pointer(this.handle)).drag_threshold);
}

func (this TSlideView) GetAnimatingTime() uint32 {
  return (uint32)((*C.slide_view_t)(unsafe.Pointer(this.handle)).animating_time);
}

