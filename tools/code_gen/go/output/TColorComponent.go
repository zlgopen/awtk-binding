type TColorComponent struct {
  TWidget
}

func TColorComponentCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TColorComponent{}
  retObj.handle = unsafe.Pointer(C.color_component_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TColorComponentCast(widget TWidget) TColorComponent {
  retObj := TColorComponent{}
  retObj.handle = unsafe.Pointer(C.color_component_cast((*C.widget_t)(widget.handle)))
  return retObj
}

