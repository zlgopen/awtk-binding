class Window extends Widget {
 public long nativeObj;

 public Window(long nativeObj) {
   super(nativeObj);
 }

 static public Window cast(long nativeObj) {
   return new Window(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Window(window_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setFullscreen(boolean fullscreen)  {
   return window_set_fullscreen(this.nativeObj, fullscreen);
 }

 static Widget open(String name)  {
   return new Window(window_open(name));
 }

 static Widget openAndClose(String name, Widget to_close)  {
   return new Window(window_open_and_close(name, to_close != null ? (to_close.nativeObj) : 0));
 }

 Ret close()  {
   return window_close(this.nativeObj);
 }

 Ret closeForce()  {
   return window_close_force(this.nativeObj);
 }

 static Widget cast(Widget widget)  {
   return new Window(window_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public boolean getFullscreen() {
   return window_t_get_prop_fullscreen(this.nativeObj);
 }

static private native long window_create(long parent, int x, int y, int w, int h);
static private native Ret window_set_fullscreen(long widget, boolean fullscreen);
static private native long window_open(String name);
static private native long window_open_and_close(String name, long to_close);
static private native Ret window_close(long widget);
static private native Ret window_close_force(long widget);
static private native long window_cast(long widget);
static private native boolean window_t_get_prop_fullscreen(long nativeObj);
}

