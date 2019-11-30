class Dialog extends Widget {
 public long nativeObj;

 public Dialog(long nativeObj) {
   super(nativeObj);
 }

 static public Dialog cast(long nativeObj) {
   return new Dialog(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Dialog(dialog_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget createSimple(Widget parent, int x, int y, int w, int h)  {
   return new Dialog(dialog_create_simple(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new Dialog(dialog_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Widget getTitle()  {
   return new Widget(dialog_get_title(this.nativeObj));
 }

 Widget getClient()  {
   return new Widget(dialog_get_client(this.nativeObj));
 }

 static Widget open(String name)  {
   return new Dialog(dialog_open(name));
 }

 Ret setTitle(String title)  {
   return dialog_set_title(this.nativeObj, title);
 }

 Ret modal()  {
   return dialog_modal(this.nativeObj);
 }

 Ret quit(int code)  {
   return dialog_quit(this.nativeObj, code);
 }

 boolean isQuited()  {
   return dialog_is_quited(this.nativeObj);
 }

 boolean isModal()  {
   return dialog_is_modal(this.nativeObj);
 }

 static Ret toast(String text, int duration)  {
   return dialog_toast(text, duration);
 }

 static Ret info(String title, String text)  {
   return dialog_info(title, text);
 }

 static Ret warn(String title, String text)  {
   return dialog_warn(title, text);
 }

 static Ret confirm(String title, String text)  {
   return dialog_confirm(title, text);
 }

 public String getHighlight() {
   return dialog_t_get_prop_highlight(this.nativeObj);
 }

static private native long dialog_create(long parent, int x, int y, int w, int h);
static private native long dialog_create_simple(long parent, int x, int y, int w, int h);
static private native long dialog_cast(long widget);
static private native long dialog_get_title(long widget);
static private native long dialog_get_client(long widget);
static private native long dialog_open(String name);
static private native Ret dialog_set_title(long widget, String title);
static private native Ret dialog_modal(long widget);
static private native Ret dialog_quit(long widget, int code);
static private native boolean dialog_is_quited(long widget);
static private native boolean dialog_is_modal(long widget);
static private native Ret dialog_toast(String text, int duration);
static private native Ret dialog_info(String title, String text);
static private native Ret dialog_warn(String title, String text);
static private native Ret dialog_confirm(String title, String text);
static private native String dialog_t_get_prop_highlight(long nativeObj);
}
