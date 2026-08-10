func TTimerRemove(timer_id uint32) TRet {
  return TRet(C.timer_remove((C.uint32_t)(timer_id)));
}

func TTimerReset(timer_id uint32) TRet {
  return TRet(C.timer_reset((C.uint32_t)(timer_id)));
}

func TTimerSuspend(timer_id uint32) TRet {
  return TRet(C.timer_suspend((C.uint32_t)(timer_id)));
}

func TTimerResume(timer_id uint32) TRet {
  return TRet(C.timer_resume((C.uint32_t)(timer_id)));
}

func TTimerModify(timer_id uint32, duration uint32) TRet {
  return TRet(C.timer_modify((C.uint32_t)(timer_id), (C.uint32_t)(duration)));
}

func TTimerModifyEx(timer_id uint32, duration uint32, reset_timer bool) TRet {
  return TRet(C.timer_modify_ex((C.uint32_t)(timer_id), (C.uint32_t)(duration), (C.bool_t)(reset_timer)));
}

