type TThemeChangeEvent struct {
  TEvent
}

func TThemeChangeEventCast(event TEvent) TThemeChangeEvent {
  retObj := TThemeChangeEvent{}
  retObj.handle = unsafe.Pointer(C.theme_change_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TThemeChangeEvent) GetName() string {
  return C.GoString((*C.theme_change_event_t)(unsafe.Pointer(this.handle)).name);
}

