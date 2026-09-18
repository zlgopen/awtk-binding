type TPaintEvent struct {
  TEvent
}

func TPaintEventCast(event TEvent) TPaintEvent {
  retObj := TPaintEvent{}
  retObj.handle = unsafe.Pointer(C.paint_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TPaintEvent) GetC() TCanvas {
  retObj := TCanvas{}
  retObj.handle = unsafe.Pointer((*C.paint_event_t)(unsafe.Pointer(this.handle)).c)
  return retObj
}

