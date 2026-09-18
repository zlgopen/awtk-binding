type TObjectFifoSetEvent struct {
  TEvent
}

func (this TObjectFifoSetEvent) GetIndex() uint32 {
  return (uint32)((*C.object_fifo_set_event_t)(unsafe.Pointer(this.handle)).index);
}

func (this TObjectFifoSetEvent) GetNr() uint32 {
  return (uint32)((*C.object_fifo_set_event_t)(unsafe.Pointer(this.handle)).nr);
}

func (this TObjectFifoSetEvent) GetData() unsafe.Pointer {
  return (unsafe.Pointer)((*C.object_fifo_set_event_t)(unsafe.Pointer(this.handle)).data);
}

