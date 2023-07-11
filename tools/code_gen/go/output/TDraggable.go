type TDraggable struct {
  TWidget
}

func TDraggableCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDraggable{}
  retObj.handle = unsafe.Pointer(C.draggable_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDraggableCast(widget TWidget) TDraggable {
  retObj := TDraggable{}
  retObj.handle = unsafe.Pointer(C.draggable_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TDraggable) SetTop(top int32) TRet {
  return TRet(C.draggable_set_top((*C.widget_t)(this.handle), (C.int32_t)(top)));
}

func (this TDraggable) SetBottom(bottom int32) TRet {
  return TRet(C.draggable_set_bottom((*C.widget_t)(this.handle), (C.int32_t)(bottom)));
}

func (this TDraggable) SetLeft(left int32) TRet {
  return TRet(C.draggable_set_left((*C.widget_t)(this.handle), (C.int32_t)(left)));
}

func (this TDraggable) SetRight(right int32) TRet {
  return TRet(C.draggable_set_right((*C.widget_t)(this.handle), (C.int32_t)(right)));
}

func (this TDraggable) SetVerticalOnly(vertical_only bool) TRet {
  return TRet(C.draggable_set_vertical_only((*C.widget_t)(this.handle), (C.bool_t)(vertical_only)));
}

func (this TDraggable) SetHorizontalOnly(horizontal_only bool) TRet {
  return TRet(C.draggable_set_horizontal_only((*C.widget_t)(this.handle), (C.bool_t)(horizontal_only)));
}

func (this TDraggable) SetAllowOutOfScreen(allow_out_of_screen bool) TRet {
  return TRet(C.draggable_set_allow_out_of_screen((*C.widget_t)(this.handle), (C.bool_t)(allow_out_of_screen)));
}

func (this TDraggable) SetDragWindow(drag_window bool) TRet {
  return TRet(C.draggable_set_drag_window((*C.widget_t)(this.handle), (C.bool_t)(drag_window)));
}

func (this TDraggable) SetDragNativeWindow(drag_native_window bool) TRet {
  return TRet(C.draggable_set_drag_native_window((*C.widget_t)(this.handle), (C.bool_t)(drag_native_window)));
}

func (this TDraggable) SetDragParent(drag_parent uint32) TRet {
  return TRet(C.draggable_set_drag_parent((*C.widget_t)(this.handle), (C.uint32_t)(drag_parent)));
}

func (this TDraggable) GetTop() int32 {
  return (int32)((*C.draggable_t)(unsafe.Pointer(this.handle)).top);
}

func (this TDraggable) GetBottom() int32 {
  return (int32)((*C.draggable_t)(unsafe.Pointer(this.handle)).bottom);
}

func (this TDraggable) GetLeft() int32 {
  return (int32)((*C.draggable_t)(unsafe.Pointer(this.handle)).left);
}

func (this TDraggable) GetRight() int32 {
  return (int32)((*C.draggable_t)(unsafe.Pointer(this.handle)).right);
}

func (this TDraggable) GetAllowOutOfScreen() bool {
  return (bool)((*C.draggable_t)(unsafe.Pointer(this.handle)).allow_out_of_screen);
}

func (this TDraggable) GetVerticalOnly() bool {
  return (bool)((*C.draggable_t)(unsafe.Pointer(this.handle)).vertical_only);
}

func (this TDraggable) GetHorizontalOnly() bool {
  return (bool)((*C.draggable_t)(unsafe.Pointer(this.handle)).horizontal_only);
}

func (this TDraggable) GetDragWindow() bool {
  return (bool)((*C.draggable_t)(unsafe.Pointer(this.handle)).drag_window);
}

func (this TDraggable) GetDragNativeWindow() bool {
  return (bool)((*C.draggable_t)(unsafe.Pointer(this.handle)).drag_native_window);
}

func (this TDraggable) GetDragParent() uint32 {
  return (uint32)((*C.draggable_t)(unsafe.Pointer(this.handle)).drag_parent);
}

