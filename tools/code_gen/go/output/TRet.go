type TRet int
const (
  RET_OK TRet = C.RET_OK
  RET_OOM TRet = C.RET_OOM
  RET_FAIL TRet = C.RET_FAIL
  RET_NOT_IMPL TRet = C.RET_NOT_IMPL
  RET_QUIT TRet = C.RET_QUIT
  RET_FOUND TRet = C.RET_FOUND
  RET_BUSY TRet = C.RET_BUSY
  RET_REMOVE TRet = C.RET_REMOVE
  RET_REPEAT TRet = C.RET_REPEAT
  RET_NOT_FOUND TRet = C.RET_NOT_FOUND
  RET_DONE TRet = C.RET_DONE
  RET_STOP TRet = C.RET_STOP
  RET_SKIP TRet = C.RET_SKIP
  RET_CONTINUE TRet = C.RET_CONTINUE
  RET_OBJECT_CHANGED TRet = C.RET_OBJECT_CHANGED
  RET_ITEMS_CHANGED TRet = C.RET_ITEMS_CHANGED
  RET_BAD_PARAMS TRet = C.RET_BAD_PARAMS
  RET_TIMEOUT TRet = C.RET_TIMEOUT
  RET_CRC TRet = C.RET_CRC
  RET_IO TRet = C.RET_IO
  RET_EOS TRet = C.RET_EOS
  RET_NOT_MODIFIED TRet = C.RET_NOT_MODIFIED
)