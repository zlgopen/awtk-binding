class Label extends Widget {
 public long nativeObj;

 public Label(long nativeObj) {
   super(nativeObj);
 }

 static public Label cast(long nativeObj) {
   return new Label(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Label(label_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setLength(int length)  {
   return label_set_length(this.nativeObj, length);
 }

 Ret resizeToContent(int min_w, int max_w, int min_h, int max_h)  {
   return label_resize_to_content(this.nativeObj, min_w, max_w, min_h, max_h);
 }

 static Widget cast(Widget widget)  {
   return new Label(label_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public int getLength() {
   return label_t_get_prop_length(this.nativeObj);
 }

static private native long label_create(long parent, int x, int y, int w, int h);
static private native Ret label_set_length(long widget, int length);
static private native Ret label_resize_to_content(long widget, int min_w, int max_w, int min_h, int max_h);
static private native long label_cast(long widget);
static private native int label_t_get_prop_length(long nativeObj);
}

