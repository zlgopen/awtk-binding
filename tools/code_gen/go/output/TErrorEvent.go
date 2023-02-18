type TErrorEvent struct {
  TEvent
}

func TErrorEventCast(event TEvent) TErrorEvent {
  retObj := TErrorEvent{}
  retObj.handle = unsafe.Pointer(C.error_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TErrorEvent) GetCode() int32 {
  return (int32)((*C.error_event_t)(unsafe.Pointer(this.handle)).code);
}

func (this TErrorEvent) GetMessage() string {
  return C.GoString((*C.error_event_t)(unsafe.Pointer(this.handle)).message);
}

