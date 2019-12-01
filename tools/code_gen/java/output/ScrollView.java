class ScrollView extends Widget {
 public long nativeObj;

 public ScrollView(long nativeObj) {
   super(nativeObj);
 }

 static public ScrollView cast(long nativeObj) {
   return new ScrollView(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ScrollView(scroll_view_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new ScrollView(scroll_view_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setVirtualW(int w)  {
   return scroll_view_set_virtual_w(this.nativeObj, w);
 }

 Ret setVirtualH(int h)  {
   return scroll_view_set_virtual_h(this.nativeObj, h);
 }

 Ret setXslidable(boolean xslidable)  {
   return scroll_view_set_xslidable(this.nativeObj, xslidable);
 }

 Ret setYslidable(boolean yslidable)  {
   return scroll_view_set_yslidable(this.nativeObj, yslidable);
 }

 Ret setOffset(int xoffset, int yoffset)  {
   return scroll_view_set_offset(this.nativeObj, xoffset, yoffset);
 }

 Ret scrollTo(int xoffset_end, int yoffset_end, int duration)  {
   return scroll_view_scroll_to(this.nativeObj, xoffset_end, yoffset_end, duration);
 }

 Ret scrollDeltaTo(int xoffset_delta, int yoffset_delta, int duration)  {
   return scroll_view_scroll_delta_to(this.nativeObj, xoffset_delta, yoffset_delta, duration);
 }

 public int getVirtualW() {
   return scroll_view_t_get_prop_virtual_w(this.nativeObj);
 }

 public int getVirtualH() {
   return scroll_view_t_get_prop_virtual_h(this.nativeObj);
 }

 public int getXoffset() {
   return scroll_view_t_get_prop_xoffset(this.nativeObj);
 }

 public int getYoffset() {
   return scroll_view_t_get_prop_yoffset(this.nativeObj);
 }

 public boolean getXslidable() {
   return scroll_view_t_get_prop_xslidable(this.nativeObj);
 }

 public boolean getYslidable() {
   return scroll_view_t_get_prop_yslidable(this.nativeObj);
 }

static private native long scroll_view_create(long parent, int x, int y, int w, int h);
static private native long scroll_view_cast(long widget);
static private native Ret scroll_view_set_virtual_w(long widget, int w);
static private native Ret scroll_view_set_virtual_h(long widget, int h);
static private native Ret scroll_view_set_xslidable(long widget, boolean xslidable);
static private native Ret scroll_view_set_yslidable(long widget, boolean yslidable);
static private native Ret scroll_view_set_offset(long widget, int xoffset, int yoffset);
static private native Ret scroll_view_scroll_to(long widget, int xoffset_end, int yoffset_end, int duration);
static private native Ret scroll_view_scroll_delta_to(long widget, int xoffset_delta, int yoffset_delta, int duration);
static private native int scroll_view_t_get_prop_virtual_w(long nativeObj);
static private native int scroll_view_t_get_prop_virtual_h(long nativeObj);
static private native int scroll_view_t_get_prop_xoffset(long nativeObj);
static private native int scroll_view_t_get_prop_yoffset(long nativeObj);
static private native boolean scroll_view_t_get_prop_xslidable(long nativeObj);
static private native boolean scroll_view_t_get_prop_yslidable(long nativeObj);
}

