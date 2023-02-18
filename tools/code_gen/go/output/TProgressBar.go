type TProgressBar struct {
  TWidget
}

func TProgressBarCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TProgressBar{}
  retObj.handle = unsafe.Pointer(C.progress_bar_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TProgressBarCast(widget TWidget) TProgressBar {
  retObj := TProgressBar{}
  retObj.handle = unsafe.Pointer(C.progress_bar_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TProgressBar) SetValue(value float64) TRet {
  return TRet(C.progress_bar_set_value((*C.widget_t)(this.handle), (C.double)(value)));
}

func (this TProgressBar) SetMax(max float64) TRet {
  return TRet(C.progress_bar_set_max((*C.widget_t)(this.handle), (C.double)(max)));
}

func (this TProgressBar) SetFormat(format string) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.progress_bar_set_format((*C.widget_t)(this.handle), aformat));
}

func (this TProgressBar) SetVertical(vertical bool) TRet {
  return TRet(C.progress_bar_set_vertical((*C.widget_t)(this.handle), (C.bool_t)(vertical)));
}

func (this TProgressBar) SetShowText(show_text bool) TRet {
  return TRet(C.progress_bar_set_show_text((*C.widget_t)(this.handle), (C.bool_t)(show_text)));
}

func (this TProgressBar) SetReverse(reverse bool) TRet {
  return TRet(C.progress_bar_set_reverse((*C.widget_t)(this.handle), (C.bool_t)(reverse)));
}

func (this TProgressBar) GetPercent() uint32 {
  return (uint32)(C.progress_bar_get_percent((*C.widget_t)(this.handle)));
}

func (this TProgressBar) GetMax() float64 {
  return (float64)((*C.progress_bar_t)(unsafe.Pointer(this.handle)).max);
}

func (this TProgressBar) GetFormat() string {
  return C.GoString((*C.progress_bar_t)(unsafe.Pointer(this.handle)).format);
}

func (this TProgressBar) GetVertical() bool {
  return (bool)((*C.progress_bar_t)(unsafe.Pointer(this.handle)).vertical);
}

func (this TProgressBar) GetShowText() bool {
  return (bool)((*C.progress_bar_t)(unsafe.Pointer(this.handle)).show_text);
}

func (this TProgressBar) GetReverse() bool {
  return (bool)((*C.progress_bar_t)(unsafe.Pointer(this.handle)).reverse);
}

