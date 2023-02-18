type TWindow struct {
  TWindowBase
}

func TWindowCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TWindow{}
  retObj.handle = unsafe.Pointer(C.window_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TWindowCreateDefault() TWidget {
  retObj := TWindow{}
  retObj.handle = unsafe.Pointer(C.window_create_default())
  return retObj.TWidget
}

func (this TWindow) SetFullscreen(fullscreen bool) TRet {
  return TRet(C.window_set_fullscreen((*C.widget_t)(this.handle), (C.bool_t)(fullscreen)));
}

func (this TWindow) SetAutoScaleChildren(design_w uint32, design_h uint32) TRet {
  return TRet(C.window_set_auto_scale_children((*C.widget_t)(this.handle), (C.uint32_t)(design_w), (C.uint32_t)(design_h)));
}

func TWindowOpen(name string) TWidget {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TWindow{}
  retObj.handle = unsafe.Pointer(C.window_open(aname))
  return retObj.TWidget
}

func TWindowOpenAndClose(name string, to_close TWidget) TWidget {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  retObj := TWindow{}
  retObj.handle = unsafe.Pointer(C.window_open_and_close(aname, (*C.widget_t)(to_close.handle)))
  return retObj.TWidget
}

func (this TWindow) Close() TRet {
  return TRet(C.window_close((*C.widget_t)(this.handle)));
}

func (this TWindow) CloseForce() TRet {
  return TRet(C.window_close_force((*C.widget_t)(this.handle)));
}

func TWindowCast(widget TWidget) TWindow {
  retObj := TWindow{}
  retObj.handle = unsafe.Pointer(C.window_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TWindow) GetFullscreen() bool {
  return (bool)((*C.window_t)(unsafe.Pointer(this.handle)).fullscreen);
}

