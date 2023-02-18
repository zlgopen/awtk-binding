type TDialogClient struct {
  TWidget
}

func TDialogClientCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TDialogClient{}
  retObj.handle = unsafe.Pointer(C.dialog_client_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TDialogClientCast(widget TWidget) TDialogClient {
  retObj := TDialogClient{}
  retObj.handle = unsafe.Pointer(C.dialog_client_cast((*C.widget_t)(widget.handle)))
  return retObj
}

