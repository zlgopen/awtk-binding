type TComboBoxItem struct {
  TWidget
}

func TComboBoxItemCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TComboBoxItem{}
  retObj.handle = unsafe.Pointer(C.combo_box_item_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TComboBoxItemCast(widget TWidget) TComboBoxItem {
  retObj := TComboBoxItem{}
  retObj.handle = unsafe.Pointer(C.combo_box_item_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TComboBoxItem) SetChecked(checked bool) TRet {
  return TRet(C.combo_box_item_set_checked((*C.widget_t)(this.handle), (C.bool_t)(checked)));
}

func (this TComboBoxItem) SetValue(value int32) TRet {
  return TRet(C.combo_box_item_set_value((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TComboBoxItem) GetChecked() bool {
  return (bool)((*C.combo_box_item_t)(unsafe.Pointer(this.handle)).checked);
}

