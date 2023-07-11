type TLocaleInfos struct {
  handle unsafe.Pointer
}

func TLocaleInfosRef(name string) TLocaleInfo {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TLocaleInfo{}
  retObj.handle = unsafe.Pointer(C.locale_infos_ref(aname))
  return retObj
}

func TLocaleInfosUnref(locale_info TLocaleInfo) TRet {
  return TRet(C.locale_infos_unref((*C.locale_info_t)(locale_info.handle)));
}

func TLocaleInfosChange(language string, country string) TRet {
  alanguage := C.CString(language)
  defer C.free(unsafe.Pointer(alanguage))
  acountry := C.CString(country)
  defer C.free(unsafe.Pointer(acountry))
  return TRet(C.locale_infos_change(alanguage, acountry));
}

func TLocaleInfosOff(id uint32) TRet {
  return TRet(C.locale_infos_off((C.uint32_t)(id)));
}

func TLocaleInfosReloadAll() TRet {
  return TRet(C.locale_infos_reload_all());
}

func (this TLocaleInfos) GetUnused() int {
  return (int)((*C.locale_infos_t)(unsafe.Pointer(this.handle)).unused);
}

