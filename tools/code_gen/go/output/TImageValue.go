type TImageValue struct {
  TWidget
}

func TImageValueCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TImageValue{}
  retObj.handle = unsafe.Pointer(C.image_value_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TImageValue) SetImage(image string) TRet {
  aimage := C.CString(image)
  defer C.free(unsafe.Pointer(aimage))
  return TRet(C.image_value_set_image((*C.widget_t)(this.handle), aimage));
}

func (this TImageValue) SetFormat(format string) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.image_value_set_format((*C.widget_t)(this.handle), aformat));
}

func (this TImageValue) SetClickAddDelta(click_add_delta float64) TRet {
  return TRet(C.image_value_set_click_add_delta((*C.widget_t)(this.handle), (C.double)(click_add_delta)));
}

func (this TImageValue) SetValue(value float64) TRet {
  return TRet(C.image_value_set_value((*C.widget_t)(this.handle), (C.double)(value)));
}

func (this TImageValue) SetMin(min float64) TRet {
  return TRet(C.image_value_set_min((*C.widget_t)(this.handle), (C.double)(min)));
}

func (this TImageValue) SetMax(max float64) TRet {
  return TRet(C.image_value_set_max((*C.widget_t)(this.handle), (C.double)(max)));
}

func TImageValueCast(widget TWidget) TImageValue {
  retObj := TImageValue{}
  retObj.handle = unsafe.Pointer(C.image_value_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TImageValue) GetImage() string {
  return C.GoString((*C.image_value_t)(unsafe.Pointer(this.handle)).image);
}

func (this TImageValue) GetFormat() string {
  return C.GoString((*C.image_value_t)(unsafe.Pointer(this.handle)).format);
}

func (this TImageValue) GetClickAddDelta() float64 {
  return (float64)((*C.image_value_t)(unsafe.Pointer(this.handle)).click_add_delta);
}

func (this TImageValue) GetMin() float64 {
  return (float64)((*C.image_value_t)(unsafe.Pointer(this.handle)).min);
}

func (this TImageValue) GetMax() float64 {
  return (float64)((*C.image_value_t)(unsafe.Pointer(this.handle)).max);
}

