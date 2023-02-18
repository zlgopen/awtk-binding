type TRow struct {
  TWidget
}

func TRowCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TRow{}
  retObj.handle = unsafe.Pointer(C.row_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TRowCast(widget TWidget) TRow {
  retObj := TRow{}
  retObj.handle = unsafe.Pointer(C.row_cast((*C.widget_t)(widget.handle)))
  return retObj
}

