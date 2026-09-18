func TConfUtilsObjectLoadConf(obj TObject, url string, typex string) TRet {
  aurl := C.CString(url)
  defer C.free(unsafe.Pointer(aurl))
  atypex := C.CString(typex)
  defer C.free(unsafe.Pointer(atypex))
  return TRet(C.object_load_conf((*C.object_t)(obj.handle), aurl, atypex));
}

