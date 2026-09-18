type TLineNumber struct {
  TWidget
}

func TLineNumberCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TLineNumber{}
  retObj.handle = unsafe.Pointer(C.line_number_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func (this TLineNumber) SetTopMargin(top_margin int32) TRet {
  return TRet(C.line_number_set_top_margin((*C.widget_t)(this.handle), (C.int32_t)(top_margin)));
}

func (this TLineNumber) SetBottomMargin(bottom_margin int32) TRet {
  return TRet(C.line_number_set_bottom_margin((*C.widget_t)(this.handle), (C.int32_t)(bottom_margin)));
}

func (this TLineNumber) SetLineHeight(line_height int32) TRet {
  return TRet(C.line_number_set_line_height((*C.widget_t)(this.handle), (C.int32_t)(line_height)));
}

func (this TLineNumber) SetYoffset(yoffset int32) TRet {
  return TRet(C.line_number_set_yoffset((*C.widget_t)(this.handle), (C.int32_t)(yoffset)));
}

func TLineNumberCast(widget TWidget) TLineNumber {
  retObj := TLineNumber{}
  retObj.handle = unsafe.Pointer(C.line_number_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TLineNumber) AddHighlightLine(line int32) TRet {
  return TRet(C.line_number_add_highlight_line((*C.widget_t)(this.handle), (C.int32_t)(line)));
}

func (this TLineNumber) SetActiveLine(line int32) TRet {
  return TRet(C.line_number_set_active_line((*C.widget_t)(this.handle), (C.int32_t)(line)));
}

func (this TLineNumber) ClearHighlight() TRet {
  return TRet(C.line_number_clear_highlight((*C.widget_t)(this.handle)));
}

func (this TLineNumber) IsHighlightLine(line int32) bool {
  return (bool)(C.line_number_is_highlight_line((*C.widget_t)(this.handle), (C.int32_t)(line)));
}

