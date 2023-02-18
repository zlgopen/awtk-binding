type TListItemSeperator struct {
  TCheckButton
}

func TListItemSeperatorCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TListItemSeperator{}
  retObj.handle = unsafe.Pointer(C.list_item_seperator_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TListItemSeperatorCast(widget TWidget) TListItemSeperator {
  retObj := TListItemSeperator{}
  retObj.handle = unsafe.Pointer(C.list_item_seperator_cast((*C.widget_t)(widget.handle)))
  return retObj
}

