type TModelEvent struct {
  TEvent
}

func TModelEventCast(event TEvent) TModelEvent {
  retObj := TModelEvent{}
  retObj.handle = unsafe.Pointer(C.model_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TModelEvent) GetName() string {
  return C.GoString((*C.model_event_t)(unsafe.Pointer(this.handle)).name);
}

func (this TModelEvent) GetChangeType() string {
  return C.GoString((*C.model_event_t)(unsafe.Pointer(this.handle)).change_type);
}

func (this TModelEvent) GetModel() TObject {
  retObj := TObject{}
  retObj.handle = unsafe.Pointer((*C.model_event_t)(unsafe.Pointer(this.handle)).model)
  return retObj
}

