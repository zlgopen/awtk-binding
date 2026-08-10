type TObjectFifoPushHeadEvent struct {
  TEvent
}

func (this TObjectFifoPushHeadEvent) GetNr() uint32 {
  return (uint32)((*C.object_fifo_push_head_event_t)(unsafe.Pointer(this.handle)).nr);
}

func (this TObjectFifoPushHeadEvent) GetData() unsafe.Pointer {
  return (unsafe.Pointer)((*C.object_fifo_push_head_event_t)(unsafe.Pointer(this.handle)).data);
}

