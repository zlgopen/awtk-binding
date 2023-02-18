type TValue struct {
  handle unsafe.Pointer
}

func (this TValue) SetBool(value bool) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_bool((*C.value_t)(this.handle), (C.bool_t)(value)))
  return retObj
}

func (this TValue) Bool() bool {
  return (bool)(C.value_bool((*C.value_t)(this.handle)));
}

func (this TValue) SetInt8(value int8) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_int8((*C.value_t)(this.handle), (C.int8_t)(value)))
  return retObj
}

func (this TValue) Int8() int8 {
  return (int8)(C.value_int8((*C.value_t)(this.handle)));
}

func (this TValue) SetUint8(value uint8) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_uint8((*C.value_t)(this.handle), (C.uint8_t)(value)))
  return retObj
}

func (this TValue) Uint8() uint8 {
  return (uint8)(C.value_uint8((*C.value_t)(this.handle)));
}

func (this TValue) SetInt16(value int16) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_int16((*C.value_t)(this.handle), (C.int16_t)(value)))
  return retObj
}

func (this TValue) Int16() int16 {
  return (int16)(C.value_int16((*C.value_t)(this.handle)));
}

func (this TValue) SetUint16(value uint16) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_uint16((*C.value_t)(this.handle), (C.uint16_t)(value)))
  return retObj
}

func (this TValue) Uint16() uint16 {
  return (uint16)(C.value_uint16((*C.value_t)(this.handle)));
}

func (this TValue) SetInt32(value int32) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_int32((*C.value_t)(this.handle), (C.int32_t)(value)))
  return retObj
}

func (this TValue) Int32() int32 {
  return (int32)(C.value_int32((*C.value_t)(this.handle)));
}

func (this TValue) SetUint32(value uint32) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_uint32((*C.value_t)(this.handle), (C.uint32_t)(value)))
  return retObj
}

func (this TValue) SetInt64(value int64) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_int64((*C.value_t)(this.handle), (C.int64_t)(value)))
  return retObj
}

func (this TValue) Int64() int64 {
  return (int64)(C.value_int64((*C.value_t)(this.handle)));
}

func (this TValue) SetUint64(value int64) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_uint64((*C.value_t)(this.handle), (C.uint64_t)(value)))
  return retObj
}

func (this TValue) Uint64() int64 {
  return (int64)(C.value_uint64((*C.value_t)(this.handle)));
}

func (this TValue) SetFloat(value float64) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_float((*C.value_t)(this.handle), (C.float_t)(value)))
  return retObj
}

func (this TValue) Float32() float64 {
  return (float64)(C.value_float32((*C.value_t)(this.handle)));
}

func (this TValue) SetFloat64(value float64) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_double((*C.value_t)(this.handle), (C.double)(value)))
  return retObj
}

func (this TValue) Float64() float64 {
  return (float64)(C.value_double((*C.value_t)(this.handle)));
}

func (this TValue) SetStr(value string) TValue {
  avalue := C.CString(value)
  defer C.free(unsafe.Pointer(avalue))
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_dup_str((*C.value_t)(this.handle), avalue))
  return retObj
}

func (this TValue) Str() string {
  return C.GoString(C.value_str((*C.value_t)(this.handle)));
}

func (this TValue) StrEx(buff string, size uint32) string {
  abuff := C.CString(buff)
  defer C.free(unsafe.Pointer(abuff))
  return C.GoString(C.value_str_ex((*C.value_t)(this.handle), abuff, (C.uint32_t)(size)));
}

func (this TValue) IsNull() bool {
  return (bool)(C.value_is_null((*C.value_t)(this.handle)));
}

func (this TValue) SetInt(value int32) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_int((*C.value_t)(this.handle), (C.int32_t)(value)))
  return retObj
}

func (this TValue) SetObject(value TObject) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_object((*C.value_t)(this.handle), (*C.object_t)(value.handle)))
  return retObj
}

func (this TValue) Object() TObject {
  retObj := TObject{}
  retObj.handle = unsafe.Pointer(C.value_object((*C.value_t)(this.handle)))
  return retObj
}

func (this TValue) SetToken(value uint32) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_set_token((*C.value_t)(this.handle), (C.uint32_t)(value)))
  return retObj
}

func (this TValue) Token() uint32 {
  return (uint32)(C.value_token((*C.value_t)(this.handle)));
}

func TValueCreate() TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_create())
  return retObj
}

func (this TValue) Destroy() TRet {
  return TRet(C.value_destroy((*C.value_t)(this.handle)));
}

func (this TValue) Reset() TRet {
  return TRet(C.value_reset((*C.value_t)(this.handle)));
}

func TValueCast(value TValue) TValue {
  retObj := TValue{}
  retObj.handle = unsafe.Pointer(C.value_cast((*C.value_t)(value.handle)))
  return retObj
}

func (this TValue) Id() string {
  return C.GoString(C.value_id((*C.value_t)(this.handle)));
}

func (this TValue) Func() unsafe.Pointer {
  return (unsafe.Pointer)(C.value_func((*C.value_t)(this.handle)));
}

func (this TValue) FuncDef() unsafe.Pointer {
  return (unsafe.Pointer)(C.value_func_def((*C.value_t)(this.handle)));
}

func (this TValue) Bitmap() unsafe.Pointer {
  return (unsafe.Pointer)(C.value_bitmap((*C.value_t)(this.handle)));
}

func (this TValue) Rect() TRect {
  retObj := TRect{}
  retObj.handle = unsafe.Pointer(C.value_rect((*C.value_t)(this.handle)))
  return retObj
}

