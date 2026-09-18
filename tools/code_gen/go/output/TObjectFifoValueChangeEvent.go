type TObjectFifoValueChangeEvent struct {
  TEvent
}

func TObjectFifoValueChangeEventObjectFifoSetEventCast(event TEvent) TObjectFifoValueChangeEvent {
  retObj := TObjectFifoValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.object_fifo_set_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func TObjectFifoValueChangeEventObjectFifoPushEventCast(event TEvent) TObjectFifoValueChangeEvent {
  retObj := TObjectFifoValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.object_fifo_push_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func TObjectFifoValueChangeEventObjectFifoPushHeadEventCast(event TEvent) TObjectFifoValueChangeEvent {
  retObj := TObjectFifoValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.object_fifo_push_head_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func TObjectFifoValueChangeEventObjectFifoPopEventCast(event TEvent) TObjectFifoValueChangeEvent {
  retObj := TObjectFifoValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.object_fifo_pop_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func TObjectFifoValueChangeEventObjectFifoPopTailEventCast(event TEvent) TObjectFifoValueChangeEvent {
  retObj := TObjectFifoValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.object_fifo_pop_tail_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func TObjectFifoValueChangeEventCast(event TEvent) TObjectFifoValueChangeEvent {
  retObj := TObjectFifoValueChangeEvent{}
  retObj.handle = unsafe.Pointer(C.object_fifo_value_change_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TObjectFifoValueChangeEvent) GetType() uint32 {
  return (uint32)((*C.object_fifo_value_change_event_t)(unsafe.Pointer(this.handle)).type);
}

