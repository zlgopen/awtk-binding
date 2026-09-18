type TBitmap struct {
  handle unsafe.Pointer
}

func TBitmapCreate() TBitmap {
  retObj := TBitmap{}
  retObj.handle = unsafe.Pointer(C.bitmap_create())
  return retObj
}

func TBitmapCreateEx(w uint32, h uint32, line_length uint32, format TBitmapFormat) TBitmap {
  retObj := TBitmap{}
  retObj.handle = unsafe.Pointer(C.bitmap_create_ex((C.uint32_t)(w), (C.uint32_t)(h), (C.uint32_t)(line_length), (C.bitmap_format_t)(format)))
  return retObj
}

func (this TBitmap) GetBpp() uint32 {
  return (uint32)(C.bitmap_get_bpp((*C.bitmap_t)(this.handle)));
}

func (this TBitmap) Destroy() TRet {
  return TRet(C.bitmap_destroy_with_self((*C.bitmap_t)(this.handle)));
}

func TBitmapGetBppOfFormat(format TBitmapFormat) uint32 {
  return (uint32)(C.bitmap_get_bpp_of_format((C.bitmap_format_t)(format)));
}

func (this TBitmap) GetW() int {
  return (int)((*C.bitmap_t)(unsafe.Pointer(this.handle)).w);
}

func (this TBitmap) GetH() int {
  return (int)((*C.bitmap_t)(unsafe.Pointer(this.handle)).h);
}

func (this TBitmap) GetLineLength() uint32 {
  return (uint32)((*C.bitmap_t)(unsafe.Pointer(this.handle)).line_length);
}

func (this TBitmap) GetFlags() uint16 {
  return (uint16)((*C.bitmap_t)(unsafe.Pointer(this.handle)).flags);
}

func (this TBitmap) GetFormat() uint16 {
  return (uint16)((*C.bitmap_t)(unsafe.Pointer(this.handle)).format);
}

func (this TBitmap) GetName() string {
  return C.GoString((*C.bitmap_t)(unsafe.Pointer(this.handle)).name);
}

