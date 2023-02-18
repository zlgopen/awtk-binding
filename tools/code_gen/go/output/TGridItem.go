type TGridItem struct {
  TWidget
}

func TGridItemCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TGridItem{}
  retObj.handle = unsafe.Pointer(C.grid_item_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TGridItemCast(widget TWidget) TGridItem {
  retObj := TGridItem{}
  retObj.handle = unsafe.Pointer(C.grid_item_cast((*C.widget_t)(widget.handle)))
  return retObj
}

