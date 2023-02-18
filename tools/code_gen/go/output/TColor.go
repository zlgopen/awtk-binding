type TColor struct {
  handle unsafe.Pointer
}

func TColorCreate(r uint8, b uint8, g uint8, a uint8) TColor {
  retObj := TColor{}
  retObj.handle = unsafe.Pointer(C.color_create((C.uint8_t)(r), (C.uint8_t)(b), (C.uint8_t)(g), (C.uint8_t)(a)))
  return retObj
}

func (this TColor) FromStr(str string) TColor {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  retObj := TColor{}
  retObj.handle = unsafe.Pointer(C.color_from_str((*C.color_t)(this.handle), astr))
  return retObj
}

func (this TColor) R() uint8 {
  return (uint8)(C.color_r((*C.color_t)(this.handle)));
}

func (this TColor) G() uint8 {
  return (uint8)(C.color_g((*C.color_t)(this.handle)));
}

func (this TColor) B() uint8 {
  return (uint8)(C.color_b((*C.color_t)(this.handle)));
}

func (this TColor) A() uint8 {
  return (uint8)(C.color_a((*C.color_t)(this.handle)));
}

func (this TColor) GetColor() uint32 {
  return (uint32)(C.color_get_color((*C.color_t)(this.handle)));
}

func TColorCast(color TColor) TColor {
  retObj := TColor{}
  retObj.handle = unsafe.Pointer(C.color_cast((*C.color_t)(color.handle)))
  return retObj
}

func (this TColor) Destroy() TRet {
  return TRet(C.color_destroy((*C.color_t)(this.handle)));
}

