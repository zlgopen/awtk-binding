type TPropChangeEvent struct {
  TEvent
}

func TPropChangeEventCast(event TEvent) TPropChangeEvent {
  retObj := TPropChangeEvent{}
  retObj.handle = unsafe.Pointer(C.prop_change_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TPropChangeEvent) GetName() string {
  return C.GoString((*C.prop_change_event_t)(unsafe.Pointer(this.handle)).name);
}

