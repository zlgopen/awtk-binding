type TRect struct {
  handle unsafe.Pointer
}

func TRectCreate(x int, y int, w int, h int) TRect {
  retObj := TRect{}
  retObj.handle = unsafe.Pointer(C.rect_create((C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj
}

func (this TRect) Set(x int, y int, w int, h int) TRect {
  retObj := TRect{}
  retObj.handle = unsafe.Pointer(C.rect_set((*C.rect_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj
}

func TRectCast(rect TRect) TRect {
  retObj := TRect{}
  retObj.handle = unsafe.Pointer(C.rect_cast((*C.rect_t)(rect.handle)))
  return retObj
}

func (this TRect) Destroy() TRet {
  return TRet(C.rect_destroy((*C.rect_t)(this.handle)));
}

func (this TRect) GetX() int {
  return (int)((*C.rect_t)(unsafe.Pointer(this.handle)).x);
}

func (this TRect) GetY() int {
  return (int)((*C.rect_t)(unsafe.Pointer(this.handle)).y);
}

func (this TRect) GetW() int {
  return (int)((*C.rect_t)(unsafe.Pointer(this.handle)).w);
}

func (this TRect) GetH() int {
  return (int)((*C.rect_t)(unsafe.Pointer(this.handle)).h);
}

