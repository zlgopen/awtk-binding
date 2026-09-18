type TCalibrationWin struct {
  TWindowBase
}

func TCalibrationWinCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TCalibrationWin{}
  retObj.handle = unsafe.Pointer(C.calibration_win_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TCalibrationWinCast(widget TWidget) TCalibrationWin {
  retObj := TCalibrationWin{}
  retObj.handle = unsafe.Pointer(C.calibration_win_cast((*C.widget_t)(widget.handle)))
  return retObj
}

