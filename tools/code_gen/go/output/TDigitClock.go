type TDigitClock struct {
  TWidget
}

func TDigitClockCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDigitClock{}
  retObj.handle = unsafe.Pointer(C.digit_clock_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDigitClockCast(widget TWidget) TDigitClock {
  retObj := TDigitClock{}
  retObj.handle = unsafe.Pointer(C.digit_clock_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TDigitClock) SetFormat(format string) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.digit_clock_set_format((*C.widget_t)(this.handle), aformat));
}

func (this TDigitClock) GetFormat() string {
  return C.GoString((*C.digit_clock_t)(unsafe.Pointer(this.handle)).format);
}

