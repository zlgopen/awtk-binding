type TObjectFifoPushEvent struct {
  TEvent
}

func (this TObjectFifoPushEvent) GetNr() uint32 {
  return (uint32)((*C.object_fifo_push_event_t)(unsafe.Pointer(this.handle)).nr);
}

func (this TObjectFifoPushEvent) GetData() unsafe.Pointer {
  return (unsafe.Pointer)((*C.object_fifo_push_event_t)(unsafe.Pointer(this.handle)).data);
}

