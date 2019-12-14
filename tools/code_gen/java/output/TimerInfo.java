package awtk;


/**
 * 单个定时器的信息。
 *
 */
public class TimerInfo extends Object {
 public long nativeObj;

 public TimerInfo(long nativeObj) {
   super(nativeObj);
 }

 static public TimerInfo cast(long nativeObj) {
   return new TimerInfo(nativeObj);
 }


/**
 * 转换为timer_info对象(供脚本语言使用)。
 * 
 * @param timer timer_info对象。
 *
 * @return timer_info对象。
 */
 public  static TimerInfo cast(TimerInfo timer)  {
   return new TimerInfo(timer_info_cast(timer != null ? (timer.nativeObj) : 0));
 }


/**
 * 定时器回调函数的上下文
 *
 */
 public long getCtx() {
   return timer_info_t_get_prop_ctx(this.nativeObj);
 }


/**
 * 定时器的ID
 * 
 * 为TK\_INVALID\_ID时表示无效定时器。
 *
 */
 public int getId() {
   return timer_info_t_get_prop_id(this.nativeObj);
 }


/**
 * 当前时间(相对时间，单位为毫秒)。
 *
 */
 public long getNow() {
   return timer_info_t_get_prop_now(this.nativeObj);
 }

static private native long timer_info_cast(long timer);
static private native long timer_info_t_get_prop_ctx(long nativeObj);
static private native int timer_info_t_get_prop_id(long nativeObj);
static private native long timer_info_t_get_prop_now(long nativeObj);
}

