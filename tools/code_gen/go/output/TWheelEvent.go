type TWheelEvent struct {
  TEvent
}

func TWheelEventCast(event TEvent) TWheelEvent {
  retObj := TWheelEvent{}
  retObj.handle = unsafe.Pointer(C.wheel_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TWheelEvent) GetDy() int32 {
  return (int32)((*C.wheel_event_t)(unsafe.Pointer(this.handle)).dy);
}

func (this TWheelEvent) GetAlt() bool {
  return (bool)((*C.wheel_event_t)(unsafe.Pointer(this.handle)).alt);
}

func (this TWheelEvent) GetCtrl() bool {
  return (bool)((*C.wheel_event_t)(unsafe.Pointer(this.handle)).ctrl);
}

func (this TWheelEvent) GetShift() bool {
  return (bool)((*C.wheel_event_t)(unsafe.Pointer(this.handle)).shift);
}

