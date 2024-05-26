type TEdit struct {
  TWidget
}

func TEditCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TEdit{}
  retObj.handle = unsafe.Pointer(C.edit_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TEditCast(widget TWidget) TEdit {
  retObj := TEdit{}
  retObj.handle = unsafe.Pointer(C.edit_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TEdit) GetInt() int32 {
  return (int32)(C.edit_get_int((*C.widget_t)(this.handle)));
}

func (this TEdit) GetDouble() float64 {
  return (float64)(C.edit_get_double((*C.widget_t)(this.handle)));
}

func (this TEdit) SetInt(value int32) TRet {
  return TRet(C.edit_set_int((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TEdit) SetDouble(value float64) TRet {
  return TRet(C.edit_set_double((*C.widget_t)(this.handle), (C.double)(value)));
}

func (this TEdit) SetDoubleEx(format string, value float64) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.edit_set_double_ex((*C.widget_t)(this.handle), aformat, (C.double)(value)));
}

func (this TEdit) SetTextLimit(min uint32, max uint32) TRet {
  return TRet(C.edit_set_text_limit((*C.widget_t)(this.handle), (C.uint32_t)(min), (C.uint32_t)(max)));
}

func (this TEdit) SetIntLimit(min int32, max int32, step uint32) TRet {
  return TRet(C.edit_set_int_limit((*C.widget_t)(this.handle), (C.int32_t)(min), (C.int32_t)(max), (C.uint32_t)(step)));
}

func (this TEdit) SetFloatLimit(min float64, max float64, step float64) TRet {
  return TRet(C.edit_set_float_limit((*C.widget_t)(this.handle), (C.double)(min), (C.double)(max), (C.double)(step)));
}

func (this TEdit) SetReadonly(readonly bool) TRet {
  return TRet(C.edit_set_readonly((*C.widget_t)(this.handle), (C.bool_t)(readonly)));
}

func (this TEdit) SetCancelable(cancelable bool) TRet {
  return TRet(C.edit_set_cancelable((*C.widget_t)(this.handle), (C.bool_t)(cancelable)));
}

func (this TEdit) SetAutoFix(auto_fix bool) TRet {
  return TRet(C.edit_set_auto_fix((*C.widget_t)(this.handle), (C.bool_t)(auto_fix)));
}

func (this TEdit) SetSelectNoneWhenFocused(select_none_when_focused bool) TRet {
  return TRet(C.edit_set_select_none_when_focused((*C.widget_t)(this.handle), (C.bool_t)(select_none_when_focused)));
}

func (this TEdit) SetOpenImWhenFocused(open_im_when_focused bool) TRet {
  return TRet(C.edit_set_open_im_when_focused((*C.widget_t)(this.handle), (C.bool_t)(open_im_when_focused)));
}

func (this TEdit) SetCloseImWhenBlured(close_im_when_blured bool) TRet {
  return TRet(C.edit_set_close_im_when_blured((*C.widget_t)(this.handle), (C.bool_t)(close_im_when_blured)));
}

func (this TEdit) SetInputType(typex TInputType) TRet {
  return TRet(C.edit_set_input_type((*C.widget_t)(this.handle), (C.input_type_t)(typex)));
}

func (this TEdit) SetActionText(action_text string) TRet {
  aaction_text := C.CString(action_text)
  defer C.free(unsafe.Pointer(aaction_text))
  return TRet(C.edit_set_action_text((*C.widget_t)(this.handle), aaction_text));
}

func (this TEdit) SetTips(tips string) TRet {
  atips := C.CString(tips)
  defer C.free(unsafe.Pointer(atips))
  return TRet(C.edit_set_tips((*C.widget_t)(this.handle), atips));
}

func (this TEdit) SetTrTips(tr_tips string) TRet {
  atr_tips := C.CString(tr_tips)
  defer C.free(unsafe.Pointer(atr_tips))
  return TRet(C.edit_set_tr_tips((*C.widget_t)(this.handle), atr_tips));
}

func (this TEdit) SetKeyboard(keyboard string) TRet {
  akeyboard := C.CString(keyboard)
  defer C.free(unsafe.Pointer(akeyboard))
  return TRet(C.edit_set_keyboard((*C.widget_t)(this.handle), akeyboard));
}

func (this TEdit) SetPasswordVisible(password_visible bool) TRet {
  return TRet(C.edit_set_password_visible((*C.widget_t)(this.handle), (C.bool_t)(password_visible)));
}

func (this TEdit) SetFocus(focus bool) TRet {
  return TRet(C.edit_set_focus((*C.widget_t)(this.handle), (C.bool_t)(focus)));
}

func (this TEdit) SetCursor(cursor uint32) TRet {
  return TRet(C.edit_set_cursor((*C.widget_t)(this.handle), (C.uint32_t)(cursor)));
}

func (this TEdit) GetCursor() uint32 {
  return (uint32)(C.edit_get_cursor((*C.widget_t)(this.handle)));
}

func (this TEdit) SetSelect(start uint32, end uint32) TRet {
  return TRet(C.edit_set_select((*C.widget_t)(this.handle), (C.uint32_t)(start), (C.uint32_t)(end)));
}

func (this TEdit) GetSelectedText() string {
  return C.GoString(C.edit_get_selected_text((*C.widget_t)(this.handle)));
}

func (this TEdit) SetFocusNextWhenEnter(focus_next_when_enter bool) TRet {
  return TRet(C.edit_set_focus_next_when_enter((*C.widget_t)(this.handle), (C.bool_t)(focus_next_when_enter)));
}

func (this TEdit) GetTips() string {
  return C.GoString((*C.edit_t)(unsafe.Pointer(this.handle)).tips);
}

func (this TEdit) GetTrTips() string {
  return C.GoString((*C.edit_t)(unsafe.Pointer(this.handle)).tr_tips);
}

func (this TEdit) GetActionText() string {
  return C.GoString((*C.edit_t)(unsafe.Pointer(this.handle)).action_text);
}

func (this TEdit) GetValidator() string {
  return C.GoString((*C.edit_t)(unsafe.Pointer(this.handle)).validator);
}

func (this TEdit) GetKeyboard() string {
  return C.GoString((*C.edit_t)(unsafe.Pointer(this.handle)).keyboard);
}

func (this TEdit) GetMin() float64 {
  return (float64)((*C.edit_t)(unsafe.Pointer(this.handle)).min);
}

func (this TEdit) GetMax() float64 {
  return (float64)((*C.edit_t)(unsafe.Pointer(this.handle)).max);
}

func (this TEdit) GetStep() float64 {
  return (float64)((*C.edit_t)(unsafe.Pointer(this.handle)).step);
}

func (this TEdit) GetInputType() TInputType {
  return TInputType((*C.edit_t)(unsafe.Pointer(this.handle)).input_type);
}

func (this TEdit) GetReadonly() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).readonly);
}

func (this TEdit) GetPasswordVisible() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).password_visible);
}

func (this TEdit) GetAutoFix() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).auto_fix);
}

func (this TEdit) GetSelectNoneWhenFocused() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).select_none_when_focused);
}

func (this TEdit) GetOpenImWhenFocused() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).open_im_when_focused);
}

func (this TEdit) GetCloseImWhenBlured() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).close_im_when_blured);
}

func (this TEdit) GetCancelable() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).cancelable);
}

func (this TEdit) GetFocusNextWhenEnter() bool {
  return (bool)((*C.edit_t)(unsafe.Pointer(this.handle)).focus_next_when_enter);
}

