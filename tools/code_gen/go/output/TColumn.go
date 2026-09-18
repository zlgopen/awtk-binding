type TColumn struct {
  TWidget
}

func TColumnCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TColumn{}
  retObj.handle = unsafe.Pointer(C.column_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TColumnCast(widget TWidget) TColumn {
  retObj := TColumn{}
  retObj.handle = unsafe.Pointer(C.column_cast((*C.widget_t)(widget.handle)))
  return retObj
}

