class Pages extends Widget {
 public long nativeObj;

 public Pages(long nativeObj) {
   super(nativeObj);
 }

 static public Pages cast(long nativeObj) {
   return new Pages(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Pages(pages_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new Pages(pages_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setActive(int index)  {
   return pages_set_active(this.nativeObj, index);
 }

 Ret setActiveByName(String name)  {
   return pages_set_active_by_name(this.nativeObj, name);
 }

 public int getActive() {
   return pages_t_get_prop_active(this.nativeObj);
 }

static private native long pages_create(long parent, int x, int y, int w, int h);
static private native long pages_cast(long widget);
static private native Ret pages_set_active(long widget, int index);
static private native Ret pages_set_active_by_name(long widget, String name);
static private native int pages_t_get_prop_active(long nativeObj);
}

