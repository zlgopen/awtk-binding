type TSlider struct {
  TWidget
}

func TSliderCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSlider{}
  retObj.handle = unsafe.Pointer(C.slider_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSliderCast(widget TWidget) TSlider {
  retObj := TSlider{}
  retObj.handle = unsafe.Pointer(C.slider_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSlider) SetValue(value float64) TRet {
  return TRet(C.slider_set_value((*C.widget_t)(this.handle), (C.double)(value)));
}

func (this TSlider) SetMin(min float64) TRet {
  return TRet(C.slider_set_min((*C.widget_t)(this.handle), (C.double)(min)));
}

func (this TSlider) SetMax(max float64) TRet {
  return TRet(C.slider_set_max((*C.widget_t)(this.handle), (C.double)(max)));
}

func (this TSlider) SetLineCap(line_cap string) TRet {
  aline_cap := C.CString(line_cap)
  defer C.free(unsafe.Pointer(aline_cap))
  return TRet(C.slider_set_line_cap((*C.widget_t)(this.handle), aline_cap));
}

func (this TSlider) SetStep(step float64) TRet {
  return TRet(C.slider_set_step((*C.widget_t)(this.handle), (C.double)(step)));
}

func (this TSlider) SetBarSize(bar_size uint32) TRet {
  return TRet(C.slider_set_bar_size((*C.widget_t)(this.handle), (C.uint32_t)(bar_size)));
}

func (this TSlider) SetVertical(vertical bool) TRet {
  return TRet(C.slider_set_vertical((*C.widget_t)(this.handle), (C.bool_t)(vertical)));
}

func (this TSlider) GetMin() float64 {
  return (float64)((*C.slider_t)(unsafe.Pointer(this.handle)).min);
}

func (this TSlider) GetMax() float64 {
  return (float64)((*C.slider_t)(unsafe.Pointer(this.handle)).max);
}

func (this TSlider) GetStep() float64 {
  return (float64)((*C.slider_t)(unsafe.Pointer(this.handle)).step);
}

func (this TSlider) GetBarSize() uint32 {
  return (uint32)((*C.slider_t)(unsafe.Pointer(this.handle)).bar_size);
}

func (this TSlider) GetDraggerSize() uint32 {
  return (uint32)((*C.slider_t)(unsafe.Pointer(this.handle)).dragger_size);
}

func (this TSlider) GetLineCap() string {
  return C.GoString((*C.slider_t)(unsafe.Pointer(this.handle)).line_cap);
}

func (this TSlider) GetVertical() bool {
  return (bool)((*C.slider_t)(unsafe.Pointer(this.handle)).vertical);
}

func (this TSlider) GetDraggerAdaptToIcon() bool {
  return (bool)((*C.slider_t)(unsafe.Pointer(this.handle)).dragger_adapt_to_icon);
}

func (this TSlider) GetSlideWithBar() bool {
  return (bool)((*C.slider_t)(unsafe.Pointer(this.handle)).slide_with_bar);
}

