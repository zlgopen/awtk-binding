type TNativeWindow struct {
  TObject
}

func (this TNativeWindow) Move(x int, y int, force bool) TRet {
  return TRet(C.native_window_move((*C.native_window_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.bool_t)(force)));
}

func (this TNativeWindow) Resize(w int, h int, force bool) TRet {
  return TRet(C.native_window_resize((*C.native_window_t)(this.handle), (C.wh_t)(w), (C.wh_t)(h), (C.bool_t)(force)));
}

func (this TNativeWindow) SetOrientation(old_orientation int64, new_orientation int64) TRet {
  return TRet(C.native_window_set_orientation((*C.native_window_t)(this.handle), (C.lcd_orientation_t)(old_orientation), (C.lcd_orientation_t)(new_orientation)));
}

func (this TNativeWindow) Minimize() TRet {
  return TRet(C.native_window_minimize((*C.native_window_t)(this.handle)));
}

func (this TNativeWindow) Maximize() TRet {
  return TRet(C.native_window_maximize((*C.native_window_t)(this.handle)));
}

func (this TNativeWindow) Restore() TRet {
  return TRet(C.native_window_restore((*C.native_window_t)(this.handle)));
}

func (this TNativeWindow) Center() TRet {
  return TRet(C.native_window_center((*C.native_window_t)(this.handle)));
}

func (this TNativeWindow) ShowBorder(show bool) TRet {
  return TRet(C.native_window_show_border((*C.native_window_t)(this.handle), (C.bool_t)(show)));
}

func (this TNativeWindow) SetFullscreen(fullscreen bool) TRet {
  return TRet(C.native_window_set_fullscreen((*C.native_window_t)(this.handle), (C.bool_t)(fullscreen)));
}

func (this TNativeWindow) SetCursor(name string, img TBitmap) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.native_window_set_cursor((*C.native_window_t)(this.handle), aname, (*C.bitmap_t)(img.handle)));
}

func (this TNativeWindow) SetTitle(app_name string) TRet {
  aapp_name := C.CString(app_name)
  defer C.free(unsafe.Pointer(aapp_name))
  return TRet(C.native_window_set_title((*C.native_window_t)(this.handle), aapp_name));
}

