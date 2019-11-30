class RichText extends Widget {
 public long nativeObj;

 public RichText(long nativeObj) {
   super(nativeObj);
 }

 static public RichText cast(long nativeObj) {
   return new RichText(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new RichText(rich_text_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 Ret setText(String text)  {
   return rich_text_set_text(this.nativeObj, text);
 }

 static Widget cast(Widget widget)  {
   return new RichText(rich_text_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public int getLineGap() {
   return rich_text_t_get_prop_line_gap(this.nativeObj);
 }

static private native long rich_text_create(long parent, int x, int y, int w, int h);
static private native Ret rich_text_set_text(long widget, String text);
static private native long rich_text_cast(long widget);
static private native int rich_text_t_get_prop_line_gap(long nativeObj);
}
