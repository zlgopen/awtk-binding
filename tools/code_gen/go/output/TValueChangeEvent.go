type TValueChangeEvent struct {
  TEvent
}

func TValueChangeEventCast(event TEvent) TValueChangeEvent {
  retObj := TValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.value_change_event_cast((*C.event_t)(event.handle)))
  return retObj
}

