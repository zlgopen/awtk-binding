type TImageManager struct {
  handle unsafe.Pointer
}

func TImageManagerInstance() TImageManager {
  retObj := TImageManager{}
  retObj.handle = unsafe.Pointer(C.image_manager())
  return retObj
}

func (this TImageManager) GetBitmap(name string, image TBitmap) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.image_manager_get_bitmap((*C.image_manager_t)(this.handle), aname, (*C.bitmap_t)(image.handle)));
}

func (this TImageManager) Preload(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.image_manager_preload((*C.image_manager_t)(this.handle), aname));
}

