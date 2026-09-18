type TCheckButton struct {
  TWidget
}

func TCheckButtonCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TCheckButton{}
  retObj.handle = unsafe.Pointer(C.check_button_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TCheckButtonCreateRadio(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TCheckButton{}
  retObj.handle = unsafe.Pointer(C.check_button_create_radio((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TCheckButton) SetValue(value bool) TRet {
  return TRet(C.check_button_set_value((*C.widget_t)(this.handle), (C.bool_t)(value)));
}

func (this TCheckButton) SetIndeterminate(indeterminate bool) TRet {
  return TRet(C.check_button_set_indeterminate((*C.widget_t)(this.handle), (C.bool_t)(indeterminate)));
}

func (this TCheckButton) GetIndeterminate() bool {
  return (bool)(C.check_button_get_indeterminate((*C.widget_t)(this.handle)));
}

func TCheckButtonCast(widget TWidget) TCheckButton {
  retObj := TCheckButton{}
  retObj.handle = unsafe.Pointer(C.check_button_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func TCheckButtonCreateEx(parent TWidget, x int, y int, w int, h int, typex string, radio bool) TWidget {
  atypex := C.CString(typex)
  defer C.free(unsafe.Pointer(atypex))
  retObj := TCheckButton{}
  retObj.handle = unsafe.Pointer(C.check_button_create_ex((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h), atypex, (C.bool_t)(radio)))
  return retObj.TWidget
}

