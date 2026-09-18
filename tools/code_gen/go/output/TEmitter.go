type TEmitter struct {
  handle unsafe.Pointer
}

func TEmitterCreate() TEmitter {
  retObj := TEmitter{}
  retObj.handle = unsafe.Pointer(C.emitter_create())
  return retObj
}

func (this TEmitter) Dispatch(e TEvent) TRet {
  return TRet(C.emitter_dispatch((*C.emitter_t)(this.handle), (*C.event_t)(e.handle)));
}

func (this TEmitter) DispatchSimpleEvent(typex uint32) TRet {
  return TRet(C.emitter_dispatch_simple_event((*C.emitter_t)(this.handle), (C.uint32_t)(typex)));
}

func (this TEmitter) Off(id uint32) TRet {
  return TRet(C.emitter_off((*C.emitter_t)(this.handle), (C.uint32_t)(id)));
}

func (this TEmitter) Enable() TRet {
  return TRet(C.emitter_enable((*C.emitter_t)(this.handle)));
}

func (this TEmitter) Disable() TRet {
  return TRet(C.emitter_disable((*C.emitter_t)(this.handle)));
}

func (this TEmitter) Destroy() TRet {
  return TRet(C.emitter_destroy((*C.emitter_t)(this.handle)));
}

func TEmitterCast(emitter TEmitter) TEmitter {
  retObj := TEmitter{}
  retObj.handle = unsafe.Pointer(C.emitter_cast((*C.emitter_t)(emitter.handle)))
  return retObj
}

