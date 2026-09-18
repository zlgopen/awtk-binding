type TEvent struct {
  handle unsafe.Pointer
}

func TEventFromName(name string) int32 {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (int32)(C.event_from_name(aname));
}

func TEventRegisterCustomName(event_type int32, name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.event_register_custom_name((C.int32_t)(event_type), aname));
}

func TEventUnregisterCustomName(name string) TRet {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return TRet(C.event_unregister_custom_name(aname));
}

func TEventCast(event TEvent) TEvent {
  retObj := TEvent{}
  retObj.handle = unsafe.Pointer(C.event_cast((*C.event_t)(event.handle)))
  return retObj
}

func (this TEvent) GetType() uint32 {
  return (uint32)(C.event_get_type((*C.event_t)(this.handle)));
}

func TEventCreate(typex uint32) TEvent {
  retObj := TEvent{}
  retObj.handle = unsafe.Pointer(C.event_create((C.uint32_t)(typex)))
  return retObj
}

func (this TEvent) Destroy() TRet {
  return TRet(C.event_destroy((*C.event_t)(this.handle)));
}

func (this TEvent) GetSize() uint32 {
  return (uint32)((*C.event_t)(unsafe.Pointer(this.handle)).size);
}

func (this TEvent) GetTime() int64 {
  return (int64)((*C.event_t)(unsafe.Pointer(this.handle)).time);
}

func (this TEvent) GetTarget() unsafe.Pointer {
  return (unsafe.Pointer)((*C.event_t)(unsafe.Pointer(this.handle)).target);
}

