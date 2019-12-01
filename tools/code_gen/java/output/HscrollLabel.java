class HscrollLabel extends Widget {
 public long nativeObj;

 public HscrollLabel(long nativeObj) {
   super(nativeObj);
 }

 static public HscrollLabel cast(long nativeObj) {
   return new HscrollLabel(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new HscrollLabel(hscroll_label_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setLull(int lull)  {
   return hscroll_label_set_lull(this.nativeObj, lull);
 }

 Ret setDuration(int duration)  {
   return hscroll_label_set_duration(this.nativeObj, duration);
 }

 Ret setOnlyFocus(boolean only_focus)  {
   return hscroll_label_set_only_focus(this.nativeObj, only_focus);
 }

 Ret setOnlyParentFocus(boolean only_parent_focus)  {
   return hscroll_label_set_only_parent_focus(this.nativeObj, only_parent_focus);
 }

 Ret setLoop(boolean loop)  {
   return hscroll_label_set_loop(this.nativeObj, loop);
 }

 Ret setYoyo(boolean yoyo)  {
   return hscroll_label_set_yoyo(this.nativeObj, yoyo);
 }

 Ret setEllipses(boolean ellipses)  {
   return hscroll_label_set_ellipses(this.nativeObj, ellipses);
 }

 Ret setXoffset(int xoffset)  {
   return hscroll_label_set_xoffset(this.nativeObj, xoffset);
 }

 Ret start()  {
   return hscroll_label_start(this.nativeObj);
 }

 Ret stop()  {
   return hscroll_label_stop(this.nativeObj);
 }

 static Widget cast(Widget widget)  {
   return new HscrollLabel(hscroll_label_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public boolean getOnlyFocus() {
   return hscroll_label_t_get_prop_only_focus(this.nativeObj);
 }

 public boolean getOnlyParentFocus() {
   return hscroll_label_t_get_prop_only_parent_focus(this.nativeObj);
 }

 public boolean getLoop() {
   return hscroll_label_t_get_prop_loop(this.nativeObj);
 }

 public boolean getYoyo() {
   return hscroll_label_t_get_prop_yoyo(this.nativeObj);
 }

 public boolean getEllipses() {
   return hscroll_label_t_get_prop_ellipses(this.nativeObj);
 }

 public int getLull() {
   return hscroll_label_t_get_prop_lull(this.nativeObj);
 }

 public int getDuration() {
   return hscroll_label_t_get_prop_duration(this.nativeObj);
 }

 public int getXoffset() {
   return hscroll_label_t_get_prop_xoffset(this.nativeObj);
 }

 public int getTextW() {
   return hscroll_label_t_get_prop_text_w(this.nativeObj);
 }

static private native long hscroll_label_create(long parent, int x, int y, int w, int h);
static private native Ret hscroll_label_set_lull(long widget, int lull);
static private native Ret hscroll_label_set_duration(long widget, int duration);
static private native Ret hscroll_label_set_only_focus(long widget, boolean only_focus);
static private native Ret hscroll_label_set_only_parent_focus(long widget, boolean only_parent_focus);
static private native Ret hscroll_label_set_loop(long widget, boolean loop);
static private native Ret hscroll_label_set_yoyo(long widget, boolean yoyo);
static private native Ret hscroll_label_set_ellipses(long widget, boolean ellipses);
static private native Ret hscroll_label_set_xoffset(long widget, int xoffset);
static private native Ret hscroll_label_start(long widget);
static private native Ret hscroll_label_stop(long widget);
static private native long hscroll_label_cast(long widget);
static private native boolean hscroll_label_t_get_prop_only_focus(long nativeObj);
static private native boolean hscroll_label_t_get_prop_only_parent_focus(long nativeObj);
static private native boolean hscroll_label_t_get_prop_loop(long nativeObj);
static private native boolean hscroll_label_t_get_prop_yoyo(long nativeObj);
static private native boolean hscroll_label_t_get_prop_ellipses(long nativeObj);
static private native int hscroll_label_t_get_prop_lull(long nativeObj);
static private native int hscroll_label_t_get_prop_duration(long nativeObj);
static private native int hscroll_label_t_get_prop_xoffset(long nativeObj);
static private native int hscroll_label_t_get_prop_text_w(long nativeObj);
}

