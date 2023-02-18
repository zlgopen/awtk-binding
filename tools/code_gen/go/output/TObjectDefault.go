type TObjectDefault struct {
  TObject
}

func TObjectDefaultCreate() TObject {
  retObj := TObjectDefault{}
  retObj.handle = unsafe.Pointer(C.object_default_create())
  return retObj.TObject
}

func TObjectDefaultCreateEx(enable_path bool) TObject {
  retObj := TObjectDefault{}
  retObj.handle = unsafe.Pointer(C.object_default_create_ex((C.bool_t)(enable_path)))
  return retObj.TObject
}

func (this TObjectDefault) Unref() TRet {
  return TRet(C.object_default_unref((*C.object_t)(this.handle)));
}

func (this TObjectDefault) ClearProps() TRet {
  return TRet(C.object_default_clear_props((*C.object_t)(this.handle)));
}

