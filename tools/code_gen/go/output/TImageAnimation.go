type TImageAnimation struct {
  TWidget
}

func TImageAnimationCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TImageAnimation{}
  retObj.handle = unsafe.Pointer(C.image_animation_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TImageAnimation) SetLoop(loop bool) TRet {
  return TRet(C.image_animation_set_loop((*C.widget_t)(this.handle), (C.bool_t)(loop)));
}

func (this TImageAnimation) SetImage(image string) TRet {
  aimage := C.CString(image)
  defer C.free(unsafe.Pointer(aimage))
  return TRet(C.image_animation_set_image((*C.widget_t)(this.handle), aimage));
}

func (this TImageAnimation) SetInterval(interval uint32) TRet {
  return TRet(C.image_animation_set_interval((*C.widget_t)(this.handle), (C.uint32_t)(interval)));
}

func (this TImageAnimation) SetDelay(delay uint32) TRet {
  return TRet(C.image_animation_set_delay((*C.widget_t)(this.handle), (C.uint32_t)(delay)));
}

func (this TImageAnimation) SetAutoPlay(auto_play bool) TRet {
  return TRet(C.image_animation_set_auto_play((*C.widget_t)(this.handle), (C.bool_t)(auto_play)));
}

func (this TImageAnimation) SetSequence(sequence string) TRet {
  asequence := C.CString(sequence)
  defer C.free(unsafe.Pointer(asequence))
  return TRet(C.image_animation_set_sequence((*C.widget_t)(this.handle), asequence));
}

func (this TImageAnimation) SetRangeSequence(start_index uint32, end_index uint32) TRet {
  return TRet(C.image_animation_set_range_sequence((*C.widget_t)(this.handle), (C.uint32_t)(start_index), (C.uint32_t)(end_index)));
}

func (this TImageAnimation) Play() TRet {
  return TRet(C.image_animation_play((*C.widget_t)(this.handle)));
}

func (this TImageAnimation) Stop() TRet {
  return TRet(C.image_animation_stop((*C.widget_t)(this.handle)));
}

func (this TImageAnimation) Pause() TRet {
  return TRet(C.image_animation_pause((*C.widget_t)(this.handle)));
}

func (this TImageAnimation) Next() TRet {
  return TRet(C.image_animation_next((*C.widget_t)(this.handle)));
}

func (this TImageAnimation) SetFormat(format string) TRet {
  aformat := C.CString(format)
  defer C.free(unsafe.Pointer(aformat))
  return TRet(C.image_animation_set_format((*C.widget_t)(this.handle), aformat));
}

func (this TImageAnimation) SetUnloadAfterPaint(unload_after_paint bool) TRet {
  return TRet(C.image_animation_set_unload_after_paint((*C.widget_t)(this.handle), (C.bool_t)(unload_after_paint)));
}

func (this TImageAnimation) SetReverse(reverse bool) TRet {
  return TRet(C.image_animation_set_reverse((*C.widget_t)(this.handle), (C.bool_t)(reverse)));
}

func (this TImageAnimation) SetShowWhenDone(show_when_done bool) TRet {
  return TRet(C.image_animation_set_show_when_done((*C.widget_t)(this.handle), (C.bool_t)(show_when_done)));
}

func TImageAnimationCast(widget TWidget) TImageAnimation {
  retObj := TImageAnimation{}
  retObj.handle = unsafe.Pointer(C.image_animation_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TImageAnimation) IsPlaying() bool {
  return (bool)(C.image_animation_is_playing((*C.widget_t)(this.handle)));
}

func (this TImageAnimation) GetImage() string {
  return C.GoString((*C.image_animation_t)(unsafe.Pointer(this.handle)).image);
}

func (this TImageAnimation) GetSequence() string {
  return C.GoString((*C.image_animation_t)(unsafe.Pointer(this.handle)).sequence);
}

func (this TImageAnimation) GetStartIndex() uint32 {
  return (uint32)((*C.image_animation_t)(unsafe.Pointer(this.handle)).start_index);
}

func (this TImageAnimation) GetEndIndex() uint32 {
  return (uint32)((*C.image_animation_t)(unsafe.Pointer(this.handle)).end_index);
}

func (this TImageAnimation) GetReverse() bool {
  return (bool)((*C.image_animation_t)(unsafe.Pointer(this.handle)).reverse);
}

func (this TImageAnimation) GetLoop() bool {
  return (bool)((*C.image_animation_t)(unsafe.Pointer(this.handle)).loop);
}

func (this TImageAnimation) GetAutoPlay() bool {
  return (bool)((*C.image_animation_t)(unsafe.Pointer(this.handle)).auto_play);
}

func (this TImageAnimation) GetUnloadAfterPaint() bool {
  return (bool)((*C.image_animation_t)(unsafe.Pointer(this.handle)).unload_after_paint);
}

func (this TImageAnimation) GetFormat() string {
  return C.GoString((*C.image_animation_t)(unsafe.Pointer(this.handle)).format);
}

func (this TImageAnimation) GetInterval() uint32 {
  return (uint32)((*C.image_animation_t)(unsafe.Pointer(this.handle)).interval);
}

func (this TImageAnimation) GetDelay() uint32 {
  return (uint32)((*C.image_animation_t)(unsafe.Pointer(this.handle)).delay);
}

func (this TImageAnimation) GetShowWhenDone() bool {
  return (bool)((*C.image_animation_t)(unsafe.Pointer(this.handle)).show_when_done);
}

