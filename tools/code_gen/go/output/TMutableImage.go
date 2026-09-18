type TMutableImage struct {
  TImageBase
}

func TMutableImageCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TMutableImage{}
  retObj.handle = unsafe.Pointer(C.mutable_image_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

