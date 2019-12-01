class SlideView extends Widget {
 public long nativeObj;

 public SlideView(long nativeObj) {
   super(nativeObj);
 }

 static public SlideView cast(long nativeObj) {
   return new SlideView(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new SlideView(slide_view_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new SlideView(slide_view_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setAutoPlay(int auto_play)  {
   return slide_view_set_auto_play(this.nativeObj, auto_play);
 }

 Ret setActive(int index)  {
   return slide_view_set_active(this.nativeObj, index);
 }

 Ret setVertical(boolean vertical)  {
   return slide_view_set_vertical(this.nativeObj, vertical);
 }

 Ret setAnimHint(String anim_hint)  {
   return slide_view_set_anim_hint(this.nativeObj, anim_hint);
 }

 Ret setLoop(boolean loop)  {
   return slide_view_set_loop(this.nativeObj, loop);
 }

 public boolean getVertical() {
   return slide_view_t_get_prop_vertical(this.nativeObj);
 }

 public int getAutoPlay() {
   return slide_view_t_get_prop_auto_play(this.nativeObj);
 }

 public boolean getLoop() {
   return slide_view_t_get_prop_loop(this.nativeObj);
 }

 public String getAnimHint() {
   return slide_view_t_get_prop_anim_hint(this.nativeObj);
 }

static private native long slide_view_create(long parent, int x, int y, int w, int h);
static private native long slide_view_cast(long widget);
static private native Ret slide_view_set_auto_play(long widget, int auto_play);
static private native Ret slide_view_set_active(long widget, int index);
static private native Ret slide_view_set_vertical(long widget, boolean vertical);
static private native Ret slide_view_set_anim_hint(long widget, String anim_hint);
static private native Ret slide_view_set_loop(long widget, boolean loop);
static private native boolean slide_view_t_get_prop_vertical(long nativeObj);
static private native int slide_view_t_get_prop_auto_play(long nativeObj);
static private native boolean slide_view_t_get_prop_loop(long nativeObj);
static private native String slide_view_t_get_prop_anim_hint(long nativeObj);
}

