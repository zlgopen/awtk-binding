type THscrollLabel struct {
  TWidget
}

func THscrollLabelCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := THscrollLabel{}
  retObj.handle = unsafe.Pointer(C.hscroll_label_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this THscrollLabel) SetLull(lull int32) TRet {
  return TRet(C.hscroll_label_set_lull((*C.widget_t)(this.handle), (C.int32_t)(lull)));
}

func (this THscrollLabel) SetDuration(duration int32) TRet {
  return TRet(C.hscroll_label_set_duration((*C.widget_t)(this.handle), (C.int32_t)(duration)));
}

func (this THscrollLabel) SetSpeed(speed float64) TRet {
  return TRet(C.hscroll_label_set_speed((*C.widget_t)(this.handle), (C.float_t)(speed)));
}

func (this THscrollLabel) SetOnlyFocus(only_focus bool) TRet {
  return TRet(C.hscroll_label_set_only_focus((*C.widget_t)(this.handle), (C.bool_t)(only_focus)));
}

func (this THscrollLabel) SetOnlyParentFocus(only_parent_focus bool) TRet {
  return TRet(C.hscroll_label_set_only_parent_focus((*C.widget_t)(this.handle), (C.bool_t)(only_parent_focus)));
}

func (this THscrollLabel) SetLoop(loop bool) TRet {
  return TRet(C.hscroll_label_set_loop((*C.widget_t)(this.handle), (C.bool_t)(loop)));
}

func (this THscrollLabel) SetYoyo(yoyo bool) TRet {
  return TRet(C.hscroll_label_set_yoyo((*C.widget_t)(this.handle), (C.bool_t)(yoyo)));
}

func (this THscrollLabel) SetEllipses(ellipses bool) TRet {
  return TRet(C.hscroll_label_set_ellipses((*C.widget_t)(this.handle), (C.bool_t)(ellipses)));
}

func (this THscrollLabel) SetStopAtBegin(stop_at_begin bool) TRet {
  return TRet(C.hscroll_label_set_stop_at_begin((*C.widget_t)(this.handle), (C.bool_t)(stop_at_begin)));
}

func (this THscrollLabel) SetDelay(delay uint32) TRet {
  return TRet(C.hscroll_label_set_delay((*C.widget_t)(this.handle), (C.uint32_t)(delay)));
}

func (this THscrollLabel) SetLoopIntervalDistance(loop_interval_distance int32) TRet {
  return TRet(C.hscroll_label_set_loop_interval_distance((*C.widget_t)(this.handle), (C.int32_t)(loop_interval_distance)));
}

func (this THscrollLabel) SetXoffset(xoffset int32) TRet {
  return TRet(C.hscroll_label_set_xoffset((*C.widget_t)(this.handle), (C.int32_t)(xoffset)));
}

func (this THscrollLabel) Start() TRet {
  return TRet(C.hscroll_label_start((*C.widget_t)(this.handle)));
}

func (this THscrollLabel) Stop() TRet {
  return TRet(C.hscroll_label_stop((*C.widget_t)(this.handle)));
}

func THscrollLabelCast(widget TWidget) THscrollLabel {
  retObj := THscrollLabel{}
  retObj.handle = unsafe.Pointer(C.hscroll_label_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this THscrollLabel) GetOnlyFocus() bool {
  return (bool)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).only_focus);
}

func (this THscrollLabel) GetOnlyParentFocus() bool {
  return (bool)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).only_parent_focus);
}

func (this THscrollLabel) GetLoop() bool {
  return (bool)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).loop);
}

func (this THscrollLabel) GetYoyo() bool {
  return (bool)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).yoyo);
}

func (this THscrollLabel) GetEllipses() bool {
  return (bool)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).ellipses);
}

func (this THscrollLabel) GetLull() int32 {
  return (int32)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).lull);
}

func (this THscrollLabel) GetDuration() int32 {
  return (int32)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).duration);
}

func (this THscrollLabel) GetDelay() uint32 {
  return (uint32)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).delay);
}

func (this THscrollLabel) GetSpeed() float64 {
  return (float64)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).speed);
}

func (this THscrollLabel) GetXoffset() int32 {
  return (int32)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).xoffset);
}

func (this THscrollLabel) GetTextW() int32 {
  return (int32)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).text_w);
}

func (this THscrollLabel) GetStopAtBegin() bool {
  return (bool)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).stop_at_begin);
}

func (this THscrollLabel) GetLoopIntervalDistance() int32 {
  return (int32)((*C.hscroll_label_t)(unsafe.Pointer(this.handle)).loop_interval_distance);
}

