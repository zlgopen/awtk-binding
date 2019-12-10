package awtk;


/**
 * 模拟时钟控件。
 * time\_clock\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于time\_clock\_t控件。
 * 在xml中使用"time\_clock"标签创建模拟时钟控件。如：
 * ```xml
 * <time_clock x="c" y="m" w="300" h="300" bg_image="clock_bg" image="clock"
 * hour_image="clock_hour" minute_image="clock_minute" second_image="clock_second"/>
 * ```
 * 更多用法请参考：[time\_clock.xml](
 * https://github.com/zlgopen/awtk/blob/master/demos/assets/default/raw/ui/time_clock.xml)
 * 在c代码中使用函数time\_clock\_create创建模拟时钟控件。如：
 * 完整示例请参考：[time_clock demo](
 * https://github.com/zlgopen/awtk-c-demos/blob/master/demos/time_clock.c)
 * time\_clock一般不需要设置style。
 * 
 *
 */
public class TimeClock extends Widget {
 public TimeClock(long nativeObj) {
   super(nativeObj);
 }

 static public TimeClock cast(long nativeObj) {
   return new TimeClock(nativeObj);
 }


/**
 * 创建time_clock对象
 * 
 * 
 * @param parent 父控件
 * @param x x坐标
 * @param y y坐标
 * @param w 宽度
 * @param h 高度
 *
 * @returns 对象。
 */
 public  static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new TimeClock(time_clock_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


/**
 * 转换为time_clock对象(供脚本语言使用)。
 * 
 * 
 * @param widget time_clock对象。
 *
 * @returns time_clock对象。
 */
 public  static Widget cast(Widget widget)  {
   return new TimeClock(time_clock_cast(widget != null ? (widget.nativeObj) : 0));
 }


/**
 * 设置小时的值。
 * 
 * 
 * @param widget 控件对象。
 * @param hour 小时的值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setHour(int hour)  {
   return Ret.from(time_clock_set_hour(this.nativeObj, hour));
 }


/**
 * 设置分钟的值。
 * 
 * 
 * @param widget 控件对象。
 * @param minute 分钟的值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setMinute(int minute)  {
   return Ret.from(time_clock_set_minute(this.nativeObj, minute));
 }


/**
 * 设置秒的值。
 * 
 * 
 * @param widget 控件对象。
 * @param second 秒的值。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setSecond(int second)  {
   return Ret.from(time_clock_set_second(this.nativeObj, second));
 }


/**
 * 设置小时的图片。
 * 
 * 
 * @param widget 控件对象。
 * @param hour 小时的图片。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setHourImage(String hour)  {
   return Ret.from(time_clock_set_hour_image(this.nativeObj, hour));
 }


/**
 * 设置分钟的图片。
 * 
 * 
 * @param widget 控件对象。
 * @param minute_image 分钟的图片。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setMinuteImage(String minute_image)  {
   return Ret.from(time_clock_set_minute_image(this.nativeObj, minute_image));
 }


/**
 * 设置秒的图片。
 * 
 * 
 * @param widget 控件对象。
 * @param second_image 秒的图片。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setSecondImage(String second_image)  {
   return Ret.from(time_clock_set_second_image(this.nativeObj, second_image));
 }


/**
 * 设置背景图片。
 * 
 * 
 * @param widget 控件对象。
 * @param bg_image 背景图片。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setBgImage(String bg_image)  {
   return Ret.from(time_clock_set_bg_image(this.nativeObj, bg_image));
 }


/**
 * 设置中心图片。
 * 
 * 
 * @param widget 控件对象。
 * @param image 图片。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setImage(String image)  {
   return Ret.from(time_clock_set_image(this.nativeObj, image));
 }


/**
 * 设置小时指针的旋转锚点。
 * 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
 * 
 * 
 * @param widget 控件对象。
 * @param anchor_x 指针的锚点坐标x。
 * @param anchor_y 指针的锚点坐标y。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setHourAnchor(String anchor_x, String anchor_y)  {
   return Ret.from(time_clock_set_hour_anchor(this.nativeObj, anchor_x, anchor_y));
 }


/**
 * 设置分钟指针的旋转锚点。
 * 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
 * 
 * 
 * @param widget 控件对象。
 * @param anchor_x 指针的锚点坐标x。
 * @param anchor_y 指针的锚点坐标y。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setMinuteAnchor(String anchor_x, String anchor_y)  {
   return Ret.from(time_clock_set_minute_anchor(this.nativeObj, anchor_x, anchor_y));
 }


/**
 * 设置秒钟指针的旋转锚点。
 * 后面加上px为像素点，不加px为相对百分比坐标0.0f到1.0f
 * 
 * 
 * @param widget 控件对象。
 * @param anchor_x 指针的锚点坐标x。
 * @param anchor_y 指针的锚点坐标y。
 *
 * @returns 返回RET_OK表示成功，否则表示失败。
 */
 public  Ret setSecondAnchor(String anchor_x, String anchor_y)  {
   return Ret.from(time_clock_set_second_anchor(this.nativeObj, anchor_x, anchor_y));
 }

 public int getHour() {
   return time_clock_t_get_prop_hour(this.nativeObj);
 }

 public int getMinute() {
   return time_clock_t_get_prop_minute(this.nativeObj);
 }

 public int getSecond() {
   return time_clock_t_get_prop_second(this.nativeObj);
 }

 public String getImage() {
   return time_clock_t_get_prop_image(this.nativeObj);
 }

 public String getBgImage() {
   return time_clock_t_get_prop_bg_image(this.nativeObj);
 }

 public String getHourImage() {
   return time_clock_t_get_prop_hour_image(this.nativeObj);
 }

 public String getMinuteImage() {
   return time_clock_t_get_prop_minute_image(this.nativeObj);
 }

 public String getSecondImage() {
   return time_clock_t_get_prop_second_image(this.nativeObj);
 }

 public String getHourAnchorX() {
   return time_clock_t_get_prop_hour_anchor_x(this.nativeObj);
 }

 public String getHourAnchorY() {
   return time_clock_t_get_prop_hour_anchor_y(this.nativeObj);
 }

 public String getMinuteAnchorX() {
   return time_clock_t_get_prop_minute_anchor_x(this.nativeObj);
 }

 public String getMinuteAnchorY() {
   return time_clock_t_get_prop_minute_anchor_y(this.nativeObj);
 }

 public String getSecondAnchorX() {
   return time_clock_t_get_prop_second_anchor_x(this.nativeObj);
 }

 public String getSecondAnchorY() {
   return time_clock_t_get_prop_second_anchor_y(this.nativeObj);
 }

static private native long time_clock_create(long parent, int x, int y, int w, int h);
static private native long time_clock_cast(long widget);
static private native int time_clock_set_hour(long widget, int hour);
static private native int time_clock_set_minute(long widget, int minute);
static private native int time_clock_set_second(long widget, int second);
static private native int time_clock_set_hour_image(long widget, String hour);
static private native int time_clock_set_minute_image(long widget, String minute_image);
static private native int time_clock_set_second_image(long widget, String second_image);
static private native int time_clock_set_bg_image(long widget, String bg_image);
static private native int time_clock_set_image(long widget, String image);
static private native int time_clock_set_hour_anchor(long widget, String anchor_x, String anchor_y);
static private native int time_clock_set_minute_anchor(long widget, String anchor_x, String anchor_y);
static private native int time_clock_set_second_anchor(long widget, String anchor_x, String anchor_y);
static private native int time_clock_t_get_prop_hour(long nativeObj);
static private native int time_clock_t_get_prop_minute(long nativeObj);
static private native int time_clock_t_get_prop_second(long nativeObj);
static private native String time_clock_t_get_prop_image(long nativeObj);
static private native String time_clock_t_get_prop_bg_image(long nativeObj);
static private native String time_clock_t_get_prop_hour_image(long nativeObj);
static private native String time_clock_t_get_prop_minute_image(long nativeObj);
static private native String time_clock_t_get_prop_second_image(long nativeObj);
static private native String time_clock_t_get_prop_hour_anchor_x(long nativeObj);
static private native String time_clock_t_get_prop_hour_anchor_y(long nativeObj);
static private native String time_clock_t_get_prop_minute_anchor_x(long nativeObj);
static private native String time_clock_t_get_prop_minute_anchor_y(long nativeObj);
static private native String time_clock_t_get_prop_second_anchor_x(long nativeObj);
static private native String time_clock_t_get_prop_second_anchor_y(long nativeObj);
}

