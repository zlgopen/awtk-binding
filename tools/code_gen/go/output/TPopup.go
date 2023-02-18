type TPopup struct {
  TWindowBase
}

func TPopupCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TPopup{}
  retObj.handle = unsafe.Pointer(C.popup_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TPopupCast(widget TWidget) TPopup {
  retObj := TPopup{}
  retObj.handle = unsafe.Pointer(C.popup_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TPopup) SetCloseWhenClick(close_when_click bool) TRet {
  return TRet(C.popup_set_close_when_click((*C.widget_t)(this.handle), (C.bool_t)(close_when_click)));
}

func (this TPopup) SetCloseWhenClickOutside(close_when_click_outside bool) TRet {
  return TRet(C.popup_set_close_when_click_outside((*C.widget_t)(this.handle), (C.bool_t)(close_when_click_outside)));
}

func (this TPopup) SetCloseWhenTimeout(close_when_timeout uint32) TRet {
  return TRet(C.popup_set_close_when_timeout((*C.widget_t)(this.handle), (C.uint32_t)(close_when_timeout)));
}

func (this TPopup) GetCloseWhenClick() bool {
  return (bool)((*C.popup_t)(unsafe.Pointer(this.handle)).close_when_click);
}

func (this TPopup) GetCloseWhenClickOutside() bool {
  return (bool)((*C.popup_t)(unsafe.Pointer(this.handle)).close_when_click_outside);
}

func (this TPopup) GetCloseWhenTimeout() uint32 {
  return (uint32)((*C.popup_t)(unsafe.Pointer(this.handle)).close_when_timeout);
}

