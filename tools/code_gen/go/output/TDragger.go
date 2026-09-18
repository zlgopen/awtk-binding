type TDragger struct {
  TWidget
}

func TDraggerCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDragger{}
  retObj.handle = unsafe.Pointer(C.dragger_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDraggerCast(widget TWidget) TDragger {
  retObj := TDragger{}
  retObj.handle = unsafe.Pointer(C.dragger_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TDragger) SetRange(x_min int, y_min int, x_max int, y_max int) TRet {
  return TRet(C.dragger_set_range((*C.widget_t)(this.handle), (C.xy_t)(x_min), (C.xy_t)(y_min), (C.xy_t)(x_max), (C.xy_t)(y_max)));
}

func (this TDragger) GetXMin() int {
  return (int)((*C.dragger_t)(unsafe.Pointer(this.handle)).x_min);
}

func (this TDragger) GetYMin() int {
  return (int)((*C.dragger_t)(unsafe.Pointer(this.handle)).y_min);
}

func (this TDragger) GetXMax() int {
  return (int)((*C.dragger_t)(unsafe.Pointer(this.handle)).x_max);
}

func (this TDragger) GetYMax() int {
  return (int)((*C.dragger_t)(unsafe.Pointer(this.handle)).y_max);
}

