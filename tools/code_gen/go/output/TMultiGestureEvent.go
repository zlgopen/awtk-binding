type TMultiGestureEvent struct {
  TEvent
}

func TMultiGestureEventCast(event TEvent) TMultiGestureEvent {
  retObj := TMultiGestureEvent{}
  retObj.handle = unsafe.Pointer(C.multi_gesture_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TMultiGestureEvent) GetX() int {
  return (int)((*C.multi_gesture_event_t)(unsafe.Pointer(this.handle)).x);
}

func (this TMultiGestureEvent) GetY() int {
  return (int)((*C.multi_gesture_event_t)(unsafe.Pointer(this.handle)).y);
}

func (this TMultiGestureEvent) GetRotation() float64 {
  return (float64)((*C.multi_gesture_event_t)(unsafe.Pointer(this.handle)).rotation);
}

func (this TMultiGestureEvent) GetDistance() float64 {
  return (float64)((*C.multi_gesture_event_t)(unsafe.Pointer(this.handle)).distance);
}

