type TRectf struct {
  handle unsafe.Pointer
}

func (this TRectf) GetX() float64 {
  return (float64)((*C.rectf_t)(unsafe.Pointer(this.handle)).x);
}

func (this TRectf) GetY() float64 {
  return (float64)((*C.rectf_t)(unsafe.Pointer(this.handle)).y);
}

func (this TRectf) GetW() float64 {
  return (float64)((*C.rectf_t)(unsafe.Pointer(this.handle)).w);
}

func (this TRectf) GetH() float64 {
  return (float64)((*C.rectf_t)(unsafe.Pointer(this.handle)).h);
}

