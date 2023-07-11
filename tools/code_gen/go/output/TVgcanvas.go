type TVgcanvas struct {
  handle unsafe.Pointer
}

func TVgcanvasCast(vg TVgcanvas) TVgcanvas {
  retObj := TVgcanvas{}
  retObj.handle = unsafe.Pointer(C.vgcanvas_cast((*C.vgcanvas_t)(vg.handle)))
  return retObj
}

func (this TVgcanvas) Flush() TRet {
  return TRet(C.vgcanvas_flush((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) BeginPath() TRet {
  return TRet(C.vgcanvas_begin_path((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) MoveTo(x float64, y float64) TRet {
  return TRet(C.vgcanvas_move_to((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) LineTo(x float64, y float64) TRet {
  return TRet(C.vgcanvas_line_to((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) QuadTo(cpx float64, cpy float64, x float64, y float64) TRet {
  return TRet(C.vgcanvas_quad_to((*C.vgcanvas_t)(this.handle), (C.float_t)(cpx), (C.float_t)(cpy), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) BezierTo(cp1x float64, cp1y float64, cp2x float64, cp2y float64, x float64, y float64) TRet {
  return TRet(C.vgcanvas_bezier_to((*C.vgcanvas_t)(this.handle), (C.float_t)(cp1x), (C.float_t)(cp1y), (C.float_t)(cp2x), (C.float_t)(cp2y), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) ArcTo(x1 float64, y1 float64, x2 float64, y2 float64, r float64) TRet {
  return TRet(C.vgcanvas_arc_to((*C.vgcanvas_t)(this.handle), (C.float_t)(x1), (C.float_t)(y1), (C.float_t)(x2), (C.float_t)(y2), (C.float_t)(r)));
}

func (this TVgcanvas) Arc(x float64, y float64, r float64, start_angle float64, end_angle float64, ccw bool) TRet {
  return TRet(C.vgcanvas_arc((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y), (C.float_t)(r), (C.float_t)(start_angle), (C.float_t)(end_angle), (C.bool_t)(ccw)));
}

func (this TVgcanvas) IsPointInPath(x float64, y float64) bool {
  return (bool)(C.vgcanvas_is_point_in_path((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) Rect(x float64, y float64, w float64, h float64) TRet {
  return TRet(C.vgcanvas_rect((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y), (C.float_t)(w), (C.float_t)(h)));
}

func (this TVgcanvas) RoundedRect(x float64, y float64, w float64, h float64, r float64) TRet {
  return TRet(C.vgcanvas_rounded_rect((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y), (C.float_t)(w), (C.float_t)(h), (C.float_t)(r)));
}

func (this TVgcanvas) Ellipse(x float64, y float64, rx float64, ry float64) TRet {
  return TRet(C.vgcanvas_ellipse((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y), (C.float_t)(rx), (C.float_t)(ry)));
}

func (this TVgcanvas) ClosePath() TRet {
  return TRet(C.vgcanvas_close_path((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) PathWinding(dir bool) TRet {
  return TRet(C.vgcanvas_path_winding((*C.vgcanvas_t)(this.handle), (C.bool_t)(dir)));
}

func (this TVgcanvas) Rotate(rad float64) TRet {
  return TRet(C.vgcanvas_rotate((*C.vgcanvas_t)(this.handle), (C.float_t)(rad)));
}

func (this TVgcanvas) Scale(x float64, y float64) TRet {
  return TRet(C.vgcanvas_scale((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) Translate(x float64, y float64) TRet {
  return TRet(C.vgcanvas_translate((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y)));
}

func (this TVgcanvas) Transform(a float64, b float64, c float64, d float64, e float64, f float64) TRet {
  return TRet(C.vgcanvas_transform((*C.vgcanvas_t)(this.handle), (C.float_t)(a), (C.float_t)(b), (C.float_t)(c), (C.float_t)(d), (C.float_t)(e), (C.float_t)(f)));
}

func (this TVgcanvas) SetTransform(a float64, b float64, c float64, d float64, e float64, f float64) TRet {
  return TRet(C.vgcanvas_set_transform((*C.vgcanvas_t)(this.handle), (C.float_t)(a), (C.float_t)(b), (C.float_t)(c), (C.float_t)(d), (C.float_t)(e), (C.float_t)(f)));
}

func (this TVgcanvas) ClipPath() TRet {
  return TRet(C.vgcanvas_clip_path((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) ClipRect(x float64, y float64, w float64, h float64) TRet {
  return TRet(C.vgcanvas_clip_rect((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y), (C.float_t)(w), (C.float_t)(h)));
}

func (this TVgcanvas) IsRectfInClipRect(left float64, top float64, right float64, bottom float64) bool {
  return (bool)(C.vgcanvas_is_rectf_in_clip_rect((*C.vgcanvas_t)(this.handle), (C.float_t)(left), (C.float_t)(top), (C.float_t)(right), (C.float_t)(bottom)));
}

func (this TVgcanvas) IntersectClipRect(x float64, y float64, w float64, h float64) TRet {
  return TRet(C.vgcanvas_intersect_clip_rect((*C.vgcanvas_t)(this.handle), (C.float_t)(x), (C.float_t)(y), (C.float_t)(w), (C.float_t)(h)));
}

func (this TVgcanvas) Fill() TRet {
  return TRet(C.vgcanvas_fill((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) Stroke() TRet {
  return TRet(C.vgcanvas_stroke((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) Paint(stroke bool, img TBitmap) TRet {
  return TRet(C.vgcanvas_paint((*C.vgcanvas_t)(this.handle), (C.bool_t)(stroke), (*C.bitmap_t)(img.handle)));
}

func (this TVgcanvas) SetFont(font string) TRet {
  afont := C.CString(font)
  defer C.free(unsafe.Pointer(afont))
  return TRet(C.vgcanvas_set_font((*C.vgcanvas_t)(this.handle), afont));
}

func (this TVgcanvas) SetFontSize(size float64) TRet {
  return TRet(C.vgcanvas_set_font_size((*C.vgcanvas_t)(this.handle), (C.float_t)(size)));
}

func (this TVgcanvas) SetTextAlign(value string) TRet {
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.vgcanvas_set_text_align((*C.vgcanvas_t)(this.handle), avalue));
}

func (this TVgcanvas) SetTextBaseline(value string) TRet {
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.vgcanvas_set_text_baseline((*C.vgcanvas_t)(this.handle), avalue));
}

func (this TVgcanvas) FillText(text string, x float64, y float64, max_width float64) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.vgcanvas_fill_text((*C.vgcanvas_t)(this.handle), atext, (C.float_t)(x), (C.float_t)(y), (C.float_t)(max_width)));
}

func (this TVgcanvas) MeasureText(text string) float64 {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return (float64)(C.vgcanvas_measure_text((*C.vgcanvas_t)(this.handle), atext));
}

func (this TVgcanvas) DrawImage(img TBitmap, sx float64, sy float64, sw float64, sh float64, dx float64, dy float64, dw float64, dh float64) TRet {
  return TRet(C.vgcanvas_draw_image((*C.vgcanvas_t)(this.handle), (*C.bitmap_t)(img.handle), (C.float_t)(sx), (C.float_t)(sy), (C.float_t)(sw), (C.float_t)(sh), (C.float_t)(dx), (C.float_t)(dy), (C.float_t)(dw), (C.float_t)(dh)));
}

func (this TVgcanvas) DrawImageRepeat(img TBitmap, sx float64, sy float64, sw float64, sh float64, dx float64, dy float64, dw float64, dh float64, dst_w float64, dst_h float64) TRet {
  return TRet(C.vgcanvas_draw_image_repeat((*C.vgcanvas_t)(this.handle), (*C.bitmap_t)(img.handle), (C.float_t)(sx), (C.float_t)(sy), (C.float_t)(sw), (C.float_t)(sh), (C.float_t)(dx), (C.float_t)(dy), (C.float_t)(dw), (C.float_t)(dh), (C.float_t)(dst_w), (C.float_t)(dst_h)));
}

func (this TVgcanvas) DrawIcon(img TBitmap, sx float64, sy float64, sw float64, sh float64, dx float64, dy float64, dw float64, dh float64) TRet {
  return TRet(C.vgcanvas_draw_icon((*C.vgcanvas_t)(this.handle), (*C.bitmap_t)(img.handle), (C.float_t)(sx), (C.float_t)(sy), (C.float_t)(sw), (C.float_t)(sh), (C.float_t)(dx), (C.float_t)(dy), (C.float_t)(dw), (C.float_t)(dh)));
}

func (this TVgcanvas) SetAntialias(value bool) TRet {
  return TRet(C.vgcanvas_set_antialias((*C.vgcanvas_t)(this.handle), (C.bool_t)(value)));
}

func (this TVgcanvas) SetGlobalAlpha(alpha float64) TRet {
  return TRet(C.vgcanvas_set_global_alpha((*C.vgcanvas_t)(this.handle), (C.float_t)(alpha)));
}

func (this TVgcanvas) SetLineWidth(value float64) TRet {
  return TRet(C.vgcanvas_set_line_width((*C.vgcanvas_t)(this.handle), (C.float_t)(value)));
}

func (this TVgcanvas) SetFillColor(color string) TRet {
  acolor := C.CString(color)
  defer C.free(unsafe.Pointer(acolor))
  return TRet(C.vgcanvas_set_fill_color_str((*C.vgcanvas_t)(this.handle), acolor));
}

func (this TVgcanvas) SetStrokeColor(str string) TRet {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  return TRet(C.vgcanvas_set_stroke_color_str((*C.vgcanvas_t)(this.handle), astr));
}

func (this TVgcanvas) SetLineCap(value string) TRet {
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.vgcanvas_set_line_cap((*C.vgcanvas_t)(this.handle), avalue));
}

func (this TVgcanvas) SetLineJoin(value string) TRet {
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  return TRet(C.vgcanvas_set_line_join((*C.vgcanvas_t)(this.handle), avalue));
}

func (this TVgcanvas) SetMiterLimit(value float64) TRet {
  return TRet(C.vgcanvas_set_miter_limit((*C.vgcanvas_t)(this.handle), (C.float_t)(value)));
}

func (this TVgcanvas) Save() TRet {
  return TRet(C.vgcanvas_save((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) Restore() TRet {
  return TRet(C.vgcanvas_restore((*C.vgcanvas_t)(this.handle)));
}

func (this TVgcanvas) GetW() uint32 {
  return (uint32)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).w);
}

func (this TVgcanvas) GetH() uint32 {
  return (uint32)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).h);
}

func (this TVgcanvas) GetStride() uint32 {
  return (uint32)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).stride);
}

func (this TVgcanvas) GetRatio() float64 {
  return (float64)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).ratio);
}

func (this TVgcanvas) GetAntiAlias() bool {
  return (bool)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).anti_alias);
}

func (this TVgcanvas) GetLineWidth() float64 {
  return (float64)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).line_width);
}

func (this TVgcanvas) GetGlobalAlpha() float64 {
  return (float64)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).global_alpha);
}

func (this TVgcanvas) GetMiterLimit() float64 {
  return (float64)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).miter_limit);
}

func (this TVgcanvas) GetLineCap() string {
  return C.GoString((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).line_cap);
}

func (this TVgcanvas) GetLineJoin() string {
  return C.GoString((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).line_join);
}

func (this TVgcanvas) GetFont() string {
  return C.GoString((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).font);
}

func (this TVgcanvas) GetFontSize() float64 {
  return (float64)((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).font_size);
}

func (this TVgcanvas) GetTextAlign() string {
  return C.GoString((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).text_align);
}

func (this TVgcanvas) GetTextBaseline() string {
  return C.GoString((*C.vgcanvas_t)(unsafe.Pointer(this.handle)).text_baseline);
}

