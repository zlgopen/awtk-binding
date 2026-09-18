type TObjectArray struct {
  TObject
}

func TObjectArrayCreate() TObject {
  retObj := TObjectArray{}
  retObj.handle = unsafe.Pointer(C.object_array_create())
  return retObj.TObject
}

func (this TObjectArray) Unref() TRet {
  return TRet(C.object_array_unref((*C.object_t)(this.handle)));
}

func (this TObjectArray) ClearProps() TRet {
  return TRet(C.object_array_clear_props((*C.object_t)(this.handle)));
}

func (this TObjectArray) Insert(index uint32, v TValue) TRet {
  return TRet(C.object_array_insert((*C.object_t)(this.handle), (C.uint32_t)(index), (*C.value_t)(v.handle)));
}

func (this TObjectArray) Push(v TValue) TRet {
  return TRet(C.object_array_push((*C.object_t)(this.handle), (*C.value_t)(v.handle)));
}

func (this TObjectArray) IndexOf(v TValue) int32 {
  return (int32)(C.object_array_index_of((*C.object_t)(this.handle), (*C.value_t)(v.handle)));
}

func (this TObjectArray) LastIndexOf(v TValue) int32 {
  return (int32)(C.object_array_last_index_of((*C.object_t)(this.handle), (*C.value_t)(v.handle)));
}

func (this TObjectArray) Remove(index uint32) TRet {
  return TRet(C.object_array_remove((*C.object_t)(this.handle), (C.uint32_t)(index)));
}

func (this TObjectArray) RemoveValue(v TValue) TRet {
  return TRet(C.object_array_remove_value((*C.object_t)(this.handle), (*C.value_t)(v.handle)));
}

func (this TObjectArray) GetAndRemove(index uint32, v TValue) TRet {
  return TRet(C.object_array_get_and_remove((*C.object_t)(this.handle), (C.uint32_t)(index), (*C.value_t)(v.handle)));
}

func (this TObjectArray) GetSize() uint32 {
  return (uint32)((*C.object_array_t)(unsafe.Pointer(this.handle)).size);
}

