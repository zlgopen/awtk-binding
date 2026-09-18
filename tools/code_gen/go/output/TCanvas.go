type TCanvas struct {
  handle unsafe.Pointer
}

func (this TCanvas) GetWidth() int {
  return (int)(C.canvas_get_width((*C.canvas_t)(this.handle)));
}

func (this TCanvas) GetHeight() int {
  return (int)(C.canvas_get_height((*C.canvas_t)(this.handle)));
}

func (this TCanvas) GetClipRect(r TRect) TRet {
  return TRet(C.canvas_get_clip_rect((*C.canvas_t)(this.handle), (*C.rect_t)(r.handle)));
}

func (this TCanvas) SetClipRect(r TRect) TRet {
  return TRet(C.canvas_set_clip_rect((*C.canvas_t)(this.handle), (*C.rect_t)(r.handle)));
}

func (this TCanvas) SetClipRectEx(r TRect, translate bool) TRet {
  return TRet(C.canvas_set_clip_rect_ex((*C.canvas_t)(this.handle), (*C.rect_t)(r.handle), (C.bool_t)(translate)));
}

func (this TCanvas) SetFillColor(color string) TRet {
  acolor := C.CString(color)
  defer C.free(unsafe.Pointer(acolor))
  return TRet(C.canvas_set_fill_color_str((*C.canvas_t)(this.handle), acolor));
}

func (this TCanvas) SetTextColor(color string) TRet {
  acolor := C.CString(color)
  defer C.free(unsafe.Pointer(acolor))
  return TRet(C.canvas_set_text_color_str((*C.canvas_t)(this.handle), acolor));
}

func (this TCanvas) SetStrokeColor(color string) TRet {
  acolor := C.CString(color)
  defer C.free(unsafe.Pointer(acolor))
  return TRet(C.canvas_set_stroke_color_str((*C.canvas_t)(this.handle), acolor));
}

func (this TCanvas) SetGlobalAlpha(alpha uint8) TRet {
  return TRet(C.canvas_set_global_alpha((*C.canvas_t)(this.handle), (C.uint8_t)(alpha)));
}

func (this TCanvas) Translate(dx int, dy int) TRet {
  return TRet(C.canvas_translate((*C.canvas_t)(this.handle), (C.xy_t)(dx), (C.xy_t)(dy)));
}

func (this TCanvas) Untranslate(dx int, dy int) TRet {
  return TRet(C.canvas_untranslate((*C.canvas_t)(this.handle), (C.xy_t)(dx), (C.xy_t)(dy)));
}

func (this TCanvas) DrawVline(x int, y int, h int) TRet {
  return TRet(C.canvas_draw_vline((*C.canvas_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(h)));
}

func (this TCanvas) DrawHline(x int, y int, w int) TRet {
  return TRet(C.canvas_draw_hline((*C.canvas_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w)));
}

func (this TCanvas) FillRect(x int, y int, w int, h int) TRet {
  return TRet(C.canvas_fill_rect((*C.canvas_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)));
}

func (this TCanvas) ClearRect(x int, y int, w int, h int) TRet {
  return TRet(C.canvas_clear_rect((*C.canvas_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)));
}

func (this TCanvas) StrokeRect(x int, y int, w int, h int) TRet {
  return TRet(C.canvas_stroke_rect((*C.canvas_t)(this.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)));
}

func (this TCanvas) SetFont(name string, size int) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.canvas_set_font((*C.canvas_t)(this.handle), aname, (C.font_size_t)(size)));
}

func (this TCanvas) ResetFont() TRet {
  return TRet(C.canvas_reset_font((*C.canvas_t)(this.handle)));
}

func (this TCanvas) MeasureText(str string) float64 {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  return (float64)(C.canvas_measure_utf8((*C.canvas_t)(this.handle), astr));
}

func (this TCanvas) DrawText(str string, x int, y int) TRet {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  return TRet(C.canvas_draw_utf8((*C.canvas_t)(this.handle), astr, (C.xy_t)(x), (C.xy_t)(y)));
}

func (this TCanvas) DrawTextInRect(str string, r TRect) TRet {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  return TRet(C.canvas_draw_utf8_in_rect((*C.canvas_t)(this.handle), astr, (*C.rect_t)(r.handle)));
}

func (this TCanvas) DrawIcon(img TBitmap, cx int, cy int) TRet {
  return TRet(C.canvas_draw_icon((*C.canvas_t)(this.handle), (*C.bitmap_t)(img.handle), (C.xy_t)(cx), (C.xy_t)(cy)));
}

func (this TCanvas) DrawImage(img TBitmap, src TRect, dst TRect) TRet {
  return TRet(C.canvas_draw_image((*C.canvas_t)(this.handle), (*C.bitmap_t)(img.handle), (*C.rect_t)(src.handle), (*C.rect_t)(dst.handle)));
}

func (this TCanvas) DrawImageEx(img TBitmap, draw_type TImageDrawType, dst TRect) TRet {
  return TRet(C.canvas_draw_image_ex((*C.canvas_t)(this.handle), (*C.bitmap_t)(img.handle), (C.image_draw_type_t)(draw_type), (*C.rect_t)(dst.handle)));
}

func (this TCanvas) DrawImageEx2(img TBitmap, draw_type TImageDrawType, src TRect, dst TRect) TRet {
  return TRet(C.canvas_draw_image_ex2((*C.canvas_t)(this.handle), (*C.bitmap_t)(img.handle), (C.image_draw_type_t)(draw_type), (*C.rect_t)(src.handle), (*C.rect_t)(dst.handle)));
}

func (this TCanvas) GetVgcanvas() TVgcanvas {
  retObj := TVgcanvas{}
  retObj.handle = unsafe.Pointer(C.canvas_get_vgcanvas((*C.canvas_t)(this.handle)))
  return retObj
}

func TCanvasCast(c TCanvas) TCanvas {
  retObj := TCanvas{}
  retObj.handle = unsafe.Pointer(C.canvas_cast((*C.canvas_t)(c.handle)))
  return retObj
}

func (this TCanvas) Reset() TRet {
  return TRet(C.canvas_reset((*C.canvas_t)(this.handle)));
}

func (this TCanvas) ResetCache() TRet {
  return TRet(C.canvas_reset_cache((*C.canvas_t)(this.handle)));
}

func (this TCanvas) GetOx() int {
  return (int)((*C.canvas_t)(unsafe.Pointer(this.handle)).ox);
}

func (this TCanvas) GetOy() int {
  return (int)((*C.canvas_t)(unsafe.Pointer(this.handle)).oy);
}

func (this TCanvas) GetFontName() string {
  return C.GoString((*C.canvas_t)(unsafe.Pointer(this.handle)).font_name);
}

func (this TCanvas) GetFontSize() int {
  return (int)((*C.canvas_t)(unsafe.Pointer(this.handle)).font_size);
}

func (this TCanvas) GetGlobalAlpha() uint8 {
  return (uint8)((*C.canvas_t)(unsafe.Pointer(this.handle)).global_alpha);
}

