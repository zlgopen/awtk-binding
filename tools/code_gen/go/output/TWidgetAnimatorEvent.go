type TWidgetAnimatorEvent struct {
  TEvent
}

func TWidgetAnimatorEventCast(event TEvent) TWidgetAnimatorEvent {
  retObj := TWidgetAnimatorEvent{}
  retObj.handle = unsafe.Pointer(C.widget_animator_event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TWidgetAnimatorEvent) GetWidget() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer((*C.widget_animator_event_t)(unsafe.Pointer(this.handle)).widget)
  return retObj
}

func (this TWidgetAnimatorEvent) GetAnimator() unsafe.Pointer {
  return (unsafe.Pointer)((*C.widget_animator_event_t)(unsafe.Pointer(this.handle)).animator);
}

