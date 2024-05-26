type TLabel struct {
  TWidget
}

func TLabelCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TLabel{}
  retObj.handle = unsafe.Pointer(C.label_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TLabel) SetLength(length int32) TRet {
  return TRet(C.label_set_length((*C.widget_t)(this.handle), (C.int32_t)(length)));
}

func (this TLabel) SetMaxW(max_w int32) TRet {
  return TRet(C.label_set_max_w((*C.widget_t)(this.handle), (C.int32_t)(max_w)));
}

func (this TLabel) SetLineWrap(line_wrap bool) TRet {
  return TRet(C.label_set_line_wrap((*C.widget_t)(this.handle), (C.bool_t)(line_wrap)));
}

func (this TLabel) SetWordWrap(word_wrap bool) TRet {
  return TRet(C.label_set_word_wrap((*C.widget_t)(this.handle), (C.bool_t)(word_wrap)));
}

func (this TLabel) SetEllipses(ellipses bool) TRet {
  return TRet(C.label_set_ellipses((*C.widget_t)(this.handle), (C.bool_t)(ellipses)));
}

func (this TLabel) ResizeToContent(min_w uint32, max_w uint32, min_h uint32, max_h uint32) TRet {
  return TRet(C.label_resize_to_content((*C.widget_t)(this.handle), (C.uint32_t)(min_w), (C.uint32_t)(max_w), (C.uint32_t)(min_h), (C.uint32_t)(max_h)));
}

func TLabelCast(widget TWidget) TLabel {
  retObj := TLabel{}
  retObj.handle = unsafe.Pointer(C.label_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TLabel) GetLength() int32 {
  return (int32)((*C.label_t)(unsafe.Pointer(this.handle)).length);
}

func (this TLabel) GetLineWrap() bool {
  return (bool)((*C.label_t)(unsafe.Pointer(this.handle)).line_wrap);
}

func (this TLabel) GetWordWrap() bool {
  return (bool)((*C.label_t)(unsafe.Pointer(this.handle)).word_wrap);
}

func (this TLabel) GetEllipses() bool {
  return (bool)((*C.label_t)(unsafe.Pointer(this.handle)).ellipses);
}

func (this TLabel) GetMaxW() int32 {
  return (int32)((*C.label_t)(unsafe.Pointer(this.handle)).max_w);
}

