class Color {
 public long nativeObj;

 public Color(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Color cast(long nativeObj) {
   return new Color(nativeObj);
 }

 static Color create(int r, int b, int g, int a)  {
   return new Color(color_create(r, b, g, a));
 }

 Color fromStr(String str)  {
   return new Color(color_from_str(this.nativeObj, str));
 }

 int r()  {
   return color_r(this.nativeObj);
 }

 int g()  {
   return color_g(this.nativeObj);
 }

 int b()  {
   return color_b(this.nativeObj);
 }

 int a()  {
   return color_a(this.nativeObj);
 }

 static Color cast(Color color)  {
   return new Color(color_cast(color != null ? (color.nativeObj) : 0));
 }

 Ret destroy()  {
   return color_destroy(this.nativeObj);
 }

 public int getColor() {
   return color_t_get_prop_color(this.nativeObj);
 }

static private native long color_create(int r, int b, int g, int a);
static private native long color_from_str(long c, String str);
static private native int color_r(long c);
static private native int color_g(long c);
static private native int color_b(long c);
static private native int color_a(long c);
static private native long color_cast(long color);
static private native Ret color_destroy(long c);
static private native int color_t_get_prop_color(long nativeObj);
static private native void color_t_set_prop_color(long nativeObj, int value);
}

