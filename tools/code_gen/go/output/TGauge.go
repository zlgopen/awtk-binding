type TGauge struct {
  TWidget
}

func TGaugeCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TGauge{}
  retObj.handle = unsafe.Pointer(C.gauge_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TGaugeCast(widget TWidget) TGauge {
  retObj := TGauge{}
  retObj.handle = unsafe.Pointer(C.gauge_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TGauge) SetImage(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.gauge_set_image((*C.widget_t)(this.handle), aname));
}

func (this TGauge) SetDrawType(draw_type TImageDrawType) TRet {
  return TRet(C.gauge_set_draw_type((*C.widget_t)(this.handle), (C.image_draw_type_t)(draw_type)));
}

func (this TGauge) GetImage() string {
  return C.GoString((*C.gauge_t)(unsafe.Pointer(this.handle)).image);
}

func (this TGauge) GetDrawType() TImageDrawType {
  return TImageDrawType((*C.gauge_t)(unsafe.Pointer(this.handle)).draw_type);
}

