package awtk;

public class Canvas {
 public long nativeObj;

 public Canvas(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Canvas cast(long nativeObj) {
   return new Canvas(nativeObj);
 }

 public  int getWidth()  {
   return canvas_get_width(this.nativeObj);
 }

 public  int getHeight()  {
   return canvas_get_height(this.nativeObj);
 }

 public  int getClipRect(Rect r)  {
   return canvas_get_clip_rect(this.nativeObj, r != null ? (r.nativeObj) : 0);
 }

 public  int setClipRect(Rect r)  {
   return canvas_set_clip_rect(this.nativeObj, r != null ? (r.nativeObj) : 0);
 }

 public  int setClipRectEx(Rect r, boolean translate)  {
   return canvas_set_clip_rect_ex(this.nativeObj, r != null ? (r.nativeObj) : 0, translate);
 }

 public  int setFillColor(String color)  {
   return canvas_set_fill_color_str(this.nativeObj, color);
 }

 public  int setTextColor(String color)  {
   return canvas_set_text_color_str(this.nativeObj, color);
 }

 public  int setStrokeColor(String color)  {
   return canvas_set_stroke_color_str(this.nativeObj, color);
 }

 public  int setGlobalAlpha(int alpha)  {
   return canvas_set_global_alpha(this.nativeObj, alpha);
 }

 public  int translate(int dx, int dy)  {
   return canvas_translate(this.nativeObj, dx, dy);
 }

 public  int untranslate(int dx, int dy)  {
   return canvas_untranslate(this.nativeObj, dx, dy);
 }

 public  int drawVline(int x, int y, int h)  {
   return canvas_draw_vline(this.nativeObj, x, y, h);
 }

 public  int drawHline(int x, int y, int w)  {
   return canvas_draw_hline(this.nativeObj, x, y, w);
 }

 public  int fillRect(int x, int y, int w, int h)  {
   return canvas_fill_rect(this.nativeObj, x, y, w, h);
 }

 public  int strokeRect(int x, int y, int w, int h)  {
   return canvas_stroke_rect(this.nativeObj, x, y, w, h);
 }

 public  int setFont(String name, int size)  {
   return canvas_set_font(this.nativeObj, name, size);
 }

 public  double measureText(String str)  {
   return canvas_measure_utf8(this.nativeObj, str);
 }

 public  int drawText(String str, int x, int y)  {
   return canvas_draw_utf8(this.nativeObj, str, x, y);
 }

 public  int drawTextInRect(String str, Rect r)  {
   return canvas_draw_utf8_in_rect(this.nativeObj, str, r != null ? (r.nativeObj) : 0);
 }

 public  int drawIcon(Bitmap img, int cx, int cy)  {
   return canvas_draw_icon(this.nativeObj, img != null ? (img.nativeObj) : 0, cx, cy);
 }

 public  int drawImage(Bitmap img, Rect src, Rect dst)  {
   return canvas_draw_image(this.nativeObj, img != null ? (img.nativeObj) : 0, src != null ? (src.nativeObj) : 0, dst != null ? (dst.nativeObj) : 0);
 }

 public  int drawImageEx(Bitmap img, int draw_type, Rect dst)  {
   return canvas_draw_image_ex(this.nativeObj, img != null ? (img.nativeObj) : 0, draw_type, dst != null ? (dst.nativeObj) : 0);
 }

 public  Vgcanvas getVgcanvas()  {
   return new Vgcanvas(canvas_get_vgcanvas(this.nativeObj));
 }

 public  static Canvas cast(Canvas c)  {
   return new Canvas(canvas_cast(c != null ? (c.nativeObj) : 0));
 }

 public  int reset()  {
   return canvas_reset(this.nativeObj);
 }

 public int getOx() {
   return canvas_t_get_prop_ox(this.nativeObj);
 }

 public int getOy() {
   return canvas_t_get_prop_oy(this.nativeObj);
 }

 public String getFontName() {
   return canvas_t_get_prop_font_name(this.nativeObj);
 }

 public int getFontSize() {
   return canvas_t_get_prop_font_size(this.nativeObj);
 }

 public int getGlobalAlpha() {
   return canvas_t_get_prop_global_alpha(this.nativeObj);
 }

static private native int canvas_get_width(long c);
static private native int canvas_get_height(long c);
static private native int canvas_get_clip_rect(long c, long r);
static private native int canvas_set_clip_rect(long c, long r);
static private native int canvas_set_clip_rect_ex(long c, long r, boolean translate);
static private native int canvas_set_fill_color_str(long c, String color);
static private native int canvas_set_text_color_str(long c, String color);
static private native int canvas_set_stroke_color_str(long c, String color);
static private native int canvas_set_global_alpha(long c, int alpha);
static private native int canvas_translate(long c, int dx, int dy);
static private native int canvas_untranslate(long c, int dx, int dy);
static private native int canvas_draw_vline(long c, int x, int y, int h);
static private native int canvas_draw_hline(long c, int x, int y, int w);
static private native int canvas_fill_rect(long c, int x, int y, int w, int h);
static private native int canvas_stroke_rect(long c, int x, int y, int w, int h);
static private native int canvas_set_font(long c, String name, int size);
static private native double canvas_measure_utf8(long c, String str);
static private native int canvas_draw_utf8(long c, String str, int x, int y);
static private native int canvas_draw_utf8_in_rect(long c, String str, long r);
static private native int canvas_draw_icon(long c, long img, int cx, int cy);
static private native int canvas_draw_image(long c, long img, long src, long dst);
static private native int canvas_draw_image_ex(long c, long img, int draw_type, long dst);
static private native long canvas_get_vgcanvas(long c);
static private native long canvas_cast(long c);
static private native int canvas_reset(long c);
static private native int canvas_t_get_prop_ox(long nativeObj);
static private native int canvas_t_get_prop_oy(long nativeObj);
static private native String canvas_t_get_prop_font_name(long nativeObj);
static private native int canvas_t_get_prop_font_size(long nativeObj);
static private native int canvas_t_get_prop_global_alpha(long nativeObj);
}

