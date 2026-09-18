type TButtonGroup struct {
  TWidget
}

func TButtonGroupCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TButtonGroup{}
  retObj.handle = unsafe.Pointer(C.button_group_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TButtonGroupCast(widget TWidget) TButtonGroup {
  retObj := TButtonGroup{}
  retObj.handle = unsafe.Pointer(C.button_group_cast((*C.widget_t)(widget.handle)))
  return retObj
}

