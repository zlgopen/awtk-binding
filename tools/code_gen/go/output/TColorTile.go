type TColorTile struct {
  TWidget
}

func TColorTileCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TColorTile{}
  retObj.handle = unsafe.Pointer(C.color_tile_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TColorTileCast(widget TWidget) TColorTile {
  retObj := TColorTile{}
  retObj.handle = unsafe.Pointer(C.color_tile_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TColorTile) SetBgColor(color string) TRet {
  acolor := C.CString(color)
  defer C.free(unsafe.Pointer(acolor))
  return TRet(C.color_tile_set_bg_color((*C.widget_t)(this.handle), acolor));
}

func (this TColorTile) GetBgColor() string {
  return C.GoString(C.color_tile_get_bg_color((*C.widget_t)(this.handle)));
}

func (this TColorTile) GetBorderColor() string {
  return C.GoString(C.color_tile_get_border_color((*C.widget_t)(this.handle)));
}

