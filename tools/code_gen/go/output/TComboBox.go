type TComboBox struct {
  TEdit
}

func TComboBoxCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TComboBox{}
  retObj.handle = unsafe.Pointer(C.combo_box_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TComboBoxCast(widget TWidget) TComboBox {
  retObj := TComboBox{}
  retObj.handle = unsafe.Pointer(C.combo_box_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TComboBox) SetOpenWindow(open_window string) TRet {
  aopen_window := C.CString(open_window)
  defer C.free(unsafe.Pointer(aopen_window))
  return TRet(C.combo_box_set_open_window((*C.widget_t)(this.handle), aopen_window));
}

func (this TComboBox) SetThemeOfPopup(theme_of_popup string) TRet {
  atheme_of_popup := C.CString(theme_of_popup)
  defer C.free(unsafe.Pointer(atheme_of_popup))
  return TRet(C.combo_box_set_theme_of_popup((*C.widget_t)(this.handle), atheme_of_popup));
}

func (this TComboBox) ResetOptions() TRet {
  return TRet(C.combo_box_reset_options((*C.widget_t)(this.handle)));
}

func (this TComboBox) CountOptions() int32 {
  return (int32)(C.combo_box_count_options((*C.widget_t)(this.handle)));
}

func (this TComboBox) SetSelectedIndex(index uint32) TRet {
  return TRet(C.combo_box_set_selected_index((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TComboBox) SetSelectedIndexByText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.combo_box_set_selected_index_by_text((*C.widget_t)(this.handle), atext));
}

func (this TComboBox) SetLocalizeOptions(localize_options bool) TRet {
  return TRet(C.combo_box_set_localize_options((*C.widget_t)(this.handle), (C.bool_t)(localize_options)));
}

func (this TComboBox) SetValue(value int32) TRet {
  return TRet(C.combo_box_set_value((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TComboBox) SetItemHeight(item_height uint32) TRet {
  return TRet(C.combo_box_set_item_height((*C.widget_t)(this.handle), (C.uint32_t)(item_height)));
}

func (this TComboBox) AppendOption(value int32, text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.combo_box_append_option((*C.widget_t)(this.handle), (C.int32_t)(value), atext));
}

func (this TComboBox) RemoveOption(value int32) TRet {
  return TRet(C.combo_box_remove_option((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TComboBox) RemoveOptionByIndex(index uint32) TRet {
  return TRet(C.combo_box_remove_option_by_index((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TComboBox) SetOptions(options string) TRet {
  aoptions := C.CString(options)
  defer C.free(unsafe.Pointer(aoptions))
  return TRet(C.combo_box_set_options((*C.widget_t)(this.handle), aoptions));
}

func (this TComboBox) GetValueInt() int32 {
  return (int32)(C.combo_box_get_value((*C.widget_t)(this.handle)));
}

func (this TComboBox) HasOptionText(text string) bool {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return (bool)(C.combo_box_has_option_text((*C.widget_t)(this.handle), atext));
}

func (this TComboBox) GetTextValue() string {
  return C.GoString(C.combo_box_get_text((*C.widget_t)(this.handle)));
}

func (this TComboBox) GetTextOfSelected() string {
  return C.GoString(C.combo_box_get_text_of_selected((*C.widget_t)(this.handle)));
}

func (this TComboBox) GetOpenWindow() string {
  return C.GoString((*C.combo_box_t)(unsafe.Pointer(this.handle)).open_window);
}

func (this TComboBox) GetThemeOfPopup() string {
  return C.GoString((*C.combo_box_t)(unsafe.Pointer(this.handle)).theme_of_popup);
}

func (this TComboBox) GetSelectedIndex() int32 {
  return (int32)((*C.combo_box_t)(unsafe.Pointer(this.handle)).selected_index);
}

func (this TComboBox) GetLocalizeOptions() bool {
  return (bool)((*C.combo_box_t)(unsafe.Pointer(this.handle)).localize_options);
}

func (this TComboBox) GetOptions() string {
  return C.GoString((*C.combo_box_t)(unsafe.Pointer(this.handle)).options);
}

func (this TComboBox) GetItemHeight() int32 {
  return (int32)((*C.combo_box_t)(unsafe.Pointer(this.handle)).item_height);
}

