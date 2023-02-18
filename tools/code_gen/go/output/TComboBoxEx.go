type TComboBoxEx struct {
  TComboBox
}

func TComboBoxExCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TComboBoxEx{}
  retObj.handle = unsafe.Pointer(C.combo_box_ex_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

