type TOrientationEvent struct {
  TEvent
}

func TOrientationEventCast(event TEvent) TOrientationEvent {
  retObj := TOrientationEvent{}
  retObj.handle = unsafe.Pointer(C.orientation_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TOrientationEvent) GetOrientation() int64 {
  return (int64)((*C.orientation_event_t)(unsafe.Pointer(this.handle)).orientation);
}

func (this TOrientationEvent) GetOldOrientation() int64 {
  return (int64)((*C.orientation_event_t)(unsafe.Pointer(this.handle)).old_orientation);
}

