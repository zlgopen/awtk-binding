type TTextSelector struct {
  TWidget
}

func TTextSelectorCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TTextSelector{}
  retObj.handle = unsafe.Pointer(C.text_selector_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TTextSelectorCast(widget TWidget) TTextSelector {
  retObj := TTextSelector{}
  retObj.handle = unsafe.Pointer(C.text_selector_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TTextSelector) ResetOptions() TRet {
  return TRet(C.text_selector_reset_options((*C.widget_t)(this.handle)));
}

func (this TTextSelector) CountOptions() int32 {
  return (int32)(C.text_selector_count_options((*C.widget_t)(this.handle)));
}

func (this TTextSelector) AppendOption(value int32, text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.text_selector_append_option((*C.widget_t)(this.handle), (C.int32_t)(value), atext));
}

func (this TTextSelector) SetOptions(options string) TRet {
  aoptions := C.CString(options)
  defer C.free(unsafe.Pointer(aoptions))
  return TRet(C.text_selector_set_options((*C.widget_t)(this.handle), aoptions));
}

func (this TTextSelector) SetRangeOptionsEx(start int32, nr uint32, step int32, format string) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.text_selector_set_range_options_ex((*C.widget_t)(this.handle), (C.int32_t)(start), (C.uint32_t)(nr), (C.int32_t)(step), aformat));
}

func (this TTextSelector) SetRangeOptions(start int32, nr uint32, step int32) TRet {
  return TRet(C.text_selector_set_range_options((*C.widget_t)(this.handle), (C.int32_t)(start), (C.uint32_t)(nr), (C.int32_t)(step)));
}

func (this TTextSelector) GetValueInt() int32 {
  return (int32)(C.text_selector_get_value((*C.widget_t)(this.handle)));
}

func (this TTextSelector) SetValue(value int32) TRet {
  return TRet(C.text_selector_set_value((*C.widget_t)(this.handle), (C.int32_t)(value)));
}

func (this TTextSelector) GetTextValue() string {
  return C.GoString(C.text_selector_get_text((*C.widget_t)(this.handle)));
}

func (this TTextSelector) SetText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.text_selector_set_text((*C.widget_t)(this.handle), atext));
}

func (this TTextSelector) SetSelectedIndex(index uint32) TRet {
  return TRet(C.text_selector_set_selected_index((*C.widget_t)(this.handle), (C.uint32_t)(index)));
}

func (this TTextSelector) SetVisibleNr(visible_nr uint32) TRet {
  return TRet(C.text_selector_set_visible_nr((*C.widget_t)(this.handle), (C.uint32_t)(visible_nr)));
}

func (this TTextSelector) SetLocalizeOptions(localize_options bool) TRet {
  return TRet(C.text_selector_set_localize_options((*C.widget_t)(this.handle), (C.bool_t)(localize_options)));
}

func (this TTextSelector) SetLoopOptions(loop_options bool) TRet {
  return TRet(C.text_selector_set_loop_options((*C.widget_t)(this.handle), (C.bool_t)(loop_options)));
}

func (this TTextSelector) SetYspeedScale(yspeed_scale float64) TRet {
  return TRet(C.text_selector_set_yspeed_scale((*C.widget_t)(this.handle), (C.float_t)(yspeed_scale)));
}

func (this TTextSelector) SetAnimatingTime(animating_time uint32) TRet {
  return TRet(C.text_selector_set_animating_time((*C.widget_t)(this.handle), (C.uint32_t)(animating_time)));
}

func (this TTextSelector) SetEnableValueAnimator(enable_value_animator bool) TRet {
  return TRet(C.text_selector_set_enable_value_animator((*C.widget_t)(this.handle), (C.bool_t)(enable_value_animator)));
}

func (this TTextSelector) SetMaskEasing(mask_easing TEasingType) TRet {
  return TRet(C.text_selector_set_mask_easing((*C.widget_t)(this.handle), (C.easing_type_t)(mask_easing)));
}

func (this TTextSelector) SetMaskAreaScale(mask_area_scale float64) TRet {
  return TRet(C.text_selector_set_mask_area_scale((*C.widget_t)(this.handle), (C.float_t)(mask_area_scale)));
}

func (this TTextSelector) GetVisibleNr() uint32 {
  return (uint32)((*C.text_selector_t)(unsafe.Pointer(this.handle)).visible_nr);
}

func (this TTextSelector) GetSelectedIndex() int32 {
  return (int32)((*C.text_selector_t)(unsafe.Pointer(this.handle)).selected_index);
}

func (this TTextSelector) GetOptions() string {
  return C.GoString((*C.text_selector_t)(unsafe.Pointer(this.handle)).options);
}

func (this TTextSelector) GetYspeedScale() float64 {
  return (float64)((*C.text_selector_t)(unsafe.Pointer(this.handle)).yspeed_scale);
}

func (this TTextSelector) GetAnimatingTime() uint32 {
  return (uint32)((*C.text_selector_t)(unsafe.Pointer(this.handle)).animating_time);
}

func (this TTextSelector) GetLocalizeOptions() bool {
  return (bool)((*C.text_selector_t)(unsafe.Pointer(this.handle)).localize_options);
}

func (this TTextSelector) GetLoopOptions() bool {
  return (bool)((*C.text_selector_t)(unsafe.Pointer(this.handle)).loop_options);
}

func (this TTextSelector) GetEnableValueAnimator() bool {
  return (bool)((*C.text_selector_t)(unsafe.Pointer(this.handle)).enable_value_animator);
}

func (this TTextSelector) GetMaskEasing() TEasingType {
  return TEasingType((*C.text_selector_t)(unsafe.Pointer(this.handle)).mask_easing);
}

func (this TTextSelector) GetMaskAreaScale() float64 {
  return (float64)((*C.text_selector_t)(unsafe.Pointer(this.handle)).mask_area_scale);
}

