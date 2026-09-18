type TNamedValueHash struct {
  TNamedValue
}

func TNamedValueHashCreate() TNamedValueHash {
  retObj := TNamedValueHash{}
  retObj.handle = unsafe.Pointer(C.named_value_hash_create())
  return retObj
}

func (this TNamedValueHash) SetName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.named_value_hash_set_name((*C.named_value_hash_t)(this.handle), aname));
}

func (this TNamedValueHash) Destroy() TRet {
  return TRet(C.named_value_hash_destroy((*C.named_value_hash_t)(this.handle)));
}

func (this TNamedValueHash) Clone() TNamedValueHash {
  retObj := TNamedValueHash{}
  retObj.handle = unsafe.Pointer(C.named_value_hash_clone((*C.named_value_hash_t)(this.handle)))
  return retObj
}

func TNamedValueHashGetHashFromStr(str string) int64 {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  return (int64)(C.named_value_hash_get_hash_from_str(astr));
}

