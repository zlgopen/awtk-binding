type TObjectFifoPopTailEvent struct {
  TEvent
}

func (this TObjectFifoPopTailEvent) GetNr() uint32 {
  return (uint32)((*C.object_fifo_pop_tail_event_t)(unsafe.Pointer(this.handle)).nr);
}

