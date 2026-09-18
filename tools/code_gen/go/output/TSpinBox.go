type TSpinBox struct {
  TEdit
}

func TSpinBoxCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSpinBox{}
  retObj.handle = unsafe.Pointer(C.spin_box_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSpinBoxCast(widget TWidget) TSpinBox {
  retObj := TSpinBox{}
  retObj.handle = unsafe.Pointer(C.spin_box_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSpinBox) SetEasyTouchMode(easy_touch_mode bool) TRet {
  return TRet(C.spin_box_set_easy_touch_mode((*C.widget_t)(this.handle), (C.bool_t)(easy_touch_mode)));
}

func (this TSpinBox) SetButtonPosition(button_position string) TRet {
  abutton_position := C.CString(button_position)
  defer C.free(unsafe.Pointer(abutton_position))
  return TRet(C.spin_box_set_button_position((*C.widget_t)(this.handle), abutton_position));
}

func (this TSpinBox) SpinSetRepeat(repeat int32) TRet {
  return TRet(C.spin_set_repeat((*C.widget_t)(this.handle), (C.int32_t)(repeat)));
}

func (this TSpinBox) GetEasyTouchMode() bool {
  return (bool)((*C.spin_box_t)(unsafe.Pointer(this.handle)).easy_touch_mode);
}

func (this TSpinBox) GetButtonPosition() string {
  return C.GoString((*C.spin_box_t)(unsafe.Pointer(this.handle)).button_position);
}

