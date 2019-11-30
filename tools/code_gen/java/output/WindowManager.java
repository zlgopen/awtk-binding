class WindowManager extends Widget {
 public long nativeObj;

 public WindowManager(long nativeObj) {
   super(nativeObj);
 }

 static public WindowManager cast(long nativeObj) {
   return new WindowManager(nativeObj);
 }

 static Widget instance()  {
   return new WindowManager(window_manager());
 }

 static Widget cast(Widget widget)  {
   return new WindowManager(window_manager_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Widget getTopMainWindow()  {
   return new Widget(window_manager_get_top_main_window(this.nativeObj));
 }

 Widget getTopWindow()  {
   return new Widget(window_manager_get_top_window(this.nativeObj));
 }

 Widget getPrevWindow()  {
   return new Widget(window_manager_get_prev_window(this.nativeObj));
 }

 int getPointerX()  {
   return window_manager_get_pointer_x(this.nativeObj);
 }

 int getPointerY()  {
   return window_manager_get_pointer_y(this.nativeObj);
 }

 boolean getPointerPressed()  {
   return window_manager_get_pointer_pressed(this.nativeObj);
 }

 Ret setShowFps(boolean show_fps)  {
   return window_manager_set_show_fps(this.nativeObj, show_fps);
 }

 Ret setScreenSaverTime(int screen_saver_time)  {
   return window_manager_set_screen_saver_time(this.nativeObj, screen_saver_time);
 }

 Ret setCursor(String cursor)  {
   return window_manager_set_cursor(this.nativeObj, cursor);
 }

 Ret back()  {
   return window_manager_back(this.nativeObj);
 }

 Ret backToHome()  {
   return window_manager_back_to_home(this.nativeObj);
 }

static private native long window_manager();
static private native long window_manager_cast(long widget);
static private native long window_manager_get_top_main_window(long widget);
static private native long window_manager_get_top_window(long widget);
static private native long window_manager_get_prev_window(long widget);
static private native int window_manager_get_pointer_x(long widget);
static private native int window_manager_get_pointer_y(long widget);
static private native boolean window_manager_get_pointer_pressed(long widget);
static private native Ret window_manager_set_show_fps(long widget, boolean show_fps);
static private native Ret window_manager_set_screen_saver_time(long widget, int screen_saver_time);
static private native Ret window_manager_set_cursor(long widget, String cursor);
static private native Ret window_manager_back(long widget);
static private native Ret window_manager_back_to_home(long widget);
}

