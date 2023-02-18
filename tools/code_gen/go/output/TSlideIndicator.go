type TSlideIndicator struct {
  TWidget
}

func TSlideIndicatorCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSlideIndicator{}
  retObj.handle = unsafe.Pointer(C.slide_indicator_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSlideIndicatorCreateLinear(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSlideIndicator{}
  retObj.handle = unsafe.Pointer(C.slide_indicator_create_linear((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSlideIndicatorCreateArc(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSlideIndicator{}
  retObj.handle = unsafe.Pointer(C.slide_indicator_create_arc((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSlideIndicatorCast(widget TWidget) TSlideIndicator {
  retObj := TSlideIndicator{}
  retObj.handle = unsafe.Pointer(C.slide_indicator_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSlideIndicator) SetValue(value uint32) TRet {
  return TRet(C.slide_indicator_set_value((*C.widget_t)(this.handle), (C.uint32_t)(value)));
}

func (this TSlideIndicator) SetMax(max uint32) TRet {
  return TRet(C.slide_indicator_set_max((*C.widget_t)(this.handle), (C.uint32_t)(max)));
}

func (this TSlideIndicator) SetDefaultPaint(default_paint TIndicatorDefaultPaint) TRet {
  return TRet(C.slide_indicator_set_default_paint((*C.widget_t)(this.handle), (C.indicator_default_paint_t)(default_paint)));
}

func (this TSlideIndicator) SetAutoHide(auto_hide uint16) TRet {
  return TRet(C.slide_indicator_set_auto_hide((*C.widget_t)(this.handle), (C.uint16_t)(auto_hide)));
}

func (this TSlideIndicator) SetMargin(margin int32) TRet {
  return TRet(C.slide_indicator_set_margin((*C.widget_t)(this.handle), (C.int32_t)(margin)));
}

func (this TSlideIndicator) SetSpacing(spacing float64) TRet {
  return TRet(C.slide_indicator_set_spacing((*C.widget_t)(this.handle), (C.float_t)(spacing)));
}

func (this TSlideIndicator) SetSize(size uint32) TRet {
  return TRet(C.slide_indicator_set_size((*C.widget_t)(this.handle), (C.uint32_t)(size)));
}

func (this TSlideIndicator) SetAnchor(anchor_x string, anchor_y string) TRet {
  aanchor_x := C.CString(anchor_x)
  defer C.free(unsafe.Pointer(aanchor_x))
  aanchor_y := C.CString(anchor_y)
  defer C.free(unsafe.Pointer(aanchor_y))
  return TRet(C.slide_indicator_set_anchor((*C.widget_t)(this.handle), aanchor_x, aanchor_y));
}

func (this TSlideIndicator) SetIndicatedTarget(target_name string) TRet {
  atarget_name := C.CString(target_name)
  defer C.free(unsafe.Pointer(atarget_name))
  return TRet(C.slide_indicator_set_indicated_target((*C.widget_t)(this.handle), atarget_name));
}

func (this TSlideIndicator) SetTransition(transition bool) TRet {
  return TRet(C.slide_indicator_set_transition((*C.widget_t)(this.handle), (C.bool_t)(transition)));
}

func (this TSlideIndicator) GetMax() uint32 {
  return (uint32)((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).max);
}

func (this TSlideIndicator) GetDefaultPaint() TIndicatorDefaultPaint {
  return TIndicatorDefaultPaint((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).default_paint);
}

func (this TSlideIndicator) GetAutoHide() uint16 {
  return (uint16)((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).auto_hide);
}

func (this TSlideIndicator) GetMargin() int32 {
  return (int32)((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).margin);
}

func (this TSlideIndicator) GetSpacing() float64 {
  return (float64)((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).spacing);
}

func (this TSlideIndicator) GetSize() uint32 {
  return (uint32)((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).size);
}

func (this TSlideIndicator) GetAnchorX() string {
  return C.GoString((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).anchor_x);
}

func (this TSlideIndicator) GetAnchorY() string {
  return C.GoString((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).anchor_y);
}

func (this TSlideIndicator) GetIndicatedTarget() string {
  return C.GoString((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).indicated_target);
}

func (this TSlideIndicator) GetTransition() bool {
  return (bool)((*C.slide_indicator_t)(unsafe.Pointer(this.handle)).transition);
}

