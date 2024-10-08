type TGroupBox struct {
  TWidget
}

func TGroupBoxCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TGroupBox{}
  retObj.handle = unsafe.Pointer(C.group_box_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TGroupBox) SetValue(value uint32) TRet {
  return TRet(C.group_box_set_value((*C.widget_t)(this.handle), (C.uint32_t)(value)));
}

func TGroupBoxCast(widget TWidget) TGroupBox {
  retObj := TGroupBox{}
  retObj.handle = unsafe.Pointer(C.group_box_cast((*C.widget_t)(widget.handle)))
  return retObj
}

