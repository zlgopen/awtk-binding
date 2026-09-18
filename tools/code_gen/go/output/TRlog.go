type TRlog struct {
  handle unsafe.Pointer
}

func TRlogCreate(filename_pattern string, max_size uint32, buff_size uint32) TRlog {
  afilename_pattern := C.CString(filename_pattern)
  defer C.free(unsafe.Pointer(afilename_pattern))
  retObj := TRlog{}
  retObj.handle = unsafe.Pointer(C.rlog_create(afilename_pattern, (C.uint32_t)(max_size), (C.uint32_t)(buff_size)))
  return retObj
}

func (this TRlog) Write(str string) TRet {
  astr := C.CString(str)
  defer C.free(unsafe.Pointer(astr))
  return TRet(C.rlog_write((*C.rlog_t)(this.handle), astr));
}

