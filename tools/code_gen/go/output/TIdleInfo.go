type TIdleInfo struct {
  TObject
}

func TIdleInfoCast(idle TIdleInfo) TIdleInfo {
  retObj := TIdleInfo{}
  retObj.handle = unsafe.Pointer(C.idle_info_cast((*C.idle_info_t)(idle.handle)))
  return retObj
}

func (this TIdleInfo) GetCtx() unsafe.Pointer {
  return (unsafe.Pointer)((*C.idle_info_t)(unsafe.Pointer(this.handle)).ctx);
}

func (this TIdleInfo) GetExtraCtx() unsafe.Pointer {
  return (unsafe.Pointer)((*C.idle_info_t)(unsafe.Pointer(this.handle)).extra_ctx);
}

func (this TIdleInfo) GetId() uint32 {
  return (uint32)((*C.idle_info_t)(unsafe.Pointer(this.handle)).id);
}

