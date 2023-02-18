type TCmdExecEvent struct {
  TEvent
}

func TCmdExecEventCast(event TEvent) TCmdExecEvent {
  retObj := TCmdExecEvent{}
  retObj.handle = unsafe.Pointer(C.cmd_exec_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TCmdExecEvent) GetName() string {
  return C.GoString((*C.cmd_exec_event_t)(unsafe.Pointer(this.handle)).name);
}

func (this TCmdExecEvent) GetArgs() string {
  return C.GoString((*C.cmd_exec_event_t)(unsafe.Pointer(this.handle)).args);
}

func (this TCmdExecEvent) GetResult() TRet {
  return TRet((*C.cmd_exec_event_t)(unsafe.Pointer(this.handle)).result);
}

func (this TCmdExecEvent) GetCanExec() bool {
  return (bool)((*C.cmd_exec_event_t)(unsafe.Pointer(this.handle)).can_exec);
}

