type TSystemBar struct {
  TWindowBase
}

func TSystemBarCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSystemBar{}
  retObj.handle = unsafe.Pointer(C.system_bar_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSystemBarCast(widget TWidget) TSystemBar {
  retObj := TSystemBar{}
  retObj.handle = unsafe.Pointer(C.system_bar_cast((*C.widget_t)(widget.handle)))
  return retObj
}

