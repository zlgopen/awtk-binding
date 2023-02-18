type TDialogTitle struct {
  TWidget
}

func TDialogTitleCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDialogTitle{}
  retObj.handle = unsafe.Pointer(C.dialog_title_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDialogTitleCast(widget TWidget) TDialogTitle {
  retObj := TDialogTitle{}
  retObj.handle = unsafe.Pointer(C.dialog_title_cast((*C.widget_t)(widget.handle)))
  return retObj
}

