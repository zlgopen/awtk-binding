class Image extends ImageBase {
 public long nativeObj;

 public Image(long nativeObj) {
   super(nativeObj);
 }

 static public Image cast(long nativeObj) {
   return new Image(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Image(image_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 Ret setDrawType(ImageDrawType draw_type)  {
   return image_set_draw_type(this.nativeObj, draw_type);
 }

 static Widget cast(Widget widget)  {
   return new Image(image_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public ImageDrawType getDrawType() {
   return image_t_get_prop_draw_type(this.nativeObj);
 }

static private native long image_create(long parent, int x, int y, int w, int h);
static private native Ret image_set_draw_type(long widget, ImageDrawType draw_type);
static private native long image_cast(long widget);
static private native ImageDrawType image_t_get_prop_draw_type(long nativeObj);
}

