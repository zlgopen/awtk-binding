type TEditEx struct {
  TEdit
}

func TEditExCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TEditEx{}
  retObj.handle = unsafe.Pointer(C.edit_ex_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TEditEx) SetMultiline(multiline bool) TRet {
  return TRet(C.edit_ex_set_multiline((*C.widget_t)(this.handle), (C.bool_t)(multiline)));
}

func (this TEditEx) SetSuggestWords(suggest_words TObject) TRet {
  return TRet(C.edit_ex_set_suggest_words((*C.widget_t)(this.handle), (*C.object_t)(suggest_words.handle)));
}

func (this TEditEx) SetSuggestWordsItemFormats(formats string) TRet {
  aformats := C.CString(formats)
  defer C.free(unsafe.Pointer(aformats))
  return TRet(C.edit_ex_set_suggest_words_item_formats((*C.widget_t)(this.handle), aformats));
}

func (this TEditEx) SetSuggestWordsInputName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.edit_ex_set_suggest_words_input_name((*C.widget_t)(this.handle), aname));
}

func (this TEditEx) UpdateSuggestWordsPopup() TRet {
  return TRet(C.edit_ex_update_suggest_words_popup((*C.widget_t)(this.handle)));
}

func TEditExCast(widget TWidget) TEditEx {
  retObj := TEditEx{}
  retObj.handle = unsafe.Pointer(C.edit_ex_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TEditEx) GetSuggestWords() TObject {
  retObj := TObject{}
  retObj.handle = unsafe.Pointer((*C.edit_ex_t)(unsafe.Pointer(this.handle)).suggest_words)
  return retObj
}

func (this TEditEx) GetSuggestWordsItemFormats() string {
  return C.GoString((*C.edit_ex_t)(unsafe.Pointer(this.handle)).suggest_words_item_formats);
}

func (this TEditEx) GetSuggestWordsInputName() string {
  return C.GoString((*C.edit_ex_t)(unsafe.Pointer(this.handle)).suggest_words_input_name);
}

func (this TEditEx) GetIsSelectSuggestWord() bool {
  return (bool)((*C.edit_ex_t)(unsafe.Pointer(this.handle)).is_select_suggest_word);
}

func (this TEditEx) GetMultiline() bool {
  return (bool)((*C.edit_ex_t)(unsafe.Pointer(this.handle)).multiline);
}

