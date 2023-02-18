type TGaugePointer struct {
  TWidget
}

func TGaugePointerCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TGaugePointer{}
  retObj.handle = unsafe.Pointer(C.gauge_pointer_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TGaugePointerCast(widget TWidget) TGaugePointer {
  retObj := TGaugePointer{}
  retObj.handle = unsafe.Pointer(C.gauge_pointer_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TGaugePointer) SetAngle(angle float64) TRet {
  return TRet(C.gauge_pointer_set_angle((*C.widget_t)(this.handle), (C.float_t)(angle)));
}

func (this TGaugePointer) SetImage(image string) TRet {
  aimage := C.CString(image)
  defer C.free(unsafe.Pointer(aimage))
  return TRet(C.gauge_pointer_set_image((*C.widget_t)(this.handle), aimage));
}

func (this TGaugePointer) SetAnchor(anchor_x string, anchor_y string) TRet {
  aanchor_x := C.CString(anchor_x)
  defer C.free(unsafe.Pointer(aanchor_x))
  aanchor_y := C.CString(anchor_y)
  defer C.free(unsafe.Pointer(aanchor_y))
  return TRet(C.gauge_pointer_set_anchor((*C.widget_t)(this.handle), aanchor_x, aanchor_y));
}

func (this TGaugePointer) GetAngle() float64 {
  return (float64)((*C.gauge_pointer_t)(unsafe.Pointer(this.handle)).angle);
}

func (this TGaugePointer) GetImage() string {
  return C.GoString((*C.gauge_pointer_t)(unsafe.Pointer(this.handle)).image);
}

func (this TGaugePointer) GetAnchorX() string {
  return C.GoString((*C.gauge_pointer_t)(unsafe.Pointer(this.handle)).anchor_x);
}

func (this TGaugePointer) GetAnchorY() string {
  return C.GoString((*C.gauge_pointer_t)(unsafe.Pointer(this.handle)).anchor_y);
}

