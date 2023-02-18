func TIdleRemove(idle_id uint32) TRet {
  return TRet(C.idle_remove((C.uint32_t)(idle_id)));
}

func TIdleRemoveAllByCtx(ctx unsafe.Pointer) TRet {
  return TRet(C.idle_remove_all_by_ctx((unsafe.Pointer)(ctx)));
}

