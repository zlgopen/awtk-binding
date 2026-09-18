type TGrid struct {
  TWidget
}

func TGridCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TGrid{}
  retObj.handle = unsafe.Pointer(C.grid_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TGridCast(widget TWidget) TGrid {
  retObj := TGrid{}
  retObj.handle = unsafe.Pointer(C.grid_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TGrid) SetRows(rows uint32) TRet {
  return TRet(C.grid_set_rows((*C.widget_t)(this.handle), (C.uint32_t)(rows)));
}

func (this TGrid) SetColumnsDefinition(columns_definition string) TRet {
  acolumns_definition := C.CString(columns_definition)
  defer C.free(unsafe.Pointer(acolumns_definition))
  return TRet(C.grid_set_columns_definition((*C.widget_t)(this.handle), acolumns_definition));
}

func (this TGrid) SetShowGrid(show_grid bool) TRet {
  return TRet(C.grid_set_show_grid((*C.widget_t)(this.handle), (C.bool_t)(show_grid)));
}

func (this TGrid) GetRows() uint32 {
  return (uint32)((*C.grid_t)(unsafe.Pointer(this.handle)).rows);
}

func (this TGrid) GetColumnsDefinition() string {
  return C.GoString((*C.grid_t)(unsafe.Pointer(this.handle)).columns_definition);
}

func (this TGrid) GetShowGrid() bool {
  return (bool)((*C.grid_t)(unsafe.Pointer(this.handle)).show_grid);
}

