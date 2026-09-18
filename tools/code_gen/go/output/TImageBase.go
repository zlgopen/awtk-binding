type TImageBase struct {
  TWidget
}

func (this TImageBase) SetImage(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.image_base_set_image((*C.widget_t)(this.handle), aname));
}

func (this TImageBase) SetRotation(rotation float64) TRet {
  return TRet(C.image_base_set_rotation((*C.widget_t)(this.handle), (C.float_t)(rotation)));
}

func (this TImageBase) SetScale(scale_x float64, scale_y float64) TRet {
  return TRet(C.image_base_set_scale((*C.widget_t)(this.handle), (C.float_t)(scale_x), (C.float_t)(scale_y)));
}

func (this TImageBase) SetAnchor(anchor_x float64, anchor_y float64) TRet {
  return TRet(C.image_base_set_anchor((*C.widget_t)(this.handle), (C.float_t)(anchor_x), (C.float_t)(anchor_y)));
}

func (this TImageBase) SetSelected(selected bool) TRet {
  return TRet(C.image_base_set_selected((*C.widget_t)(this.handle), (C.bool_t)(selected)));
}

func (this TImageBase) SetSelectable(selectable bool) TRet {
  return TRet(C.image_base_set_selectable((*C.widget_t)(this.handle), (C.bool_t)(selectable)));
}

func (this TImageBase) SetClickable(clickable bool) TRet {
  return TRet(C.image_base_set_clickable((*C.widget_t)(this.handle), (C.bool_t)(clickable)));
}

func TImageBaseCast(widget TWidget) TImageBase {
  retObj := TImageBase{}
  retObj.handle = unsafe.Pointer(C.image_base_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TImageBase) GetImage() string {
  return C.GoString((*C.image_base_t)(unsafe.Pointer(this.handle)).image);
}

func (this TImageBase) GetAnchorX() float64 {
  return (float64)((*C.image_base_t)(unsafe.Pointer(this.handle)).anchor_x);
}

func (this TImageBase) GetAnchorY() float64 {
  return (float64)((*C.image_base_t)(unsafe.Pointer(this.handle)).anchor_y);
}

func (this TImageBase) GetScaleX() float64 {
  return (float64)((*C.image_base_t)(unsafe.Pointer(this.handle)).scale_x);
}

func (this TImageBase) GetScaleY() float64 {
  return (float64)((*C.image_base_t)(unsafe.Pointer(this.handle)).scale_y);
}

func (this TImageBase) GetRotation() float64 {
  return (float64)((*C.image_base_t)(unsafe.Pointer(this.handle)).rotation);
}

func (this TImageBase) GetClickable() bool {
  return (bool)((*C.image_base_t)(unsafe.Pointer(this.handle)).clickable);
}

func (this TImageBase) GetSelectable() bool {
  return (bool)((*C.image_base_t)(unsafe.Pointer(this.handle)).selectable);
}

func (this TImageBase) GetSelected() bool {
  return (bool)((*C.image_base_t)(unsafe.Pointer(this.handle)).selected);
}

