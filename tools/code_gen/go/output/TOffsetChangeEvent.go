type TOffsetChangeEvent struct {
  TEvent
}

func TOffsetChangeEventCast(event TEvent) TOffsetChangeEvent {
  retObj := TOffsetChangeEvent{}
  retObj.handle = unsafe.Pointer(C.offset_change_event_cast((*C.event_t)(event.handle)))
  return retObj
}

