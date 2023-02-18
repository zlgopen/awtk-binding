type TImage struct {
  TImageBase
}

func TImageCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TImage{}
  retObj.handle = unsafe.Pointer(C.image_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TImageIconCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TImage{}
  retObj.handle = unsafe.Pointer(C.icon_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TImage) SetDrawType(draw_type TImageDrawType) TRet {
  return TRet(C.image_set_draw_type((*C.widget_t)(this.handle), (C.image_draw_type_t)(draw_type)));
}

func TImageCast(widget TWidget) TImage {
  retObj := TImage{}
  retObj.handle = unsafe.Pointer(C.image_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TImage) GetDrawType() TImageDrawType {
  return TImageDrawType((*C.image_t)(unsafe.Pointer(this.handle)).draw_type);
}

