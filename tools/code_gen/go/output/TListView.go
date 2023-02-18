type TListView struct {
  TWidget
}

func TListViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TListView{}
  retObj.handle = unsafe.Pointer(C.list_view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TListView) SetItemHeight(item_height int32) TRet {
  return TRet(C.list_view_set_item_height((*C.widget_t)(this.handle), (C.int32_t)(item_height)));
}

func (this TListView) SetDefaultItemHeight(default_item_height int32) TRet {
  return TRet(C.list_view_set_default_item_height((*C.widget_t)(this.handle), (C.int32_t)(default_item_height)));
}

func (this TListView) SetAutoHideScrollBar(auto_hide_scroll_bar bool) TRet {
  return TRet(C.list_view_set_auto_hide_scroll_bar((*C.widget_t)(this.handle), (C.bool_t)(auto_hide_scroll_bar)));
}

func (this TListView) SetFloatingScrollBar(floating_scroll_bar bool) TRet {
  return TRet(C.list_view_set_floating_scroll_bar((*C.widget_t)(this.handle), (C.bool_t)(floating_scroll_bar)));
}

func TListViewCast(widget TWidget) TListView {
  retObj := TListView{}
  retObj.handle = unsafe.Pointer(C.list_view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TListView) Reinit() TRet {
  return TRet(C.list_view_reinit((*C.widget_t)(this.handle)));
}

func (this TListView) GetItemHeight() int32 {
  return (int32)((*C.list_view_t)(unsafe.Pointer(this.handle)).item_height);
}

func (this TListView) GetDefaultItemHeight() int32 {
  return (int32)((*C.list_view_t)(unsafe.Pointer(this.handle)).default_item_height);
}

func (this TListView) GetAutoHideScrollBar() bool {
  return (bool)((*C.list_view_t)(unsafe.Pointer(this.handle)).auto_hide_scroll_bar);
}

func (this TListView) GetFloatingScrollBar() bool {
  return (bool)((*C.list_view_t)(unsafe.Pointer(this.handle)).floating_scroll_bar);
}

