type TPointerEvent struct {
  TEvent
}

func TPointerEventCast(event TEvent) TPointerEvent {
  retObj := TPointerEvent{}
  retObj.handle = unsafe.Pointer(C.pointer_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TPointerEvent) GetX() int {
  return (int)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).x);
}

func (this TPointerEvent) GetY() int {
  return (int)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).y);
}

func (this TPointerEvent) GetButton() int {
  return (int)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).button);
}

func (this TPointerEvent) GetPressed() bool {
  return (bool)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).pressed);
}

func (this TPointerEvent) GetAlt() bool {
  return (bool)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).alt);
}

func (this TPointerEvent) GetCtrl() bool {
  return (bool)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).ctrl);
}

func (this TPointerEvent) GetCmd() bool {
  return (bool)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).cmd);
}

func (this TPointerEvent) GetMenu() bool {
  return (bool)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).menu);
}

func (this TPointerEvent) GetShift() bool {
  return (bool)((*C.pointer_event_t)(unsafe.Pointer(this.handle)).shift);
}

