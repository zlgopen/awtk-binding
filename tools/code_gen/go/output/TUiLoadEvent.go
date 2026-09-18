type TUiLoadEvent struct {
  TEvent
}

func TUiLoadEventCast(event TEvent) TUiLoadEvent {
  retObj := TUiLoadEvent{}
  retObj.handle = unsafe.Pointer(C.ui_load_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TUiLoadEvent) GetRoot() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer((*C.ui_load_event_t)(unsafe.Pointer(this.handle)).root)
  return retObj
}

func (this TUiLoadEvent) GetName() string {
  return C.GoString((*C.ui_load_event_t)(unsafe.Pointer(this.handle)).name);
}

