type TSwitch struct {
  TWidget
}

func TSwitchCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSwitch{}
  retObj.handle = unsafe.Pointer(C.switch_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TSwitch) SetValue(value bool) TRet {
  return TRet(C.switch_set_value((*C.widget_t)(this.handle), (C.bool_t)(value)));
}

func TSwitchCast(widget TWidget) TSwitch {
  retObj := TSwitch{}
  retObj.handle = unsafe.Pointer(C.switch_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSwitch) GetMaxXoffsetRatio() float64 {
  return (float64)((*C.switch_t)(unsafe.Pointer(this.handle)).max_xoffset_ratio);
}

