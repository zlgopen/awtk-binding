func TAppConfSave() TRet {
  return TRet(C.app_conf_save());
}

func TAppConfReload() TRet {
  return TRet(C.app_conf_reload());
}

func TAppConfDeinit() TRet {
  return TRet(C.app_conf_deinit());
}

func TAppConfExist(key string) bool {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return (bool)(C.app_conf_exist(akey));
}

func TAppConfSetInt(key string, v int32) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return TRet(C.app_conf_set_int(akey, (C.int32_t)(v)));
}

func TAppConfSetInt64(key string, v int64) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return TRet(C.app_conf_set_int64(akey, (C.int64_t)(v)));
}

func TAppConfSetBool(key string, v bool) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return TRet(C.app_conf_set_bool(akey, (C.bool_t)(v)));
}

func TAppConfSetDouble(key string, v float64) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return TRet(C.app_conf_set_double(akey, (C.double)(v)));
}

func TAppConfSetStr(key string, v string) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  av := C.CString(v)
  defer C.free(unsafe.Pointer(av))
  return TRet(C.app_conf_set_str(akey, av));
}

func TAppConfGetInt(key string, defval int32) int32 {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return (int32)(C.app_conf_get_int(akey, (C.int32_t)(defval)));
}

func TAppConfGetInt64(key string, defval int64) int64 {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return (int64)(C.app_conf_get_int64(akey, (C.int64_t)(defval)));
}

func TAppConfGetBool(key string, defval bool) bool {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return (bool)(C.app_conf_get_bool(akey, (C.bool_t)(defval)));
}

func TAppConfGetDouble(key string, defval float64) float64 {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return (float64)(C.app_conf_get_double(akey, (C.double)(defval)));
}

func TAppConfGetStr(key string, defval string) string {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  adefval := C.CString(defval)
  defer C.free(unsafe.Pointer(adefval))
  return C.GoString(C.app_conf_get_str(akey, adefval));
}

func TAppConfRemove(key string) TRet {
  akey := C.CString(key)
  defer C.free(unsafe.Pointer(akey))
  return TRet(C.app_conf_remove(akey));
}

