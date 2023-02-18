type TInputMethod struct {
  handle unsafe.Pointer
}

func (this TInputMethod) CommitText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.input_method_commit_text((*C.input_method_t)(this.handle), atext));
}

func (this TInputMethod) SetLang(lang string) TRet {
  alang := C.CString(lang)
  defer C.free(unsafe.Pointer(alang))
  return TRet(C.input_method_set_lang((*C.input_method_t)(this.handle), alang));
}

func (this TInputMethod) GetLang() string {
  return C.GoString(C.input_method_get_lang((*C.input_method_t)(this.handle)));
}

func (this TInputMethod) DispatchKey(key uint32) TRet {
  return TRet(C.input_method_dispatch_key((*C.input_method_t)(this.handle), (C.uint32_t)(key)));
}

func (this TInputMethod) DispatchKeys(key string) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return TRet(C.input_method_dispatch_keys((*C.input_method_t)(this.handle), akey));
}

func (this TInputMethod) DispatchPreedit() TRet {
  return TRet(C.input_method_dispatch_preedit((*C.input_method_t)(this.handle)));
}

func (this TInputMethod) DispatchPreeditConfirm() TRet {
  return TRet(C.input_method_dispatch_preedit_confirm((*C.input_method_t)(this.handle)));
}

func (this TInputMethod) DispatchPreeditAbort() TRet {
  return TRet(C.input_method_dispatch_preedit_abort((*C.input_method_t)(this.handle)));
}

func TInputMethodInstance() TInputMethod {
  retObj := TInputMethod{}
  retObj.handle = unsafe.Pointer(C.input_method())
  return retObj
}

