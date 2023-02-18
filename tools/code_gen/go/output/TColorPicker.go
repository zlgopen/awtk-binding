type TColorPicker struct {
  TWidget
}

func TColorPickerCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TColorPicker{}
  retObj.handle = unsafe.Pointer(C.color_picker_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TColorPicker) SetColor(color string) TRet {
  acolor := C.CString(color)
  defer C.free(unsafe.Pointer(acolor))
  return TRet(C.color_picker_set_color((*C.widget_t)(this.handle), acolor));
}

func TColorPickerCast(widget TWidget) TColorPicker {
  retObj := TColorPicker{}
  retObj.handle = unsafe.Pointer(C.color_picker_cast((*C.widget_t)(widget.handle)))
  return retObj
}

