type TWidget struct {
  handle unsafe.Pointer
}

func (this TWidget) CountChildren() int32 {
  return (int32)(C.widget_count_children((*C.widget_t)(this.handle)));
}

func (this TWidget) GetChild(index int32) TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_get_child((*C.widget_t)(this.handle), (C.int32_t)(index)))
  return retObj
}

func (this TWidget) FindParentByName(name string) TWidget {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_find_parent_by_name((*C.widget_t)(this.handle), aname))
  return retObj
}

func (this TWidget) FindParentByType(typex string) TWidget {
  atypex := C.CString(typex)
  defer C.free(unsafe.Pointer(atypex))
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_find_parent_by_type((*C.widget_t)(this.handle), atypex))
  return retObj
}

func (this TWidget) GetFocusedWidget() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_get_focused_widget((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWidget) GetNativeWindow() TNativeWindow {
  retObj := TNativeWindow{}
  retObj.handle = unsafe.Pointer(C.widget_get_native_window((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWidget) IndexOf() int32 {
  return (int32)(C.widget_index_of((*C.widget_t)(this.handle)));
}

func (this TWidget) CloseWindow() TRet {
  return TRet(C.widget_close_window((*C.widget_t)(this.handle)));
}

func (this TWidget) CloseWindowForce() TRet {
  return TRet(C.widget_close_window_force((*C.widget_t)(this.handle)));
}

func (this TWidget) Back() TRet {
  return TRet(C.widget_back((*C.widget_t)(this.handle)));
}

func (this TWidget) BackToHome() TRet {
  return TRet(C.widget_back_to_home((*C.widget_t)(this.handle)));
}

func (this TWidget) Move(x int, y int) TRet {
  return TRet(C.widget_move((*C.widget_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y)));
}

func (this TWidget) MoveToCenter() TRet {
  return TRet(C.widget_move_to_center((*C.widget_t)(this.handle)));
}

func (this TWidget) Resize(w int, h int) TRet {
  return TRet(C.widget_resize((*C.widget_t)(this.handle), (C.wh_t)(w), (C.wh_t)(h)));
}

func (this TWidget) MoveResize(x int, y int, w int, h int) TRet {
  return TRet(C.widget_move_resize((*C.widget_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)));
}

func (this TWidget) MoveResizeEx(x int, y int, w int, h int, update_layout bool) TRet {
  return TRet(C.widget_move_resize_ex((*C.widget_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h), (C.bool_t)(update_layout)));
}

func (this TWidget) GetValue() float64 {
  return (float64)(C.widget_get_value((*C.widget_t)(this.handle)));
}

func (this TWidget) SetValue(value float64) TRet {
  return TRet(C.widget_set_value((*C.widget_t)(this.handle), (C.float_t)(value)));
}

func (this TWidget) AddValue(delta float64) TRet {
  return TRet(C.widget_add_value((*C.widget_t)(this.handle), (C.float_t)(delta)));
}

func (this TWidget) GetValueInt() int32 {
  return (int32)(C.widget_get_value_int((*C.widget_t)(this.handle)));
}

func (this TWidget) SetValueInt(value int32) TRet {
  return TRet(C.widget_set_value_int((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TWidget) AddValueInt(delta int32) TRet {
  return TRet(C.widget_add_value_int((*C.widget_t)(this.handle), (C.int32_t)(delta)));
}

func (this TWidget) AnimateValueTo(value float64, duration uint32) TRet {
  return TRet(C.widget_animate_value_to((*C.widget_t)(this.handle), (C.float_t)(value), (C.uint32_t)(duration)));
}

func (this TWidget) IsStyleExist(style_name string, state_name string) bool {
  astyle_name := C.CString(style_name)
  defer C.free(unsafe.Pointer(astyle_name))
  astate_name := C.CString(state_name)
  defer C.free(unsafe.Pointer(astate_name))
  return (bool)(C.widget_is_style_exist((*C.widget_t)(this.handle), astyle_name, astate_name));
}

func (this TWidget) IsSupportHighlighter() bool {
  return (bool)(C.widget_is_support_highlighter((*C.widget_t)(this.handle)));
}

func (this TWidget) UseStyle(style string) TRet {
  astyle := C.CString(style)
  defer C.free(unsafe.Pointer(astyle))
  return TRet(C.widget_use_style((*C.widget_t)(this.handle), astyle));
}

func (this TWidget) SetText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.widget_set_text_utf8((*C.widget_t)(this.handle), atext));
}

func (this TWidget) SetTextEx(text string, check_diff bool) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.widget_set_text_utf8_ex((*C.widget_t)(this.handle), atext, (C.bool_t)(check_diff)));
}

func (this TWidget) SetChildText(name string, text string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.widget_set_child_text_utf8((*C.widget_t)(this.handle), aname, atext));
}

func (this TWidget) SetChildTextWithDouble(name string, format string, value float64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.widget_set_child_text_with_double((*C.widget_t)(this.handle), aname, aformat, (C.double)(value)));
}

func (this TWidget) SetChildTextWithInt(name string, format string, value int) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.widget_set_child_text_with_int((*C.widget_t)(this.handle), aname, aformat, (C.int)(value)));
}

func (this TWidget) SetTrText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.widget_set_tr_text((*C.widget_t)(this.handle), atext));
}

func (this TWidget) GetEnable() bool {
  return (bool)(C.widget_get_enable((*C.widget_t)(this.handle)));
}

func (this TWidget) GetFloating() bool {
  return (bool)(C.widget_get_floating((*C.widget_t)(this.handle)));
}

func (this TWidget) GetAutoAdjustSize() bool {
  return (bool)(C.widget_get_auto_adjust_size((*C.widget_t)(this.handle)));
}

func (this TWidget) GetWithFocusState() bool {
  return (bool)(C.widget_get_with_focus_state((*C.widget_t)(this.handle)));
}

func (this TWidget) GetFocusable() bool {
  return (bool)(C.widget_get_focusable((*C.widget_t)(this.handle)));
}

func (this TWidget) GetSensitive() bool {
  return (bool)(C.widget_get_sensitive((*C.widget_t)(this.handle)));
}

func (this TWidget) GetVisible() bool {
  return (bool)(C.widget_get_visible((*C.widget_t)(this.handle)));
}

func (this TWidget) GetFeedback() bool {
  return (bool)(C.widget_get_feedback((*C.widget_t)(this.handle)));
}

func (this TWidget) GetText() string {
  tstr := C.tk_utf8_dup_utf16(C.widget_get_text((*C.widget_t)(this.handle)), -1)
  ret := C.GoString(tstr)
  C.tk_free(unsafe.Pointer(tstr))
  return ret
}

func (this TWidget) SetName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_name((*C.widget_t)(this.handle), aname));
}

func (this TWidget) SetTheme(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_theme((*C.widget_t)(this.handle), aname));
}

func (this TWidget) GetThemeName() string {
  return C.GoString(C.widget_get_theme_name((*C.widget_t)(this.handle)));
}

func (this TWidget) SetPointerCursor(cursor string) TRet {
  acursor := C.CString(cursor)
  defer C.free(unsafe.Pointer(acursor))
  return TRet(C.widget_set_pointer_cursor((*C.widget_t)(this.handle), acursor));
}

func (this TWidget) SetAnimation(animation string) TRet {
  aanimation := C.CString(animation)
  defer C.free(unsafe.Pointer(aanimation))
  return TRet(C.widget_set_animation((*C.widget_t)(this.handle), aanimation));
}

func (this TWidget) CreateAnimator(animation string) TRet {
  aanimation := C.CString(animation)
  defer C.free(unsafe.Pointer(aanimation))
  return TRet(C.widget_create_animator((*C.widget_t)(this.handle), aanimation));
}

func (this TWidget) StartAnimator(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_start_animator((*C.widget_t)(this.handle), aname));
}

func (this TWidget) SetAnimatorTimeScale(name string, time_scale float64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_animator_time_scale((*C.widget_t)(this.handle), aname, (C.float_t)(time_scale)));
}

func (this TWidget) PauseAnimator(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_pause_animator((*C.widget_t)(this.handle), aname));
}

func (this TWidget) StopAnimator(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_stop_animator((*C.widget_t)(this.handle), aname));
}

func (this TWidget) DestroyAnimator(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_destroy_animator((*C.widget_t)(this.handle), aname));
}

func (this TWidget) SetEnable(enable bool) TRet {
  return TRet(C.widget_set_enable((*C.widget_t)(this.handle), (C.bool_t)(enable)));
}

func (this TWidget) SetFeedback(feedback bool) TRet {
  return TRet(C.widget_set_feedback((*C.widget_t)(this.handle), (C.bool_t)(feedback)));
}

func (this TWidget) SetAutoAdjustSize(auto_adjust_size bool) TRet {
  return TRet(C.widget_set_auto_adjust_size((*C.widget_t)(this.handle), (C.bool_t)(auto_adjust_size)));
}

func (this TWidget) SetFloating(floating bool) TRet {
  return TRet(C.widget_set_floating((*C.widget_t)(this.handle), (C.bool_t)(floating)));
}

func (this TWidget) SetFocused(focused bool) TRet {
  return TRet(C.widget_set_focused((*C.widget_t)(this.handle), (C.bool_t)(focused)));
}

func (this TWidget) SetFocusable(focusable bool) TRet {
  return TRet(C.widget_set_focusable((*C.widget_t)(this.handle), (C.bool_t)(focusable)));
}

func (this TWidget) SetState(state string) TRet {
  astate := C.CString(state)
  defer C.free(unsafe.Pointer(astate))
  return TRet(C.widget_set_state((*C.widget_t)(this.handle), astate));
}

func (this TWidget) SetOpacity(opacity uint8) TRet {
  return TRet(C.widget_set_opacity((*C.widget_t)(this.handle), (C.uint8_t)(opacity)));
}

func (this TWidget) SetDirtyRectTolerance(dirty_rect_tolerance uint16) TRet {
  return TRet(C.widget_set_dirty_rect_tolerance((*C.widget_t)(this.handle), (C.uint16_t)(dirty_rect_tolerance)));
}

func (this TWidget) DestroyChildren() TRet {
  return TRet(C.widget_destroy_children((*C.widget_t)(this.handle)));
}

func (this TWidget) AddChild(child TWidget) TRet {
  return TRet(C.widget_add_child((*C.widget_t)(this.handle), (*C.widget_t)(child.handle)));
}

func (this TWidget) RemoveChild(child TWidget) TRet {
  return TRet(C.widget_remove_child((*C.widget_t)(this.handle), (*C.widget_t)(child.handle)));
}

func (this TWidget) InsertChild(index uint32, child TWidget) TRet {
  return TRet(C.widget_insert_child((*C.widget_t)(this.handle), (C.uint32_t)(index), (*C.widget_t)(child.handle)));
}

func (this TWidget) Restack(index uint32) TRet {
  return TRet(C.widget_restack((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TWidget) Child(name string) TWidget {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_child((*C.widget_t)(this.handle), aname))
  return retObj
}

func (this TWidget) Lookup(name string, recursive bool) TWidget {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_lookup((*C.widget_t)(this.handle), aname, (C.bool_t)(recursive)))
  return retObj
}

func (this TWidget) LookupByType(typex string, recursive bool) TWidget {
  atypex := C.CString(typex)
  defer C.free(unsafe.Pointer(atypex))
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_lookup_by_type((*C.widget_t)(this.handle), atypex, (C.bool_t)(recursive)))
  return retObj
}

func (this TWidget) SetVisible(visible bool) TRet {
  return TRet(C.widget_set_visible((*C.widget_t)(this.handle), (C.bool_t)(visible)));
}

func (this TWidget) SetVisibleOnly(visible bool) TRet {
  return TRet(C.widget_set_visible_only((*C.widget_t)(this.handle), (C.bool_t)(visible)));
}

func (this TWidget) SetSensitive(sensitive bool) TRet {
  return TRet(C.widget_set_sensitive((*C.widget_t)(this.handle), (C.bool_t)(sensitive)));
}

func (this TWidget) Off(id uint32) TRet {
  return TRet(C.widget_off((*C.widget_t)(this.handle), (C.uint32_t)(id)));
}

func (this TWidget) InvalidateForce(r TRect) TRet {
  return TRet(C.widget_invalidate_force((*C.widget_t)(this.handle), (*C.rect_t)(r.handle)));
}

func (this TWidget) SetProps(params string) TRet {
  aparams := C.CString(params)
  defer C.free(unsafe.Pointer(aparams))
  return TRet(C.widget_set_props((*C.widget_t)(this.handle), aparams));
}

func (this TWidget) SetPropStr(name string, v string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  av := C.CString(v)
  defer C.free(unsafe.Pointer(av))
  return TRet(C.widget_set_prop_str((*C.widget_t)(this.handle), aname, av));
}

func (this TWidget) GetPropStr(name string, defval string) string {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  adefval := C.CString(defval)
  defer C.free(unsafe.Pointer(adefval))
  return C.GoString(C.widget_get_prop_str((*C.widget_t)(this.handle), aname, adefval));
}

func (this TWidget) SetPropPointer(name string, v unsafe.Pointer) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_prop_pointer((*C.widget_t)(this.handle), aname, (unsafe.Pointer)(v)));
}

func (this TWidget) GetPropPointer(name string) unsafe.Pointer {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (unsafe.Pointer)(C.widget_get_prop_pointer((*C.widget_t)(this.handle), aname));
}

func (this TWidget) SetPropFloat(name string, v float64) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_prop_float((*C.widget_t)(this.handle), aname, (C.float_t)(v)));
}

func (this TWidget) GetPropFloat(name string, defval float64) float64 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (float64)(C.widget_get_prop_float((*C.widget_t)(this.handle), aname, (C.float_t)(defval)));
}

func (this TWidget) SetPropInt(name string, v int32) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_prop_int((*C.widget_t)(this.handle), aname, (C.int32_t)(v)));
}

func (this TWidget) GetPropInt(name string, defval int32) int32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int32)(C.widget_get_prop_int((*C.widget_t)(this.handle), aname, (C.int32_t)(defval)));
}

func (this TWidget) SetPropBool(name string, v bool) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.widget_set_prop_bool((*C.widget_t)(this.handle), aname, (C.bool_t)(v)));
}

func (this TWidget) GetPropBool(name string, defval bool) bool {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (bool)(C.widget_get_prop_bool((*C.widget_t)(this.handle), aname, (C.bool_t)(defval)));
}

func (this TWidget) IsWindowOpened() bool {
  return (bool)(C.widget_is_window_opened((*C.widget_t)(this.handle)));
}

func (this TWidget) IsWindowCreated() bool {
  return (bool)(C.widget_is_window_created((*C.widget_t)(this.handle)));
}

func (this TWidget) IsParentOf(child TWidget) bool {
  return (bool)(C.widget_is_parent_of((*C.widget_t)(this.handle), (*C.widget_t)(child.handle)));
}

func (this TWidget) IsDirectParentOf(child TWidget) bool {
  return (bool)(C.widget_is_direct_parent_of((*C.widget_t)(this.handle), (*C.widget_t)(child.handle)));
}

func (this TWidget) IsWindow() bool {
  return (bool)(C.widget_is_window((*C.widget_t)(this.handle)));
}

func (this TWidget) IsSystemBar() bool {
  return (bool)(C.widget_is_system_bar((*C.widget_t)(this.handle)));
}

func (this TWidget) IsNormalWindow() bool {
  return (bool)(C.widget_is_normal_window((*C.widget_t)(this.handle)));
}

func (this TWidget) IsFullscreenWindow() bool {
  return (bool)(C.widget_is_fullscreen_window((*C.widget_t)(this.handle)));
}

func (this TWidget) IsDialog() bool {
  return (bool)(C.widget_is_dialog((*C.widget_t)(this.handle)));
}

func (this TWidget) IsPopup() bool {
  return (bool)(C.widget_is_popup((*C.widget_t)(this.handle)));
}

func (this TWidget) IsOverlay() bool {
  return (bool)(C.widget_is_overlay((*C.widget_t)(this.handle)));
}

func (this TWidget) IsAlwaysOnTop() bool {
  return (bool)(C.widget_is_always_on_top((*C.widget_t)(this.handle)));
}

func (this TWidget) IsOpenedDialog() bool {
  return (bool)(C.widget_is_opened_dialog((*C.widget_t)(this.handle)));
}

func (this TWidget) IsOpenedPopup() bool {
  return (bool)(C.widget_is_opened_popup((*C.widget_t)(this.handle)));
}

func (this TWidget) IsKeyboard() bool {
  return (bool)(C.widget_is_keyboard((*C.widget_t)(this.handle)));
}

func (this TWidget) IsDesigningWindow() bool {
  return (bool)(C.widget_is_designing_window((*C.widget_t)(this.handle)));
}

func (this TWidget) IsWindowManager() bool {
  return (bool)(C.widget_is_window_manager((*C.widget_t)(this.handle)));
}

func (this TWidget) GetWindow() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_get_window((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWidget) GetWindowManager() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_get_window_manager((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWidget) GetType() string {
  return C.GoString(C.widget_get_type((*C.widget_t)(this.handle)));
}

func (this TWidget) Clone(parent TWidget) TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_clone((*C.widget_t)(this.handle), (*C.widget_t)(parent.handle)))
  return retObj
}

func (this TWidget) Equal(other TWidget) bool {
  return (bool)(C.widget_equal((*C.widget_t)(this.handle), (*C.widget_t)(other.handle)));
}

func TWidgetCast(widget TWidget) TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.widget_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TWidget) Destroy() TRet {
  return TRet(C.widget_destroy((*C.widget_t)(this.handle)));
}

func (this TWidget) DestroyAsync() TRet {
  return TRet(C.widget_destroy_async((*C.widget_t)(this.handle)));
}

func (this TWidget) Unref() TRet {
  return TRet(C.widget_unref((*C.widget_t)(this.handle)));
}

func (this TWidget) StrokeBorderRect(c TCanvas, r TRect) TRet {
  return TRet(C.widget_stroke_border_rect((*C.widget_t)(this.handle), (*C.canvas_t)(c.handle), (*C.rect_t)(r.handle)));
}

func (this TWidget) FillBgRect(c TCanvas, r TRect, draw_type TImageDrawType) TRet {
  return TRet(C.widget_fill_bg_rect((*C.widget_t)(this.handle), (*C.canvas_t)(c.handle), (*C.rect_t)(r.handle), (C.image_draw_type_t)(draw_type)));
}

func (this TWidget) FillFgRect(c TCanvas, r TRect, draw_type TImageDrawType) TRet {
  return TRet(C.widget_fill_fg_rect((*C.widget_t)(this.handle), (*C.canvas_t)(c.handle), (*C.rect_t)(r.handle), (C.image_draw_type_t)(draw_type)));
}

func (this TWidget) DispatchToTarget(e TEvent) TRet {
  return TRet(C.widget_dispatch_to_target((*C.widget_t)(this.handle), (*C.event_t)(e.handle)));
}

func (this TWidget) DispatchToKeyTarget(e TEvent) TRet {
  return TRet(C.widget_dispatch_to_key_target((*C.widget_t)(this.handle), (*C.event_t)(e.handle)));
}

func (this TWidget) GetStyleType() string {
  return C.GoString(C.widget_get_style_type((*C.widget_t)(this.handle)));
}

func (this TWidget) UpdateStyle() TRet {
  return TRet(C.widget_update_style((*C.widget_t)(this.handle)));
}

func (this TWidget) UpdateStyleRecursive() TRet {
  return TRet(C.widget_update_style_recursive((*C.widget_t)(this.handle)));
}

func (this TWidget) SetAsKeyTarget() TRet {
  return TRet(C.widget_set_as_key_target((*C.widget_t)(this.handle)));
}

func (this TWidget) FocusNext() TRet {
  return TRet(C.widget_focus_next((*C.widget_t)(this.handle)));
}

func (this TWidget) FocusPrev() TRet {
  return TRet(C.widget_focus_prev((*C.widget_t)(this.handle)));
}

func (this TWidget) GetStateForStyle(active bool, checked bool) string {
  return C.GoString(C.widget_get_state_for_style((*C.widget_t)(this.handle), (C.bool_t)(active), (C.bool_t)(checked)));
}

func (this TWidget) Layout() TRet {
  return TRet(C.widget_layout((*C.widget_t)(this.handle)));
}

func (this TWidget) SetSelfLayout(params string) TRet {
  aparams := C.CString(params)
  defer C.free(unsafe.Pointer(aparams))
  return TRet(C.widget_set_self_layout((*C.widget_t)(this.handle), aparams));
}

func (this TWidget) SetChildrenLayout(params string) TRet {
  aparams := C.CString(params)
  defer C.free(unsafe.Pointer(aparams))
  return TRet(C.widget_set_children_layout((*C.widget_t)(this.handle), aparams));
}

func (this TWidget) SetSelfLayoutParams(x string, y string, w string, h string) TRet {
  ax := C.CString(x)
  defer C.free(unsafe.Pointer(ax))
  ay := C.CString(y)
  defer C.free(unsafe.Pointer(ay))
  aw := C.CString(w)
  defer C.free(unsafe.Pointer(aw))
  ah := C.CString(h)
  defer C.free(unsafe.Pointer(ah))
  return TRet(C.widget_set_self_layout_params((*C.widget_t)(this.handle), ax, ay, aw, ah));
}

func (this TWidget) SetStyleInt(state_and_name string, value int32) TRet {
  astate_and_name := C.CString(state_and_name)
  defer C.free(unsafe.Pointer(astate_and_name))
  return TRet(C.widget_set_style_int((*C.widget_t)(this.handle), astate_and_name, (C.int32_t)(value)));
}

func (this TWidget) SetStyleStr(state_and_name string, value string) TRet {
  astate_and_name := C.CString(state_and_name)
  defer C.free(unsafe.Pointer(astate_and_name))
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.widget_set_style_str((*C.widget_t)(this.handle), astate_and_name, avalue));
}

func (this TWidget) SetStyleColor(state_and_name string, value uint32) TRet {
  astate_and_name := C.CString(state_and_name)
  defer C.free(unsafe.Pointer(astate_and_name))
  return TRet(C.widget_set_style_color((*C.widget_t)(this.handle), astate_and_name, (C.uint32_t)(value)));
}

func (this TWidget) AddChildDefault(child TWidget) TRet {
  return TRet(C.widget_add_child_default((*C.widget_t)(this.handle), (*C.widget_t)(child.handle)));
}

func (this TWidget) GetX() int {
  return (int)((*C.widget_t)(unsafe.Pointer(this.handle)).x);
}

func (this TWidget) GetY() int {
  return (int)((*C.widget_t)(unsafe.Pointer(this.handle)).y);
}

func (this TWidget) GetW() int {
  return (int)((*C.widget_t)(unsafe.Pointer(this.handle)).w);
}

func (this TWidget) GetH() int {
  return (int)((*C.widget_t)(unsafe.Pointer(this.handle)).h);
}

func (this TWidget) GetName() string {
  return C.GoString((*C.widget_t)(unsafe.Pointer(this.handle)).name);
}

func (this TWidget) GetPointerCursor() string {
  return C.GoString((*C.widget_t)(unsafe.Pointer(this.handle)).pointer_cursor);
}

func (this TWidget) GetTrText() string {
  return C.GoString((*C.widget_t)(unsafe.Pointer(this.handle)).tr_text);
}

func (this TWidget) GetStyle() string {
  return C.GoString((*C.widget_t)(unsafe.Pointer(this.handle)).style);
}

func (this TWidget) GetAnimation() string {
  return C.GoString((*C.widget_t)(unsafe.Pointer(this.handle)).animation);
}

func (this TWidget) GetOpacity() uint8 {
  return (uint8)((*C.widget_t)(unsafe.Pointer(this.handle)).opacity);
}

func (this TWidget) GetDirtyRectTolerance() uint16 {
  return (uint16)((*C.widget_t)(unsafe.Pointer(this.handle)).dirty_rect_tolerance);
}

func (this TWidget) GetParent() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer((*C.widget_t)(unsafe.Pointer(this.handle)).parent)
  return retObj
}

