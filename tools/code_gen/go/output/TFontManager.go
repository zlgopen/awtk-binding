type TFontManager struct {
  TEmitter
}

func (this TFontManager) SetStandardFontSize(is_standard bool) TRet {
  return TRet(C.font_manager_set_standard_font_size((*C.font_manager_t)(this.handle), (C.bool_t)(is_standard)));
}

func (this TFontManager) GetStandardFontSize() bool {
  return (bool)(C.font_manager_get_standard_font_size((*C.font_manager_t)(this.handle)));
}

func (this TFontManager) UnloadFont(name string, size int) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.font_manager_unload_font((*C.font_manager_t)(this.handle), aname, (C.font_size_t)(size)));
}

func (this TFontManager) ShrinkCache(cache_size uint32) TRet {
  return TRet(C.font_manager_shrink_cache((*C.font_manager_t)(this.handle), (C.uint32_t)(cache_size)));
}

func (this TFontManager) UnloadAll() TRet {
  return TRet(C.font_manager_unload_all((*C.font_manager_t)(this.handle)));
}

