type TRichTextView struct {
  TWidget
}

func TRichTextViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TRichTextView{}
  retObj.handle = unsafe.Pointer(C.rich_text_view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TRichTextViewCast(widget TWidget) TRichTextView {
  retObj := TRichTextView{}
  retObj.handle = unsafe.Pointer(C.rich_text_view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

