type TSvgImage struct {
  TImageBase
}

func TSvgImageCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSvgImage{}
  retObj.handle = unsafe.Pointer(C.svg_image_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TSvgImage) SetImage(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.svg_image_set_image((*C.widget_t)(this.handle), aname));
}

func TSvgImageCast(widget TWidget) TSvgImage {
  retObj := TSvgImage{}
  retObj.handle = unsafe.Pointer(C.svg_image_cast((*C.widget_t)(widget.handle)))
  return retObj
}

