func TIdleRemove(idle_id uint32) TRet {
  return TRet(C.idle_remove((C.uint32_t)(idle_id)));
}

