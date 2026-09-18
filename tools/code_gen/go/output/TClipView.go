type TClipView struct {
  TWidget
}

func TClipViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TClipView{}
  retObj.handle = unsafe.Pointer(C.clip_view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TClipViewCast(widget TWidget) TClipView {
  retObj := TClipView{}
  retObj.handle = unsafe.Pointer(C.clip_view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

