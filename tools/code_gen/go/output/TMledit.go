type TMledit struct {
  TWidget
}

func TMleditCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TMledit{}
  retObj.handle = unsafe.Pointer(C.mledit_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TMledit) SetReadonly(readonly bool) TRet {
  return TRet(C.mledit_set_readonly((*C.widget_t)(this.handle), (C.bool_t)(readonly)));
}

func (this TMledit) SetCancelable(cancelable bool) TRet {
  return TRet(C.mledit_set_cancelable((*C.widget_t)(this.handle), (C.bool_t)(cancelable)));
}

func (this TMledit) SetFocus(focus bool) TRet {
  return TRet(C.mledit_set_focus((*C.widget_t)(this.handle), (C.bool_t)(focus)));
}

func (this TMledit) SetWrapWord(wrap_word bool) TRet {
  return TRet(C.mledit_set_wrap_word((*C.widget_t)(this.handle), (C.bool_t)(wrap_word)));
}

func (this TMledit) SetOverwrite(overwrite bool) TRet {
  return TRet(C.mledit_set_overwrite((*C.widget_t)(this.handle), (C.bool_t)(overwrite)));
}

func (this TMledit) SetMaxLines(max_lines uint32) TRet {
  return TRet(C.mledit_set_max_lines((*C.widget_t)(this.handle), (C.uint32_t)(max_lines)));
}

func (this TMledit) SetMaxChars(max_chars uint32) TRet {
  return TRet(C.mledit_set_max_chars((*C.widget_t)(this.handle), (C.uint32_t)(max_chars)));
}

func (this TMledit) SetTips(tips string) TRet {
  atips := C.CString(tips)
  defer C.free(unsafe.Pointer(atips))
  return TRet(C.mledit_set_tips((*C.widget_t)(this.handle), atips));
}

func (this TMledit) SetTrTips(tr_tips string) TRet {
  atr_tips := C.CString(tr_tips)
  defer C.free(unsafe.Pointer(atr_tips))
  return TRet(C.mledit_set_tr_tips((*C.widget_t)(this.handle), atr_tips));
}

func (this TMledit) SetKeyboard(keyboard string) TRet {
  akeyboard := C.CString(keyboard)
  defer C.free(unsafe.Pointer(akeyboard))
  return TRet(C.mledit_set_keyboard((*C.widget_t)(this.handle), akeyboard));
}

func (this TMledit) SetCursor(cursor uint32) TRet {
  return TRet(C.mledit_set_cursor((*C.widget_t)(this.handle), (C.uint32_t)(cursor)));
}

func (this TMledit) GetCursor() uint32 {
  return (uint32)(C.mledit_get_cursor((*C.widget_t)(this.handle)));
}

func (this TMledit) ScrollToOffset(offset uint32) TRet {
  return TRet(C.mledit_scroll_to_offset((*C.widget_t)(this.handle), (C.uint32_t)(offset)));
}

func (this TMledit) SetOpenImWhenFocused(open_im_when_focused bool) TRet {
  return TRet(C.mledit_set_open_im_when_focused((*C.widget_t)(this.handle), (C.bool_t)(open_im_when_focused)));
}

func (this TMledit) SetCloseImWhenBlured(close_im_when_blured bool) TRet {
  return TRet(C.mledit_set_close_im_when_blured((*C.widget_t)(this.handle), (C.bool_t)(close_im_when_blured)));
}

func (this TMledit) SetSelect(start uint32, end uint32) TRet {
  return TRet(C.mledit_set_select((*C.widget_t)(this.handle), (C.uint32_t)(start), (C.uint32_t)(end)));
}

func (this TMledit) GetSelectedText() string {
  return C.GoString(C.mledit_get_selected_text((*C.widget_t)(this.handle)));
}

func (this TMledit) GetCurrentLineIndex() uint32 {
  return (uint32)(C.mledit_get_current_line_index((*C.widget_t)(this.handle)));
}

func (this TMledit) GetCurrentRowIndex() uint32 {
  return (uint32)(C.mledit_get_current_row_index((*C.widget_t)(this.handle)));
}

func (this TMledit) InsertText(offset uint32, text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.mledit_insert_text((*C.widget_t)(this.handle), (C.uint32_t)(offset), atext));
}

func TMleditCast(widget TWidget) TMledit {
  retObj := TMledit{}
  retObj.handle = unsafe.Pointer(C.mledit_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TMledit) GetTips() string {
  return C.GoString((*C.mledit_t)(unsafe.Pointer(this.handle)).tips);
}

func (this TMledit) GetTrTips() string {
  return C.GoString((*C.mledit_t)(unsafe.Pointer(this.handle)).tr_tips);
}

func (this TMledit) GetKeyboard() string {
  return C.GoString((*C.mledit_t)(unsafe.Pointer(this.handle)).keyboard);
}

func (this TMledit) GetMaxLines() uint32 {
  return (uint32)((*C.mledit_t)(unsafe.Pointer(this.handle)).max_lines);
}

func (this TMledit) GetMaxChars() uint32 {
  return (uint32)((*C.mledit_t)(unsafe.Pointer(this.handle)).max_chars);
}

func (this TMledit) GetOverwrite() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).overwrite);
}

func (this TMledit) GetWrapWord() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).wrap_word);
}

func (this TMledit) GetReadonly() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).readonly);
}

func (this TMledit) GetCancelable() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).cancelable);
}

func (this TMledit) GetOpenImWhenFocused() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).open_im_when_focused);
}

func (this TMledit) GetCloseImWhenBlured() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).close_im_when_blured);
}

func (this TMledit) GetAcceptReturn() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).accept_return);
}

func (this TMledit) GetAcceptTab() bool {
  return (bool)((*C.mledit_t)(unsafe.Pointer(this.handle)).accept_tab);
}

