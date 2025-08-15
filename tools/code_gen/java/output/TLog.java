package awtk;


/**
 * log。
 *
 */
public class TLog { 

  /**
   * 获取log的级别。
   * 
   *
   * @return 返回log的级别。
   */
 public  static TTkLogLevel getLogLevel()  {
   return TTkLogLevel.from(log_get_log_level());
 }


  /**
   * 设置log的级别。
   * 
   * @param log_level log的级别。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet setLogLevel(TTkLogLevel log_level)  {
   return TRet.from(log_set_log_level(log_level.value()));
 }

static private native int log_get_log_level();
static private native int log_set_log_level(int log_level);
};