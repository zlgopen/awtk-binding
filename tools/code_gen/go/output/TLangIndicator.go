type TLangIndicator struct {
  TWidget
}

func TLangIndicatorCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TLangIndicator{}
  retObj.handle = unsafe.Pointer(C.lang_indicator_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TLangIndicator) SetImage(image string) TRet {
  aimage := C.CString(image)
  defer C.free(unsafe.Pointer(aimage))
  return TRet(C.lang_indicator_set_image((*C.widget_t)(this.handle), aimage));
}

func TLangIndicatorCast(widget TWidget) TLangIndicator {
  retObj := TLangIndicator{}
  retObj.handle = unsafe.Pointer(C.lang_indicator_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TLangIndicator) GetImage() string {
  return C.GoString((*C.lang_indicator_t)(unsafe.Pointer(this.handle)).image);
}

