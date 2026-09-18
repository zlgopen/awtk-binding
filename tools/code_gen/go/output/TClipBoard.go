type TClipBoard struct {
  handle unsafe.Pointer
}

func TClipBoardSetText(text string) TRet {
  atext := C.CString(text)
  defer C.free(unsafe.Pointer(atext))
  return TRet(C.clip_board_set_text(atext));
}

func TClipBoardGetText() string {
  return C.GoString(C.clip_board_get_text());
}

