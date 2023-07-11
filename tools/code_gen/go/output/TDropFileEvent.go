type TDropFileEvent struct {
  TEvent
}

func TDropFileEventCast(event TEvent) TDropFileEvent {
  retObj := TDropFileEvent{}
  retObj.handle = unsafe.Pointer(C.drop_file_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TDropFileEvent) GetFilename() string {
  return C.GoString((*C.drop_file_event_t)(unsafe.Pointer(this.handle)).filename);
}

