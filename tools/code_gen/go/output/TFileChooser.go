type TFileChooser struct {
  TEmitter
}

func TFileChooserCreate() TFileChooser {
  retObj := TFileChooser{}
  retObj.handle = unsafe.Pointer(C.file_chooser_create())
  return retObj
}

func (this TFileChooser) SetInitDir(init_dir string) TRet {
  ainit_dir := C.CString(init_dir)
  defer C.free(unsafe.Pointer(ainit_dir))
  return TRet(C.file_chooser_set_init_dir((*C.file_chooser_t)(this.handle), ainit_dir));
}

func (this TFileChooser) SetTopDir(top_dir string) TRet {
  atop_dir := C.CString(top_dir)
  defer C.free(unsafe.Pointer(atop_dir))
  return TRet(C.file_chooser_set_top_dir((*C.file_chooser_t)(this.handle), atop_dir));
}

func (this TFileChooser) SetFilter(filter string) TRet {
  afilter := C.CString(filter)
  defer C.free(unsafe.Pointer(afilter))
  return TRet(C.file_chooser_set_filter((*C.file_chooser_t)(this.handle), afilter));
}

func TFileChooserCast(chooser TFileChooser) TFileChooser {
  retObj := TFileChooser{}
  retObj.handle = unsafe.Pointer(C.file_chooser_cast((*C.file_chooser_t)(chooser.handle)))
  return retObj
}

func (this TFileChooser) ChooseFileForSave() TRet {
  return TRet(C.file_chooser_choose_file_for_save((*C.file_chooser_t)(this.handle)));
}

func (this TFileChooser) ChooseFileForOpen() TRet {
  return TRet(C.file_chooser_choose_file_for_open((*C.file_chooser_t)(this.handle)));
}

func (this TFileChooser) ChooseFolder() TRet {
  return TRet(C.file_chooser_choose_folder((*C.file_chooser_t)(this.handle)));
}

func (this TFileChooser) GetDir() string {
  return C.GoString(C.file_chooser_get_dir((*C.file_chooser_t)(this.handle)));
}

func (this TFileChooser) GetFilename() string {
  return C.GoString(C.file_chooser_get_filename((*C.file_chooser_t)(this.handle)));
}

func (this TFileChooser) IsAborted() bool {
  return (bool)(C.file_chooser_is_aborted((*C.file_chooser_t)(this.handle)));
}

