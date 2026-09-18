type TDoneEvent struct {
  TEvent
}

func TDoneEventCast(event TEvent) TDoneEvent {
  retObj := TDoneEvent{}
  retObj.handle = unsafe.Pointer(C.done_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TDoneEvent) GetResult() TRet {
  return TRet((*C.done_event_t)(unsafe.Pointer(this.handle)).result);
}

