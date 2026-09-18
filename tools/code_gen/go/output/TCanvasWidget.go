type TCanvasWidget struct {
  TWidget
}

func TCanvasWidgetCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TCanvasWidget{}
  retObj.handle = unsafe.Pointer(C.canvas_widget_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TCanvasWidgetCast(widget TWidget) TCanvasWidget {
  retObj := TCanvasWidget{}
  retObj.handle = unsafe.Pointer(C.canvas_widget_cast((*C.widget_t)(widget.handle)))
  return retObj
}

