type TTimerWidget struct {
  TWidget
}

func TTimerWidgetCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TTimerWidget{}
  retObj.handle = unsafe.Pointer(C.timer_widget_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TTimerWidgetCast(widget TWidget) TTimerWidget {
  retObj := TTimerWidget{}
  retObj.handle = unsafe.Pointer(C.timer_widget_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TTimerWidget) SetDuration(duration uint32) TRet {
  return TRet(C.timer_widget_set_duration((*C.widget_t)(this.handle), (C.uint32_t)(duration)));
}

func (this TTimerWidget) GetDuration() uint32 {
  return (uint32)((*C.timer_widget_t)(unsafe.Pointer(this.handle)).duration);
}

