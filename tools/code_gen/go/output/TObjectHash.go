type TObjectHash struct {
  TObject
}

func TObjectHashCreate() TObject {
  retObj := TObjectHash{}
  retObj.handle = unsafe.Pointer(C.object_hash_create())
  return retObj.TObject
}

func TObjectHashCreateEx(enable_path bool) TObject {
  retObj := TObjectHash{}
  retObj.handle = unsafe.Pointer(C.object_hash_create_ex((C.bool_t)(enable_path)))
  return retObj.TObject
}

func (this TObjectHash) SetKeepPropType(keep_prop_type bool) TRet {
  return TRet(C.object_hash_set_keep_prop_type((*C.object_t)(this.handle), (C.bool_t)(keep_prop_type)));
}

func (this TObjectHash) SetKeepPropsOrder(keep_props_order bool) TRet {
  return TRet(C.object_hash_set_keep_props_order((*C.object_t)(this.handle), (C.bool_t)(keep_props_order)));
}

