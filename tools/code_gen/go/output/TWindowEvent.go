type TWindowEvent struct {
  TEvent
}

func TWindowEventCast(event TEvent) TWindowEvent {
  retObj := TWindowEvent{}
  retObj.handle = unsafe.Pointer(C.window_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TWindowEvent) GetWindow() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer((*C.window_event_t)(unsafe.Pointer(this.handle)).window)
  return retObj
}

