type TKeyEvent struct {
  TEvent
}

func TKeyEventCast(event TEvent) TKeyEvent {
  retObj := TKeyEvent{}
  retObj.handle = unsafe.Pointer(C.key_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TKeyEvent) GetKey() uint32 {
  return (uint32)((*C.key_event_t)(unsafe.Pointer(this.handle)).key);
}

func (this TKeyEvent) GetAlt() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).alt);
}

func (this TKeyEvent) GetLalt() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).lalt);
}

func (this TKeyEvent) GetRalt() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).ralt);
}

func (this TKeyEvent) GetCtrl() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).ctrl);
}

func (this TKeyEvent) GetLctrl() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).lctrl);
}

func (this TKeyEvent) GetRctrl() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).rctrl);
}

func (this TKeyEvent) GetShift() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).shift);
}

func (this TKeyEvent) GetLshift() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).lshift);
}

func (this TKeyEvent) GetRshift() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).rshift);
}

func (this TKeyEvent) GetCmd() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).cmd);
}

func (this TKeyEvent) GetMenu() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).menu);
}

func (this TKeyEvent) GetCapslock() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).capslock);
}

func (this TKeyEvent) GetNumlock() bool {
  return (bool)((*C.key_event_t)(unsafe.Pointer(this.handle)).numlock);
}

