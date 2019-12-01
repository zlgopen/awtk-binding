class LineNumber extends Widget {
 public long nativeObj;

 public LineNumber(long nativeObj) {
   super(nativeObj);
 }

 static public LineNumber cast(long nativeObj) {
   return new LineNumber(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new LineNumber(line_number_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setTopMargin(int top_margin)  {
   return line_number_set_top_margin(this.nativeObj, top_margin);
 }

 Ret setBottomMargin(int bottom_margin)  {
   return line_number_set_bottom_margin(this.nativeObj, bottom_margin);
 }

 Ret setLineHeight(int line_height)  {
   return line_number_set_line_height(this.nativeObj, line_height);
 }

 Ret setYoffset(int yoffset)  {
   return line_number_set_yoffset(this.nativeObj, yoffset);
 }

 static Widget cast(Widget widget)  {
   return new LineNumber(line_number_cast(widget != null ? (widget.nativeObj) : 0));
 }

static private native long line_number_create(long parent, int x, int y, int w, int h);
static private native Ret line_number_set_top_margin(long widget, int top_margin);
static private native Ret line_number_set_bottom_margin(long widget, int bottom_margin);
static private native Ret line_number_set_line_height(long widget, int line_height);
static private native Ret line_number_set_yoffset(long widget, int yoffset);
static private native long line_number_cast(long widget);
}

