type TSlideMenu struct {
  TWidget
}

func TSlideMenuCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSlideMenu{}
  retObj.handle = unsafe.Pointer(C.slide_menu_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSlideMenuCast(widget TWidget) TSlideMenu {
  retObj := TSlideMenu{}
  retObj.handle = unsafe.Pointer(C.slide_menu_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSlideMenu) SetValue(value uint32) TRet {
  return TRet(C.slide_menu_set_value((*C.widget_t)(this.handle), (C.uint32_t)(value)));
}

func (this TSlideMenu) SetAlignV(align_v TAlignV) TRet {
  return TRet(C.slide_menu_set_align_v((*C.widget_t)(this.handle), (C.align_v_t)(align_v)));
}

func (this TSlideMenu) SetMinScale(min_scale float64) TRet {
  return TRet(C.slide_menu_set_min_scale((*C.widget_t)(this.handle), (C.float_t)(min_scale)));
}

func (this TSlideMenu) SetSpacer(spacer int32) TRet {
  return TRet(C.slide_menu_set_spacer((*C.widget_t)(this.handle), (C.int32_t)(spacer)));
}

func (this TSlideMenu) SetMenuW(menu_w string) TRet {
  amenu_w := C.CString(menu_w)
  defer C.free(unsafe.Pointer(amenu_w))
  return TRet(C.slide_menu_set_menu_w((*C.widget_t)(this.handle), amenu_w));
}

func (this TSlideMenu) SetClip(clip bool) TRet {
  return TRet(C.slide_menu_set_clip((*C.widget_t)(this.handle), (C.bool_t)(clip)));
}

func (this TSlideMenu) ScrollToPrev() TRet {
  return TRet(C.slide_menu_scroll_to_prev((*C.widget_t)(this.handle)));
}

func (this TSlideMenu) ScrollToNext() TRet {
  return TRet(C.slide_menu_scroll_to_next((*C.widget_t)(this.handle)));
}

func (this TSlideMenu) GetAlignV() TAlignV {
  return TAlignV((*C.slide_menu_t)(unsafe.Pointer(this.handle)).align_v);
}

func (this TSlideMenu) GetMinScale() float64 {
  return (float64)((*C.slide_menu_t)(unsafe.Pointer(this.handle)).min_scale);
}

func (this TSlideMenu) GetSpacer() int32 {
  return (int32)((*C.slide_menu_t)(unsafe.Pointer(this.handle)).spacer);
}

func (this TSlideMenu) GetMenuW() string {
  return C.GoString((*C.slide_menu_t)(unsafe.Pointer(this.handle)).menu_w);
}

func (this TSlideMenu) GetClip() bool {
  return (bool)((*C.slide_menu_t)(unsafe.Pointer(this.handle)).clip);
}

