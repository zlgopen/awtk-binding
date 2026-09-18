type TWindowBase struct {
  TWidget
}

func TWindowBaseCast(widget TWidget) TWindowBase {
  retObj := TWindowBase{}
  retObj.handle = unsafe.Pointer(C.window_base_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TWindowBase) GetTheme() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).theme);
}

func (this TWindowBase) GetDesignW() uint16 {
  return (uint16)((*C.window_base_t)(unsafe.Pointer(this.handle)).design_w);
}

func (this TWindowBase) GetDesignH() uint16 {
  return (uint16)((*C.window_base_t)(unsafe.Pointer(this.handle)).design_h);
}

func (this TWindowBase) GetAutoScaleChildrenX() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).auto_scale_children_x);
}

func (this TWindowBase) GetAutoScaleChildrenY() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).auto_scale_children_y);
}

func (this TWindowBase) GetAutoScaleChildrenW() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).auto_scale_children_w);
}

func (this TWindowBase) GetAutoScaleChildrenH() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).auto_scale_children_h);
}

func (this TWindowBase) GetDisableAnim() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).disable_anim);
}

func (this TWindowBase) GetClosable() TWindowClosable {
  return TWindowClosable((*C.window_base_t)(unsafe.Pointer(this.handle)).closable);
}

func (this TWindowBase) GetOpenAnimHint() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).open_anim_hint);
}

func (this TWindowBase) GetCloseAnimHint() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).close_anim_hint);
}

func (this TWindowBase) GetMoveFocusPrevKey() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).move_focus_prev_key);
}

func (this TWindowBase) GetMoveFocusNextKey() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).move_focus_next_key);
}

func (this TWindowBase) GetMoveFocusUpKey() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).move_focus_up_key);
}

func (this TWindowBase) GetMoveFocusDownKey() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).move_focus_down_key);
}

func (this TWindowBase) GetMoveFocusLeftKey() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).move_focus_left_key);
}

func (this TWindowBase) GetMoveFocusRightKey() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).move_focus_right_key);
}

func (this TWindowBase) GetAcceptButton() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).accept_button);
}

func (this TWindowBase) GetCancelButton() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).cancel_button);
}

func (this TWindowBase) GetAppletName() string {
  return C.GoString((*C.window_base_t)(unsafe.Pointer(this.handle)).applet_name);
}

func (this TWindowBase) GetSingleInstance() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).single_instance);
}

func (this TWindowBase) GetStronglyFocus() bool {
  return (bool)((*C.window_base_t)(unsafe.Pointer(this.handle)).strongly_focus);
}

