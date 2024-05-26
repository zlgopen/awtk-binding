type TLogMessageEvent struct {
  TEvent
}

func TLogMessageEventCast(event TEvent) TLogMessageEvent {
  retObj := TLogMessageEvent{}
  retObj.handle = unsafe.Pointer(C.log_message_event_cast((*C.event_t)(event.handle)))
  return retObj
}

