type TSystemEvent struct {
  TEvent
}

func TSystemEventCast(event TEvent) TSystemEvent {
  retObj := TSystemEvent{}
  retObj.handle = unsafe.Pointer(C.system_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TSystemEvent) GetSdlEvent() unsafe.Pointer {
  return (unsafe.Pointer)((*C.system_event_t)(unsafe.Pointer(this.handle)).sdl_event);
}

