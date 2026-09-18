type TProgressEvent struct {
  TEvent
}

func TProgressEventCast(event TEvent) TProgressEvent {
  retObj := TProgressEvent{}
  retObj.handle = unsafe.Pointer(C.progress_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TProgressEvent) GetPercent() uint32 {
  return (uint32)((*C.progress_event_t)(unsafe.Pointer(this.handle)).percent);
}

