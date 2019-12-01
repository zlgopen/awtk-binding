class TabButtonGroup extends Widget {
 public long nativeObj;

 public TabButtonGroup(long nativeObj) {
   super(nativeObj);
 }

 static public TabButtonGroup cast(long nativeObj) {
   return new TabButtonGroup(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new TabButtonGroup(tab_button_group_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setCompact(boolean compact)  {
   return tab_button_group_set_compact(this.nativeObj, compact);
 }

 Ret setScrollable(boolean scrollable)  {
   return tab_button_group_set_scrollable(this.nativeObj, scrollable);
 }

 static Widget cast(Widget widget)  {
   return new TabButtonGroup(tab_button_group_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public boolean getCompact() {
   return tab_button_group_t_get_prop_compact(this.nativeObj);
 }

 public boolean getScrollable() {
   return tab_button_group_t_get_prop_scrollable(this.nativeObj);
 }

static private native long tab_button_group_create(long parent, int x, int y, int w, int h);
static private native Ret tab_button_group_set_compact(long widget, boolean compact);
static private native Ret tab_button_group_set_scrollable(long widget, boolean scrollable);
static private native long tab_button_group_cast(long widget);
static private native boolean tab_button_group_t_get_prop_compact(long nativeObj);
static private native boolean tab_button_group_t_get_prop_scrollable(long nativeObj);
}

