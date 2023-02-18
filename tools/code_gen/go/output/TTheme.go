type TTheme struct {
  handle unsafe.Pointer
}

func TThemeInstance() TTheme {
  retObj := TTheme{}
  retObj.handle = unsafe.Pointer(C.theme())
  return retObj
}

