type TListViewH struct {
  TWidget
}

func TListViewHCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TListViewH{}
  retObj.handle = unsafe.Pointer(C.list_view_h_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TListViewH) SetItemWidth(item_width int32) TRet {
  return TRet(C.list_view_h_set_item_width((*C.widget_t)(this.handle), (C.int32_t)(item_width)));
}

func (this TListViewH) SetSpacing(spacing int32) TRet {
  return TRet(C.list_view_h_set_spacing((*C.widget_t)(this.handle), (C.int32_t)(spacing)));
}

func TListViewHCast(widget TWidget) TListViewH {
  retObj := TListViewH{}
  retObj.handle = unsafe.Pointer(C.list_view_h_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TListViewH) GetItemWidth() int32 {
  return (int32)((*C.list_view_h_t)(unsafe.Pointer(this.handle)).item_width);
}

func (this TListViewH) GetSpacing() int32 {
  return (int32)((*C.list_view_h_t)(unsafe.Pointer(this.handle)).spacing);
}

