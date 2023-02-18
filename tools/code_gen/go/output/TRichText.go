type TRichText struct {
  TWidget
}

func TRichTextCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TRichText{}
  retObj.handle = unsafe.Pointer(C.rich_text_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TRichText) SetText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.rich_text_set_text((*C.widget_t)(this.handle), atext));
}

func (this TRichText) SetYslidable(yslidable bool) TRet {
  return TRet(C.rich_text_set_yslidable((*C.widget_t)(this.handle), (C.bool_t)(yslidable)));
}

func TRichTextCast(widget TWidget) TRichText {
  retObj := TRichText{}
  retObj.handle = unsafe.Pointer(C.rich_text_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TRichText) GetLineGap() uint32 {
  return (uint32)((*C.rich_text_t)(unsafe.Pointer(this.handle)).line_gap);
}

func (this TRichText) GetYslidable() bool {
  return (bool)((*C.rich_text_t)(unsafe.Pointer(this.handle)).yslidable);
}

