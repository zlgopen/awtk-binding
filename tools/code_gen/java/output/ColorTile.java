class ColorTile extends Widget {
 public long nativeObj;

 public ColorTile(long nativeObj) {
   super(nativeObj);
 }

 static public ColorTile cast(long nativeObj) {
   return new ColorTile(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ColorTile(color_tile_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new ColorTile(color_tile_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setBgColor(String color)  {
   return color_tile_set_bg_color(this.nativeObj, color);
 }

 public String getBgColor() {
   return color_tile_t_get_prop_bg_color(this.nativeObj);
 }

 public String getBorderColor() {
   return color_tile_t_get_prop_border_color(this.nativeObj);
 }

static private native long color_tile_create(long parent, int x, int y, int w, int h);
static private native long color_tile_cast(long widget);
static private native Ret color_tile_set_bg_color(long widget, String color);
static private native String color_tile_t_get_prop_bg_color(long nativeObj);
static private native String color_tile_t_get_prop_border_color(long nativeObj);
}

