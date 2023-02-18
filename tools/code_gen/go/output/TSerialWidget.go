type TSerialWidget struct {
  TWidget
}

func TSerialWidgetCreate(parent TWidget, x int, y int, w int, h int) TWidget {
  retObj := TSerialWidget{}
  retObj.handle = unsafe.Pointer(C.serial_widget_create((*C.widget_t)(parent.handle), (C.xy_t)(x), (C.xy_t)(y), (C.wh_t)(w), (C.wh_t)(h)))
  return retObj.TWidget
}

func TSerialWidgetCast(widget TWidget) TSerialWidget {
  retObj := TSerialWidget{}
  retObj.handle = unsafe.Pointer(C.serial_widget_cast((*C.widget_t)(widget.handle)))
  return retObj
}

func (this TSerialWidget) SetBaudrate(baudrate uint32) TRet {
  return TRet(C.serial_widget_set_baudrate((*C.widget_t)(this.handle), (C.uint32_t)(baudrate)));
}

func (this TSerialWidget) SetDevice(device string) TRet {
  adevice := C.CString(device)
  defer C.free(unsafe.Pointer(adevice))
  return TRet(C.serial_widget_set_device((*C.widget_t)(this.handle), adevice));
}

func (this TSerialWidget) SetBytesize(bytesize uint32) TRet {
  return TRet(C.serial_widget_set_bytesize((*C.widget_t)(this.handle), (C.uint32_t)(bytesize)));
}

func (this TSerialWidget) SetParity(parity uint32) TRet {
  return TRet(C.serial_widget_set_parity((*C.widget_t)(this.handle), (C.uint32_t)(parity)));
}

func (this TSerialWidget) SetStopbits(stopbits uint32) TRet {
  return TRet(C.serial_widget_set_stopbits((*C.widget_t)(this.handle), (C.uint32_t)(stopbits)));
}

func (this TSerialWidget) SetFlowcontrol(flowcontrol uint32) TRet {
  return TRet(C.serial_widget_set_flowcontrol((*C.widget_t)(this.handle), (C.uint32_t)(flowcontrol)));
}

func (this TSerialWidget) SetCheckInterval(check_interval uint32) TRet {
  return TRet(C.serial_widget_set_check_interval((*C.widget_t)(this.handle), (C.uint32_t)(check_interval)));
}

func (this TSerialWidget) GetDevice() string {
  return C.GoString((*C.serial_widget_t)(unsafe.Pointer(this.handle)).device);
}

func (this TSerialWidget) GetBaudrate() uint32 {
  return (uint32)((*C.serial_widget_t)(unsafe.Pointer(this.handle)).baudrate);
}

func (this TSerialWidget) GetBytesize() uint32 {
  return (uint32)((*C.serial_widget_t)(unsafe.Pointer(this.handle)).bytesize);
}

func (this TSerialWidget) GetParity() uint32 {
  return (uint32)((*C.serial_widget_t)(unsafe.Pointer(this.handle)).parity);
}

func (this TSerialWidget) GetStopbits() uint32 {
  return (uint32)((*C.serial_widget_t)(unsafe.Pointer(this.handle)).stopbits);
}

func (this TSerialWidget) GetFlowcontrol() uint32 {
  return (uint32)((*C.serial_widget_t)(unsafe.Pointer(this.handle)).flowcontrol);
}

func (this TSerialWidget) GetCheckInterval() uint32 {
  return (uint32)((*C.serial_widget_t)(unsafe.Pointer(this.handle)).check_interval);
}

