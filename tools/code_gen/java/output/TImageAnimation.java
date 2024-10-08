package awtk;


/**
 * 图片动画控件，指定一个图片前缀，依次显示指定序列的图片，从而形成动画效果。
 *
 *图片序列可以用sequence指定，也可以用start\_index和end\_index指定一个范围。
 *
 *image\_animation\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于image\_animation\_t控件。
 *
 *在xml中使用"image\_animation"标签创建图片动画控件。如：
 *
 *```xml
 *<image_animation image="ani" start_index="1" end_index="9" auto_play="true" interval="50"
 *delay="100"/>
 *```
 *
 *> 更多用法请参考：
 *[image_animation.xml](https://github.com/zlgopen/awtk/blob/master/design/default/ui/image_animation.xml)
 *
 *在c代码中使用函数image\_animation\_create创建图片动画控件。如：
 *
 *
 *
 *> 完整示例请参考：
 *[image_animation
 *demo](https://github.com/zlgopen/awtk-c-demos/blob/master/demos/image_animation.c)
 *
 *可用通过style来设置控件的显示风格，如背景颜色和边框等等，不过一般情况并不需要。
 *
 */
public class TImageAnimation extends TWidget { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TImageAnimation(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TImageAnimation cast(long nativeObj) {
   return new TImageAnimation(nativeObj);
 }


  /**
   * 创建image_animation对象
   * 
   * @param parent 父控件
   * @param x x坐标
   * @param y y坐标
   * @param w 宽度
   * @param h 高度
   *
   * @return 对象。
   */
 public  static TWidget create(TWidget parent, int x, int y, int w, int h)  {
    return new TImageAnimation(image_animation_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


  /**
   * 设置是否循环播放。
   * 
   * @param loop 是否循环播放。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setLoop(boolean loop)  {
   return TRet.from(image_animation_set_loop(this != null ? (this.nativeObj) : 0, loop));
 }


  /**
   * 设置图片前缀。
   * 
   * @param image 图片前缀。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setImage(String image)  {
   return TRet.from(image_animation_set_image(this != null ? (this.nativeObj) : 0, image));
 }


  /**
   * 设置播放间隔时间(毫秒)。
   * 
   * @param interval 间隔时间(毫秒)。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setInterval(int interval)  {
   return TRet.from(image_animation_set_interval(this != null ? (this.nativeObj) : 0, interval));
 }


  /**
   * 设置延迟播放时间(仅适用于自动播放)。
   * 
   * @param delay 延迟播放时间(毫秒)。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setDelay(int delay)  {
   return TRet.from(image_animation_set_delay(this != null ? (this.nativeObj) : 0, delay));
 }


  /**
   * 设置是否自动播放。
   * 
   * @param auto_play 是否自动播放。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setAutoPlay(boolean auto_play)  {
   return TRet.from(image_animation_set_auto_play(this != null ? (this.nativeObj) : 0, auto_play));
 }


  /**
   * 设置播放序列。比如image为"fire"，sequence为"12223", 将依次播放"fire1", "fire2", "fire2", "fire2",
   *"fire3"。
   * 
   * @param sequence 播放序列。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setSequence(String sequence)  {
   return TRet.from(image_animation_set_sequence(this != null ? (this.nativeObj) : 0, sequence));
 }


  /**
   * 设置播放序列。比如image为"fire"，start_index为0, end_index为99, 将依次播放"fire0", ...,
   *"fire99"。
   *
   *若指定的图片不存在，则重复上一张图片。
   * 
   * @param start_index 图片起始序数。
   * @param end_index 图片结束序数。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setRangeSequence(int start_index, int end_index)  {
   return TRet.from(image_animation_set_range_sequence(this != null ? (this.nativeObj) : 0, start_index, end_index));
 }


  /**
   * 播放。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet play()  {
   return TRet.from(image_animation_play(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 停止(并重置index为-1)。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet stop()  {
   return TRet.from(image_animation_stop(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 暂停。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet pause()  {
   return TRet.from(image_animation_pause(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 手动切换到下一张图片。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet next()  {
   return TRet.from(image_animation_next(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 设置生成图片名的格式。
   *
   *XXX:生成图片名时，第一个参数是图片名前缀，第二个是序数，只能在此前提下设置格式。
   *
   *```
   *const char* format = image_animation->format ? image_animation->format : "%s%d";
   *tk_snprintf(name, TK_NAME_LEN, format, image_animation->image, image_animation->index);
   *```
   * 
   * @param format 格式。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setFormat(String format)  {
   return TRet.from(image_animation_set_format(this != null ? (this.nativeObj) : 0, format));
 }


  /**
   * 设置绘制完成后unload图片，以释放内存空间。
   * 
   * @param unload_after_paint 是否绘制完成后unload图片。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setUnloadAfterPaint(boolean unload_after_paint)  {
   return TRet.from(image_animation_set_unload_after_paint(this != null ? (this.nativeObj) : 0, unload_after_paint));
 }


  /**
   * 设置是否倒序播放。
   * 
   * @param reverse 是否倒序播放。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setReverse(boolean reverse)  {
   return TRet.from(image_animation_set_reverse(this != null ? (this.nativeObj) : 0, reverse));
 }


  /**
   * 设置结束播放后是否保持显示最后一帧。
   * 
   * @param show_when_done 是否继续显示最后一帧。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setShowWhenDone(boolean show_when_done)  {
   return TRet.from(image_animation_set_show_when_done(this != null ? (this.nativeObj) : 0, show_when_done));
 }


  /**
   * 转换为image_animation对象(供脚本语言使用)。
   * 
   * @param widget image_animation对象。
   *
   * @return image_animation对象。
   */
 public  static TImageAnimation cast(TWidget widget)  {
    return new TImageAnimation(image_animation_cast(widget != null ? (widget.nativeObj) : 0));
 }


  /**
   * 判断是否在播放。
   * 
   *
   * @return 返回TRUE表示是，否则表示否。
   */
 public  boolean isPlaying()  {
    return image_animation_is_playing(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 图片名称的前缀。
   *
   */
 public String getImage() {
   return image_animation_t_get_prop_image(this.nativeObj);
 }


  /**
   * 播放的序列，字符可选值为数字和英文大小写字母，字符可以重复。如：0123456789或者123123abcd。
   *
   */
 public String getSequence() {
   return image_animation_t_get_prop_sequence(this.nativeObj);
 }


  /**
   * 图片起始序数。
   *
   */
 public int getStartIndex() {
   return image_animation_t_get_prop_start_index(this.nativeObj);
 }


  /**
   * 图片结束序数。
   *
   */
 public int getEndIndex() {
   return image_animation_t_get_prop_end_index(this.nativeObj);
 }


  /**
   * 是否倒序播放。
   *
   */
 public boolean getReverse() {
   return image_animation_t_get_prop_reverse(this.nativeObj);
 }


  /**
   * 是否循环播放。
   *
   */
 public boolean getLoop() {
   return image_animation_t_get_prop_loop(this.nativeObj);
 }


  /**
   * 是否自动播放。
   *
   */
 public boolean getAutoPlay() {
   return image_animation_t_get_prop_auto_play(this.nativeObj);
 }


  /**
   * 绘制完成后unload图片，以释放内存空间。
   *
   */
 public boolean getUnloadAfterPaint() {
   return image_animation_t_get_prop_unload_after_paint(this.nativeObj);
 }


  /**
   * 索引到图片名转换时的格式，缺省为"%s%d"。
   *
   */
 public String getFormat() {
   return image_animation_t_get_prop_format(this.nativeObj);
 }


  /**
   * 每张图片播放的时间(毫秒)。
   *
   */
 public int getInterval() {
   return image_animation_t_get_prop_interval(this.nativeObj);
 }


  /**
   * 自动播放时延迟播放的时间(毫秒)。
   *
   */
 public int getDelay() {
   return image_animation_t_get_prop_delay(this.nativeObj);
 }


  /**
   * 结束后是否继续显示最后一帧。
   *
   */
 public boolean getShowWhenDone() {
   return image_animation_t_get_prop_show_when_done(this.nativeObj);
 }

static private native long image_animation_create(long parent, int x, int y, int w, int h);
static private native int image_animation_set_loop(long widget, boolean loop);
static private native int image_animation_set_image(long widget, String image);
static private native int image_animation_set_interval(long widget, int interval);
static private native int image_animation_set_delay(long widget, int delay);
static private native int image_animation_set_auto_play(long widget, boolean auto_play);
static private native int image_animation_set_sequence(long widget, String sequence);
static private native int image_animation_set_range_sequence(long widget, int start_index, int end_index);
static private native int image_animation_play(long widget);
static private native int image_animation_stop(long widget);
static private native int image_animation_pause(long widget);
static private native int image_animation_next(long widget);
static private native int image_animation_set_format(long widget, String format);
static private native int image_animation_set_unload_after_paint(long widget, boolean unload_after_paint);
static private native int image_animation_set_reverse(long widget, boolean reverse);
static private native int image_animation_set_show_when_done(long widget, boolean show_when_done);
static private native long image_animation_cast(long widget);
static private native boolean image_animation_is_playing(long widget);
static private native String image_animation_t_get_prop_image(long nativeObj);
static private native String image_animation_t_get_prop_sequence(long nativeObj);
static private native int image_animation_t_get_prop_start_index(long nativeObj);
static private native int image_animation_t_get_prop_end_index(long nativeObj);
static private native boolean image_animation_t_get_prop_reverse(long nativeObj);
static private native boolean image_animation_t_get_prop_loop(long nativeObj);
static private native boolean image_animation_t_get_prop_auto_play(long nativeObj);
static private native boolean image_animation_t_get_prop_unload_after_paint(long nativeObj);
static private native String image_animation_t_get_prop_format(long nativeObj);
static private native int image_animation_t_get_prop_interval(long nativeObj);
static private native int image_animation_t_get_prop_delay(long nativeObj);
static private native boolean image_animation_t_get_prop_show_when_done(long nativeObj);
};