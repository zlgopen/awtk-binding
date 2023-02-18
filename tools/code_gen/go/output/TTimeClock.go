type TTimeClock struct {
  TWidget
}

func TTimeClockCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TTimeClock{}
  retObj.handle = unsafe.Pointer(C.time_clock_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TTimeClockCast(widget TWidget) TTimeClock {
  retObj := TTimeClock{}
  retObj.handle = unsafe.Pointer(C.time_clock_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TTimeClock) SetHour(hour int32) TRet {
  return TRet(C.time_clock_set_hour((*C.widget_t)(this.handle), (C.int32_t)(hour)));
}

func (this TTimeClock) SetMinute(minute int32) TRet {
  return TRet(C.time_clock_set_minute((*C.widget_t)(this.handle), (C.int32_t)(minute)));
}

func (this TTimeClock) SetSecond(second int32) TRet {
  return TRet(C.time_clock_set_second((*C.widget_t)(this.handle), (C.int32_t)(second)));
}

func (this TTimeClock) SetHourImage(hour string) TRet {
  ahour := C.CString(hour)
  defer C.free(unsafe.Pointer(ahour))
  return TRet(C.time_clock_set_hour_image((*C.widget_t)(this.handle), ahour));
}

func (this TTimeClock) SetMinuteImage(minute_image string) TRet {
  aminute_image := C.CString(minute_image)
  defer C.free(unsafe.Pointer(aminute_image))
  return TRet(C.time_clock_set_minute_image((*C.widget_t)(this.handle), aminute_image));
}

func (this TTimeClock) SetSecondImage(second_image string) TRet {
  asecond_image := C.CString(second_image)
  defer C.free(unsafe.Pointer(asecond_image))
  return TRet(C.time_clock_set_second_image((*C.widget_t)(this.handle), asecond_image));
}

func (this TTimeClock) SetBgImage(bg_image string) TRet {
  abg_image := C.CString(bg_image)
  defer C.free(unsafe.Pointer(abg_image))
  return TRet(C.time_clock_set_bg_image((*C.widget_t)(this.handle), abg_image));
}

func (this TTimeClock) SetImage(image string) TRet {
  aimage := C.CString(image)
  defer C.free(unsafe.Pointer(aimage))
  return TRet(C.time_clock_set_image((*C.widget_t)(this.handle), aimage));
}

func (this TTimeClock) SetHourAnchor(anchor_x string, anchor_y string) TRet {
  aanchor_x := C.CString(anchor_x)
  defer C.free(unsafe.Pointer(aanchor_x))
  aanchor_y := C.CString(anchor_y)
  defer C.free(unsafe.Pointer(aanchor_y))
  return TRet(C.time_clock_set_hour_anchor((*C.widget_t)(this.handle), aanchor_x, aanchor_y));
}

func (this TTimeClock) SetMinuteAnchor(anchor_x string, anchor_y string) TRet {
  aanchor_x := C.CString(anchor_x)
  defer C.free(unsafe.Pointer(aanchor_x))
  aanchor_y := C.CString(anchor_y)
  defer C.free(unsafe.Pointer(aanchor_y))
  return TRet(C.time_clock_set_minute_anchor((*C.widget_t)(this.handle), aanchor_x, aanchor_y));
}

func (this TTimeClock) SetSecondAnchor(anchor_x string, anchor_y string) TRet {
  aanchor_x := C.CString(anchor_x)
  defer C.free(unsafe.Pointer(aanchor_x))
  aanchor_y := C.CString(anchor_y)
  defer C.free(unsafe.Pointer(aanchor_y))
  return TRet(C.time_clock_set_second_anchor((*C.widget_t)(this.handle), aanchor_x, aanchor_y));
}

func (this TTimeClock) GetHour() int32 {
  return (int32)((*C.time_clock_t)(unsafe.Pointer(this.handle)).hour);
}

func (this TTimeClock) GetMinute() int32 {
  return (int32)((*C.time_clock_t)(unsafe.Pointer(this.handle)).minute);
}

func (this TTimeClock) GetSecond() int32 {
  return (int32)((*C.time_clock_t)(unsafe.Pointer(this.handle)).second);
}

func (this TTimeClock) GetImage() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).image);
}

func (this TTimeClock) GetBgImage() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).bg_image);
}

func (this TTimeClock) GetHourImage() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).hour_image);
}

func (this TTimeClock) GetMinuteImage() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).minute_image);
}

func (this TTimeClock) GetSecondImage() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).second_image);
}

func (this TTimeClock) GetHourAnchorX() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).hour_anchor_x);
}

func (this TTimeClock) GetHourAnchorY() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).hour_anchor_y);
}

func (this TTimeClock) GetMinuteAnchorX() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).minute_anchor_x);
}

func (this TTimeClock) GetMinuteAnchorY() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).minute_anchor_y);
}

func (this TTimeClock) GetSecondAnchorX() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).second_anchor_x);
}

func (this TTimeClock) GetSecondAnchorY() string {
  return C.GoString((*C.time_clock_t)(unsafe.Pointer(this.handle)).second_anchor_y);
}

