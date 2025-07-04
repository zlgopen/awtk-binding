type TTabButtonGroup struct {
  TWidget
}

func TTabButtonGroupCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TTabButtonGroup{}
  retObj.handle = unsafe.Pointer(C.tab_button_group_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TTabButtonGroup) SetCompact(compact bool) TRet {
  return TRet(C.tab_button_group_set_compact((*C.widget_t)(this.handle), (C.bool_t)(compact)));
}

func (this TTabButtonGroup) SetScrollable(scrollable bool) TRet {
  return TRet(C.tab_button_group_set_scrollable((*C.widget_t)(this.handle), (C.bool_t)(scrollable)));
}

func (this TTabButtonGroup) SetDragChild(drag_child bool) TRet {
  return TRet(C.tab_button_group_set_drag_child((*C.widget_t)(this.handle), (C.bool_t)(drag_child)));
}

func (this TTabButtonGroup) RemoveIndex(index uint32) TRet {
  return TRet(C.tab_button_group_remove_index((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func TTabButtonGroupCast(widget TWidget) TTabButtonGroup {
  retObj := TTabButtonGroup{}
  retObj.handle = unsafe.Pointer(C.tab_button_group_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TTabButtonGroup) GetCompact() bool {
  return (bool)((*C.tab_button_group_t)(unsafe.Pointer(this.handle)).compact);
}

func (this TTabButtonGroup) GetScrollable() bool {
  return (bool)((*C.tab_button_group_t)(unsafe.Pointer(this.handle)).scrollable);
}

func (this TTabButtonGroup) GetDragChild() bool {
  return (bool)((*C.tab_button_group_t)(unsafe.Pointer(this.handle)).drag_child);
}

