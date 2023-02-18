type TLocaleInfo struct {
  handle unsafe.Pointer
}

func TLocaleInfoInstance() TLocaleInfo {
  retObj := TLocaleInfo{}
  retObj.handle = unsafe.Pointer(C.locale_info())
  return retObj
}

func (this TLocaleInfo) Tr(text string) string {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return C.GoString(C.locale_info_tr((*C.locale_info_t)(this.handle), atext));
}

func (this TLocaleInfo) Change(language string, country string) TRet {
  alanguage := C.CString(language)
  defer C.free(unsafe.Pointer(alanguage))
  acountry := C.CString(country)
  defer C.free(unsafe.Pointer(acountry))
  return TRet(C.locale_info_change((*C.locale_info_t)(this.handle), alanguage, acountry));
}

func (this TLocaleInfo) Off(id uint32) TRet {
  return TRet(C.locale_info_off((*C.locale_info_t)(this.handle), (C.uint32_t)(id)));
}

