class Guage extends Widget {
 public long nativeObj;

 public Guage(long nativeObj) {
   super(nativeObj);
 }

 static public Guage cast(long nativeObj) {
   return new Guage(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Guage(guage_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new Guage(guage_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setImage(String name)  {
   return guage_set_image(this.nativeObj, name);
 }

 Ret setDrawType(ImageDrawType draw_type)  {
   return guage_set_draw_type(this.nativeObj, draw_type);
 }

 public String getImage() {
   return guage_t_get_prop_image(this.nativeObj);
 }

 public ImageDrawType getDrawType() {
   return guage_t_get_prop_draw_type(this.nativeObj);
 }

static private native long guage_create(long parent, int x, int y, int w, int h);
static private native long guage_cast(long widget);
static private native Ret guage_set_image(long widget, String name);
static private native Ret guage_set_draw_type(long widget, ImageDrawType draw_type);
static private native String guage_t_get_prop_image(long nativeObj);
static private native ImageDrawType guage_t_get_prop_draw_type(long nativeObj);
}

