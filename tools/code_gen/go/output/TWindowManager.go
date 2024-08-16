type TWindowManager struct {
  TWidget
}

func TWindowManagerInstance() TWindowManager {
  retObj := TWindowManager{}
  retObj.handle = unsafe.Pointer(C.window_manager())
  return retObj
}

func TWindowManagerCast(widget TWidget) TWindowManager {
  retObj := TWindowManager{}
  retObj.handle = unsafe.Pointer(C.window_manager_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TWindowManager) GetTopMainWindow() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.window_manager_get_top_main_window((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWindowManager) GetTopWindow() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.window_manager_get_top_window((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWindowManager) GetForegroundWindow() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.window_manager_get_foreground_window((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWindowManager) GetPrevWindow() TWidget {
  retObj := TWidget{}
  retObj.handle = unsafe.Pointer(C.window_manager_get_prev_window((*C.widget_t)(this.handle)))
  return retObj
}

func (this TWindowManager) GetPointerX() int {
  return (int)(C.window_manager_get_pointer_x((*C.widget_t)(this.handle)));
}

func (this TWindowManager) GetPointerY() int {
  return (int)(C.window_manager_get_pointer_y((*C.widget_t)(this.handle)));
}

func (this TWindowManager) GetPointerPressed() bool {
  return (bool)(C.window_manager_get_pointer_pressed((*C.widget_t)(this.handle)));
}

func (this TWindowManager) IsAnimating() bool {
  return (bool)(C.window_manager_is_animating((*C.widget_t)(this.handle)));
}

func (this TWindowManager) SetShowFps(show_fps bool) TRet {
  return TRet(C.window_manager_set_show_fps((*C.widget_t)(this.handle), (C.bool_t)(show_fps)));
}

func (this TWindowManager) SetShowFpsPosition(x int, y int) TRet {
  return TRet(C.window_manager_set_show_fps_position((*C.widget_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y)));
}

func (this TWindowManager) SetMaxFps(max_fps uint32) TRet {
  return TRet(C.window_manager_set_max_fps((*C.widget_t)(this.handle), (C.uint32_t)(max_fps)));
}

func (this TWindowManager) SetIgnoreInputEvents(ignore_input_events bool) TRet {
  return TRet(C.window_manager_set_ignore_input_events((*C.widget_t)(this.handle), (C.bool_t)(ignore_input_events)));
}

func (this TWindowManager) SetScreenSaverTime(screen_saver_time uint32) TRet {
  return TRet(C.window_manager_set_screen_saver_time((*C.widget_t)(this.handle), (C.uint32_t)(screen_saver_time)));
}

func (this TWindowManager) SetCursor(cursor string) TRet {
  acursor := C.CString(cursor)
  defer C.free(unsafe.Pointer(acursor))
  return TRet(C.window_manager_set_cursor((*C.widget_t)(this.handle), acursor));
}

func (this TWindowManager) Back() TRet {
  return TRet(C.window_manager_back((*C.widget_t)(this.handle)));
}

func (this TWindowManager) BackToHome() TRet {
  return TRet(C.window_manager_back_to_home((*C.widget_t)(this.handle)));
}

func (this TWindowManager) BackTo(target string) TRet {
  atarget := C.CString(target)
  defer C.free(unsafe.Pointer(atarget))
  return TRet(C.window_manager_back_to((*C.widget_t)(this.handle), atarget));
}

func (this TWindowManager) Resize(w int, h int) TRet {
  return TRet(C.window_manager_resize((*C.widget_t)(this.handle), (C.wh_t)(w), (C.wh_t)(h)));
}

func (this TWindowManager) SetFullscreen(fullscreen bool) TRet {
  return TRet(C.window_manager_set_fullscreen((*C.widget_t)(this.handle), (C.bool_t)(fullscreen)));
}

func (this TWindowManager) CloseAll() TRet {
  return TRet(C.window_manager_close_all((*C.widget_t)(this.handle)));
}

