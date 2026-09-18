func TLogGetLogLevel() TTkLogLevel {
  return TTkLogLevel(C.log_get_log_level());
}

func TLogSetLogLevel(log_level TTkLogLevel) TRet {
  return TRet(C.log_set_log_level((C.tk_log_level_t)(log_level)));
}

