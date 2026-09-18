type TFileBrowserView struct {
  TWidget
}

func TFileBrowserViewCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TFileBrowserView{}
  retObj.handle = unsafe.Pointer(C.file_browser_view_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TFileBrowserViewCast(widget TWidget) TFileBrowserView {
  retObj := TFileBrowserView{}
  retObj.handle = unsafe.Pointer(C.file_browser_view_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TFileBrowserView) SetInitDir(init_dir string) TRet {
  ainit_dir := C.CString(init_dir)
  defer C.free(unsafe.Pointer(ainit_dir))
  return TRet(C.file_browser_view_set_init_dir((*C.widget_t)(this.handle), ainit_dir));
}

func (this TFileBrowserView) SetTopDir(top_dir string) TRet {
  atop_dir := C.CString(top_dir)
  defer C.free(unsafe.Pointer(atop_dir))
  return TRet(C.file_browser_view_set_top_dir((*C.widget_t)(this.handle), atop_dir));
}

func (this TFileBrowserView) SetFilter(filter string) TRet {
  afilter := C.CString(filter)
  defer C.free(unsafe.Pointer(afilter))
  return TRet(C.file_browser_view_set_filter((*C.widget_t)(this.handle), afilter));
}

func (this TFileBrowserView) Reload() TRet {
  return TRet(C.file_browser_view_reload((*C.widget_t)(this.handle)));
}

func (this TFileBrowserView) SetIgnoreHiddenFiles(ignore_hidden_files bool) TRet {
  return TRet(C.file_browser_view_set_ignore_hidden_files((*C.widget_t)(this.handle), (C.bool_t)(ignore_hidden_files)));
}

func (this TFileBrowserView) SetSortAscending(sort_ascending bool) TRet {
  return TRet(C.file_browser_view_set_sort_ascending((*C.widget_t)(this.handle), (C.bool_t)(sort_ascending)));
}

func (this TFileBrowserView) SetShowCheckButton(show_check_button bool) TRet {
  return TRet(C.file_browser_view_set_show_check_button((*C.widget_t)(this.handle), (C.bool_t)(show_check_button)));
}

func (this TFileBrowserView) SetSortBy(sort_by string) TRet {
  asort_by := C.CString(sort_by)
  defer C.free(unsafe.Pointer(asort_by))
  return TRet(C.file_browser_view_set_sort_by((*C.widget_t)(this.handle), asort_by));
}

func (this TFileBrowserView) SetOddItemStyle(odd_item_style string) TRet {
  aodd_item_style := C.CString(odd_item_style)
  defer C.free(unsafe.Pointer(aodd_item_style))
  return TRet(C.file_browser_view_set_odd_item_style((*C.widget_t)(this.handle), aodd_item_style));
}

func (this TFileBrowserView) SetEvenItemStyle(even_item_style string) TRet {
  aeven_item_style := C.CString(even_item_style)
  defer C.free(unsafe.Pointer(aeven_item_style))
  return TRet(C.file_browser_view_set_even_item_style((*C.widget_t)(this.handle), aeven_item_style));
}

func (this TFileBrowserView) GetCwd() string {
  return C.GoString(C.file_browser_view_get_cwd((*C.widget_t)(this.handle)));
}

func (this TFileBrowserView) CreateDir(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.file_browser_view_create_dir((*C.widget_t)(this.handle), aname));
}

func (this TFileBrowserView) CreateFile(name string, data string, size uint32) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  adata := C.CString(data)
  defer C.free(unsafe.Pointer(adata))
  return TRet(C.file_browser_view_create_file((*C.widget_t)(this.handle), aname, adata, (C.uint32_t)(size)));
}

func (this TFileBrowserView) GetInitDir() string {
  return C.GoString((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).init_dir);
}

func (this TFileBrowserView) GetTopDir() string {
  return C.GoString((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).top_dir);
}

func (this TFileBrowserView) GetFilter() string {
  return C.GoString((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).filter);
}

func (this TFileBrowserView) GetIgnoreHiddenFiles() bool {
  return (bool)((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).ignore_hidden_files);
}

func (this TFileBrowserView) GetSortAscending() bool {
  return (bool)((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).sort_ascending);
}

func (this TFileBrowserView) GetShowCheckButton() bool {
  return (bool)((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).show_check_button);
}

func (this TFileBrowserView) GetSortBy() string {
  return C.GoString((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).sort_by);
}

func (this TFileBrowserView) GetOddItemStyle() string {
  return C.GoString((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).odd_item_style);
}

func (this TFileBrowserView) GetEvenItemStyle() string {
  return C.GoString((*C.file_browser_view_t)(unsafe.Pointer(this.handle)).even_item_style);
}

