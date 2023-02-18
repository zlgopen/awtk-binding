type TAssetInfo struct {
  handle unsafe.Pointer
}

func (this TAssetInfo) GetType() uint16 {
  return (uint16)(C.asset_info_get_type((*C.asset_info_t)(this.handle)));
}

func (this TAssetInfo) GetName() string {
  return C.GoString(C.asset_info_get_name((*C.asset_info_t)(this.handle)));
}

func (this TAssetInfo) IsInRom() bool {
  return (bool)(C.asset_info_is_in_rom((*C.asset_info_t)(this.handle)));
}

func (this TAssetInfo) SetIsInRom(is_in_rom bool) TRet {
  return TRet(C.asset_info_set_is_in_rom((*C.asset_info_t)(this.handle), (C.bool_t)(is_in_rom)));
}

func (this TAssetInfo) GetSubtype() uint8 {
  return (uint8)((*C.asset_info_t)(unsafe.Pointer(this.handle)).subtype);
}

func (this TAssetInfo) GetFlags() uint8 {
  return (uint8)((*C.asset_info_t)(unsafe.Pointer(this.handle)).flags);
}

func (this TAssetInfo) GetSize() uint32 {
  return (uint32)((*C.asset_info_t)(unsafe.Pointer(this.handle)).size);
}

func (this TAssetInfo) GetRefcount() uint32 {
  return (uint32)((*C.asset_info_t)(unsafe.Pointer(this.handle)).refcount);
}

