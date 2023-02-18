type TTimerInfo struct {
  TObject
}

func TTimerInfoCast(timer TTimerInfo) TTimerInfo {
  retObj := TTimerInfo{}
  retObj.handle = unsafe.Pointer(C.timer_info_cast((*C.timer_info_t)(timer.handle)))
  return retObj
}

func (this TTimerInfo) GetCtx() unsafe.Pointer {
  return (unsafe.Pointer)((*C.timer_info_t)(unsafe.Pointer(this.handle)).ctx);
}

func (this TTimerInfo) GetExtraCtx() unsafe.Pointer {
  return (unsafe.Pointer)((*C.timer_info_t)(unsafe.Pointer(this.handle)).extra_ctx);
}

func (this TTimerInfo) GetId() uint32 {
  return (uint32)((*C.timer_info_t)(unsafe.Pointer(this.handle)).id);
}

func (this TTimerInfo) GetNow() int64 {
  return (int64)((*C.timer_info_t)(unsafe.Pointer(this.handle)).now);
}

