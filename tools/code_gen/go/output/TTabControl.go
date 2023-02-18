type TTabControl struct {
  TWidget
}

func TTabControlCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TTabControl{}
  retObj.handle = unsafe.Pointer(C.tab_control_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TTabControlCast(widget TWidget) TTabControl {
  retObj := TTabControl{}
  retObj.handle = unsafe.Pointer(C.tab_control_cast((*C.widget_t)(widget.handle)))
  return retObj
}

