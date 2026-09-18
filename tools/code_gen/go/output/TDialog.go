type TDialog struct {
  TWindowBase
}

func TDialogCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDialog{}
  retObj.handle = unsafe.Pointer(C.dialog_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDialogCreateSimple(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDialog{}
  retObj.handle = unsafe.Pointer(C.dialog_create_simple((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDialogCast(widget TWidget) TDialog {
  retObj := TDialog{}
  retObj.handle = unsafe.Pointer(C.dialog_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TDialog) GetTitle() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.dialog_get_title((*C.widget_t)(this.handle)))
  return retObj
}

func (this TDialog) GetClient() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.dialog_get_client((*C.widget_t)(this.handle)))
  return retObj
}

func TDialogOpen(name string) TWidget {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TDialog{}
  retObj.handle = unsafe.Pointer(C.dialog_open(aname))
  return retObj.TWidget
}

func (this TDialog) SetTitle(title string) TRet {
  atitle := C.CString(title)
  defer C.free(unsafe.Pointer(atitle))
  return TRet(C.dialog_set_title((*C.widget_t)(this.handle), atitle));
}

func (this TDialog) Modal() TDialogQuitCode {
  return TDialogQuitCode(C.dialog_modal((*C.widget_t)(this.handle)));
}

func (this TDialog) Quit(code uint32) TRet {
  return TRet(C.dialog_quit((*C.widget_t)(this.handle), (C.uint32_t)(code)));
}

func (this TDialog) IsQuited() bool {
  return (bool)(C.dialog_is_quited((*C.widget_t)(this.handle)));
}

func (this TDialog) IsModal() bool {
  return (bool)(C.dialog_is_modal((*C.widget_t)(this.handle)));
}

func TDialogToast(text string, duration uint32) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.dialog_toast(atext, (C.uint32_t)(duration)));
}

func TDialogInfo(title string, text string) TRet {
  atitle := C.CString(title)
  defer C.free(unsafe.Pointer(atitle))
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.dialog_info(atitle, atext));
}

func TDialogWarn(title string, text string) TRet {
  atitle := C.CString(title)
  defer C.free(unsafe.Pointer(atitle))
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.dialog_warn(atitle, atext));
}

func TDialogConfirm(title string, text string) TRet {
  atitle := C.CString(title)
  defer C.free(unsafe.Pointer(atitle))
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.dialog_confirm(atitle, atext));
}

func (this TDialog) GetHighlight() string {
  return C.GoString((*C.dialog_t)(unsafe.Pointer(this.handle)).highlight);
}

