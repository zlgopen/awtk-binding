type TListItem struct {
  TWidget
}

func TListItemCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TListItem{}
  retObj.handle = unsafe.Pointer(C.list_item_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TListItemCast(widget TWidget) TListItem {
  retObj := TListItem{}
  retObj.handle = unsafe.Pointer(C.list_item_cast((*C.widget_t)(widget.handle)))
  return retObj
}

