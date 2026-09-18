type TKeyboard struct {
  TWindowBase
}

func TKeyboardCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TKeyboard{}
  retObj.handle = unsafe.Pointer(C.keyboard_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TKeyboardCast(widget TWidget) TKeyboard {
  retObj := TKeyboard{}
  retObj.handle = unsafe.Pointer(C.keyboard_cast((*C.widget_t)(widget.handle)))
  return retObj
}

