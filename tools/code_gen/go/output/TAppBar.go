type TAppBar struct {
  TWidget
}

func TAppBarCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TAppBar{}
  retObj.handle = unsafe.Pointer(C.app_bar_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TAppBarCast(widget TWidget) TAppBar {
  retObj := TAppBar{}
  retObj.handle = unsafe.Pointer(C.app_bar_cast((*C.widget_t)(widget.handle)))
  return retObj
}

