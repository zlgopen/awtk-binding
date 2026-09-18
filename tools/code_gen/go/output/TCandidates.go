type TCandidates struct {
  TWidget
}

func TCandidatesCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TCandidates{}
  retObj.handle = unsafe.Pointer(C.candidates_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TCandidatesCast(widget TWidget) TCandidates {
  retObj := TCandidates{}
  retObj.handle = unsafe.Pointer(C.candidates_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TCandidates) SetPre(pre bool) TRet {
  return TRet(C.candidates_set_pre((*C.widget_t)(this.handle), (C.bool_t)(pre)));
}

func (this TCandidates) SetSelectByNum(select_by_num bool) TRet {
  return TRet(C.candidates_set_select_by_num((*C.widget_t)(this.handle), (C.bool_t)(select_by_num)));
}

func (this TCandidates) SetAutoHide(auto_hide bool) TRet {
  return TRet(C.candidates_set_auto_hide((*C.widget_t)(this.handle), (C.bool_t)(auto_hide)));
}

func (this TCandidates) SetVisibleNum(visible_num uint32) TRet {
  return TRet(C.candidates_set_visible_num((*C.widget_t)(this.handle), (C.uint32_t)(visible_num)));
}

func (this TCandidates) SetButtonStyle(button_style string) TRet {
  abutton_style := C.CString(button_style)
  defer C.free(unsafe.Pointer(abutton_style))
  return TRet(C.candidates_set_button_style((*C.widget_t)(this.handle), abutton_style));
}

func (this TCandidates) GetPre() bool {
  return (bool)((*C.candidates_t)(unsafe.Pointer(this.handle)).pre);
}

func (this TCandidates) GetSelectByNum() bool {
  return (bool)((*C.candidates_t)(unsafe.Pointer(this.handle)).select_by_num);
}

func (this TCandidates) GetAutoHide() bool {
  return (bool)((*C.candidates_t)(unsafe.Pointer(this.handle)).auto_hide);
}

func (this TCandidates) GetButtonStyle() string {
  return C.GoString((*C.candidates_t)(unsafe.Pointer(this.handle)).button_style);
}

func (this TCandidates) GetEnablePreview() bool {
  return (bool)((*C.candidates_t)(unsafe.Pointer(this.handle)).enable_preview);
}

func (this TCandidates) GetVisibleNum() uint32 {
  return (uint32)((*C.candidates_t)(unsafe.Pointer(this.handle)).visible_num);
}

