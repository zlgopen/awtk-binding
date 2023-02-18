type TAssetsManager struct {
  TEmitter
}

func TAssetsManagerInstance() TAssetsManager {
  retObj := TAssetsManager{}
  retObj.handle = unsafe.Pointer(C.assets_manager())
  return retObj
}

func (this TAssetsManager) SetTheme(theme string) TRet {
  atheme := C.CString(theme)
  defer C.free(unsafe.Pointer(atheme))
  return TRet(C.assets_manager_set_theme((*C.assets_manager_t)(this.handle), atheme));
}

func (this TAssetsManager) Ref(typex TAssetType, name string) TAssetInfo {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (TAssetInfo)(C.assets_manager_ref((*C.assets_manager_t)(this.handle), (C.asset_type_t)(typex), aname));
}

func (this TAssetsManager) RefEx(typex TAssetType, subtype uint16, name string) TAssetInfo {
  aname := C.CString(name)
  defer C.free(unsafe.Pointer(aname))
  return (TAssetInfo)(C.assets_manager_ref_ex((*C.assets_manager_t)(this.handle), (C.asset_type_t)(typex), (C.uint16_t)(subtype), aname));
}

func (this TAssetsManager) Unref(info TAssetInfo) TRet {
  return TRet(C.assets_manager_unref((*C.assets_manager_t)(this.handle), (*C.asset_info_t)(info.handle)));
}

