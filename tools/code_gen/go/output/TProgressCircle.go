type TProgressCircle struct {
  TWidget
}

func TProgressCircleCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TProgressCircle{}
  retObj.handle = unsafe.Pointer(C.progress_circle_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TProgressCircleCast(widget TWidget) TProgressCircle {
  retObj := TProgressCircle{}
  retObj.handle = unsafe.Pointer(C.progress_circle_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TProgressCircle) SetValue(value float64) TRet {
  return TRet(C.progress_circle_set_value((*C.widget_t)(this.handle), (C.float_t)(value)));
}

func (this TProgressCircle) SetMax(max uint32) TRet {
  return TRet(C.progress_circle_set_max((*C.widget_t)(this.handle), (C.uint32_t)(max)));
}

func (this TProgressCircle) SetFormat(format string) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.progress_circle_set_format((*C.widget_t)(this.handle), aformat));
}

func (this TProgressCircle) SetLineWidth(line_width uint32) TRet {
  return TRet(C.progress_circle_set_line_width((*C.widget_t)(this.handle), (C.uint32_t)(line_width)));
}

func (this TProgressCircle) SetStartAngle(start_angle int32) TRet {
  return TRet(C.progress_circle_set_start_angle((*C.widget_t)(this.handle), (C.int32_t)(start_angle)));
}

func (this TProgressCircle) SetLineCap(line_cap string) TRet {
  aline_cap := C.CString(line_cap)
  defer C.free(unsafe.Pointer(aline_cap))
  return TRet(C.progress_circle_set_line_cap((*C.widget_t)(this.handle), aline_cap));
}

func (this TProgressCircle) SetShowText(show_text bool) TRet {
  return TRet(C.progress_circle_set_show_text((*C.widget_t)(this.handle), (C.bool_t)(show_text)));
}

func (this TProgressCircle) SetCounterClockWise(counter_clock_wise bool) TRet {
  return TRet(C.progress_circle_set_counter_clock_wise((*C.widget_t)(this.handle), (C.bool_t)(counter_clock_wise)));
}

func (this TProgressCircle) GetMax() float64 {
  return (float64)((*C.progress_circle_t)(unsafe.Pointer(this.handle)).max);
}

func (this TProgressCircle) GetFormat() string {
  return C.GoString((*C.progress_circle_t)(unsafe.Pointer(this.handle)).format);
}

func (this TProgressCircle) GetStartAngle() int32 {
  return (int32)((*C.progress_circle_t)(unsafe.Pointer(this.handle)).start_angle);
}

func (this TProgressCircle) GetLineWidth() uint32 {
  return (uint32)((*C.progress_circle_t)(unsafe.Pointer(this.handle)).line_width);
}

func (this TProgressCircle) GetLineCap() string {
  return C.GoString((*C.progress_circle_t)(unsafe.Pointer(this.handle)).line_cap);
}

func (this TProgressCircle) GetCounterClockWise() bool {
  return (bool)((*C.progress_circle_t)(unsafe.Pointer(this.handle)).counter_clock_wise);
}

func (this TProgressCircle) GetShowText() bool {
  return (bool)((*C.progress_circle_t)(unsafe.Pointer(this.handle)).show_text);
}

