package awtk;


/**
 * 获取当前时间的函数。
 *这里的当前时间是相对的，在嵌入式系统一般相对于开机时间(毫秒)。
 *它本身并没有任何意义，一般用来计算时间间隔，如实现定时器和动画等等。
 *
 */
public class TTimeNow { 

  /**
   * 获取当前时间(秒)。
   *
   *备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。
   * 
   *
   * @return 返回当前时间(秒)。
   */
 public  static long s()  {
    return time_now_s();
 }


  /**
   * 获取当前时间(毫秒)。
   *
   *备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。
   * 
   *
   * @return 返回当前时间(毫秒)。
   */
 public  static long ms()  {
    return time_now_ms();
 }


  /**
   * 获取当前时间(微秒)。
   *
   *备注: 时间本身并不代表任何时间系，一般用来计算时间间隔。
   * 
   *
   * @return 返回当前时间(微秒)。
   */
 public  static long us()  {
    return time_now_us();
 }

static private native long time_now_s();
static private native long time_now_ms();
static private native long time_now_us();
};