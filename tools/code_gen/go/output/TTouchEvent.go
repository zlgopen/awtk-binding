type TTouchEvent struct {
  TEvent
}

func TTouchEventCast(event TEvent) TTouchEvent {
  retObj := TTouchEvent{}
  retObj.handle = unsafe.Pointer(C.touch_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TTouchEvent) GetTouchId() int64 {
  return (int64)((*C.touch_event_t)(unsafe.Pointer(this.handle)).touch_id);
}

func (this TTouchEvent) GetFingerId() int64 {
  return (int64)((*C.touch_event_t)(unsafe.Pointer(this.handle)).finger_id);
}

func (this TTouchEvent) GetX() float64 {
  return (float64)((*C.touch_event_t)(unsafe.Pointer(this.handle)).x);
}

func (this TTouchEvent) GetY() float64 {
  return (float64)((*C.touch_event_t)(unsafe.Pointer(this.handle)).y);
}

func (this TTouchEvent) GetPressure() float64 {
  return (float64)((*C.touch_event_t)(unsafe.Pointer(this.handle)).pressure);
}

