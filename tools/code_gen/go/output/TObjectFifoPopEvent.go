type TObjectFifoPopEvent struct {
  TEvent
}

func (this TObjectFifoPopEvent) GetNr() uint32 {
  return (uint32)((*C.object_fifo_pop_event_t)(unsafe.Pointer(this.handle)).nr);
}

