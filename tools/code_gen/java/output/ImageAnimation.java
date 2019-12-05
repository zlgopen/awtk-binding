package awtk;

public class ImageAnimation extends Widget {
 public ImageAnimation(long nativeObj) {
   super(nativeObj);
 }

 static public ImageAnimation cast(long nativeObj) {
   return new ImageAnimation(nativeObj);
 }

 public  static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ImageAnimation(image_animation_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 public  int setLoop(boolean loop)  {
   return image_animation_set_loop(this.nativeObj, loop);
 }

 public  int setImage(String image)  {
   return image_animation_set_image(this.nativeObj, image);
 }

 public  int setInterval(int interval)  {
   return image_animation_set_interval(this.nativeObj, interval);
 }

 public  int setDelay(int delay)  {
   return image_animation_set_delay(this.nativeObj, delay);
 }

 public  int setAutoPlay(boolean auto_play)  {
   return image_animation_set_auto_play(this.nativeObj, auto_play);
 }

 public  int setSequence(String sequence)  {
   return image_animation_set_sequence(this.nativeObj, sequence);
 }

 public  int setRangeSequence(int start_index, int end_index)  {
   return image_animation_set_range_sequence(this.nativeObj, start_index, end_index);
 }

 public  int play()  {
   return image_animation_play(this.nativeObj);
 }

 public  int stop()  {
   return image_animation_stop(this.nativeObj);
 }

 public  int pause()  {
   return image_animation_pause(this.nativeObj);
 }

 public  int next()  {
   return image_animation_next(this.nativeObj);
 }

 public  int setFormat(String format)  {
   return image_animation_set_format(this.nativeObj, format);
 }

 public  int setUnloadAfterPaint(boolean unload_after_paint)  {
   return image_animation_set_unload_after_paint(this.nativeObj, unload_after_paint);
 }

 public  static Widget cast(Widget widget)  {
   return new ImageAnimation(image_animation_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public String getImage() {
   return image_animation_t_get_prop_image(this.nativeObj);
 }

 public String getSequence() {
   return image_animation_t_get_prop_sequence(this.nativeObj);
 }

 public int getStartIndex() {
   return image_animation_t_get_prop_start_index(this.nativeObj);
 }

 public int getEndIndex() {
   return image_animation_t_get_prop_end_index(this.nativeObj);
 }

 public boolean getLoop() {
   return image_animation_t_get_prop_loop(this.nativeObj);
 }

 public boolean getAutoPlay() {
   return image_animation_t_get_prop_auto_play(this.nativeObj);
 }

 public boolean getUnloadAfterPaint() {
   return image_animation_t_get_prop_unload_after_paint(this.nativeObj);
 }

 public String getFormat() {
   return image_animation_t_get_prop_format(this.nativeObj);
 }

 public int getInterval() {
   return image_animation_t_get_prop_interval(this.nativeObj);
 }

 public int getDelay() {
   return image_animation_t_get_prop_delay(this.nativeObj);
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
static private native long image_animation_cast(long widget);
static private native String image_animation_t_get_prop_image(long nativeObj);
static private native String image_animation_t_get_prop_sequence(long nativeObj);
static private native int image_animation_t_get_prop_start_index(long nativeObj);
static private native int image_animation_t_get_prop_end_index(long nativeObj);
static private native boolean image_animation_t_get_prop_loop(long nativeObj);
static private native boolean image_animation_t_get_prop_auto_play(long nativeObj);
static private native boolean image_animation_t_get_prop_unload_after_paint(long nativeObj);
static private native String image_animation_t_get_prop_format(long nativeObj);
static private native int image_animation_t_get_prop_interval(long nativeObj);
static private native int image_animation_t_get_prop_delay(long nativeObj);
}

