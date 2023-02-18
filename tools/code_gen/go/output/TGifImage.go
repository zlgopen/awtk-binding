type TGifImage struct {
  TImageBase
}

func TGifImageCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TGifImage{}
  retObj.handle = unsafe.Pointer(C.gif_image_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TGifImage) Play() TRet {
  return TRet(C.gif_image_play((*C.widget_t)(this.handle)));
}

func (this TGifImage) Stop() TRet {
  return TRet(C.gif_image_stop((*C.widget_t)(this.handle)));
}

func (this TGifImage) Pause() TRet {
  return TRet(C.gif_image_pause((*C.widget_t)(this.handle)));
}

func (this TGifImage) SetLoop(loop uint32) TRet {
  return TRet(C.gif_image_set_loop((*C.widget_t)(this.handle), (C.uint32_t)(loop)));
}

func TGifImageCast(widget TWidget) TGifImage {
  retObj := TGifImage{}
  retObj.handle = unsafe.Pointer(C.gif_image_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TGifImage) GetLoop() uint32 {
  return (uint32)((*C.gif_image_t)(unsafe.Pointer(this.handle)).loop);
}

