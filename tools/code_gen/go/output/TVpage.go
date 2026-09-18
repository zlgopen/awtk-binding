type TVpage struct {
  TWidget
}

func TVpageCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TVpage{}
  retObj.handle = unsafe.Pointer(C.vpage_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TVpageCast(widget TWidget) TVpage {
  retObj := TVpage{}
  retObj.handle = unsafe.Pointer(C.vpage_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TVpage) SetUiAsset(ui_asset string) TRet {
  aui_asset := C.CString(ui_asset)
  defer C.free(unsafe.Pointer(aui_asset))
  return TRet(C.vpage_set_ui_asset((*C.widget_t)(this.handle), aui_asset));
}

func (this TVpage) SetAnimHint(anim_hint string) TRet {
  aanim_hint := C.CString(anim_hint)
  defer C.free(unsafe.Pointer(aanim_hint))
  return TRet(C.vpage_set_anim_hint((*C.widget_t)(this.handle), aanim_hint));
}

func (this TVpage) GetUiAsset() string {
  return C.GoString((*C.vpage_t)(unsafe.Pointer(this.handle)).ui_asset);
}

func (this TVpage) GetAnimHint() string {
  return C.GoString((*C.vpage_t)(unsafe.Pointer(this.handle)).anim_hint);
}

