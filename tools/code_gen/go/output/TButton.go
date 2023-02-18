type TButton struct {
  TWidget
}

func TButtonCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TButton{}
  retObj.handle = unsafe.Pointer(C.button_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TButtonCast(widget TWidget) TButton {
  retObj := TButton{}
  retObj.handle = unsafe.Pointer(C.button_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TButton) SetRepeat(repeat int32) TRet {
  return TRet(C.button_set_repeat((*C.widget_t)(this.handle), (C.int32_t)(repeat)));
}

func (this TButton) SetLongPressTime(long_press_time uint32) TRet {
  return TRet(C.button_set_long_press_time((*C.widget_t)(this.handle), (C.uint32_t)(long_press_time)));
}

func (this TButton) SetEnableLongPress(enable_long_press bool) TRet {
  return TRet(C.button_set_enable_long_press((*C.widget_t)(this.handle), (C.bool_t)(enable_long_press)));
}

func (this TButton) SetEnablePreview(enable_preview bool) TRet {
  return TRet(C.button_set_enable_preview((*C.widget_t)(this.handle), (C.bool_t)(enable_preview)));
}

func (this TButton) GetRepeat() int32 {
  return (int32)((*C.button_t)(unsafe.Pointer(this.handle)).repeat);
}

func (this TButton) GetEnableLongPress() bool {
  return (bool)((*C.button_t)(unsafe.Pointer(this.handle)).enable_long_press);
}

func (this TButton) GetEnablePreview() bool {
  return (bool)((*C.button_t)(unsafe.Pointer(this.handle)).enable_preview);
}

func (this TButton) GetLongPressTime() uint32 {
  return (uint32)((*C.button_t)(unsafe.Pointer(this.handle)).long_press_time);
}

func (this TButton) GetPressed() bool {
  return (bool)((*C.button_t)(unsafe.Pointer(this.handle)).pressed);
}

