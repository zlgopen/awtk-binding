func PreInit() TRet {
  return TRet(C.tk_pre_init());
}

func Init(w int, h int, app_type TAppType, app_name string, app_root string) TRet {
  aapp_name := C.CString(app_name)
  defer C.free(unsafe.Pointer(aapp_name))
  aapp_root := C.CString(app_root)
  defer C.free(unsafe.Pointer(aapp_root))
  return TRet(C.tk_init((C.wh_t)(w), (C.wh_t)(h), (C.app_type_t)(app_type), aapp_name, aapp_root));
}

func Run() TRet {
  return TRet(C.tk_run());
}

func Quit() TRet {
  return TRet(C.tk_quit());
}

func QuitEx(delay uint32) TRet {
  return TRet(C.tk_quit_ex((C.uint32_t)(delay)));
}

func GetPointerX() int32 {
  return (int32)(C.tk_get_pointer_x());
}

func GetPointerY() int32 {
  return (int32)(C.tk_get_pointer_y());
}

func IsPointerPressed() bool {
  return (bool)(C.tk_is_pointer_pressed());
}

