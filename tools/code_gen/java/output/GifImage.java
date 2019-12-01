class GifImage extends ImageBase {
 public long nativeObj;

 public GifImage(long nativeObj) {
   super(nativeObj);
 }

 static public GifImage cast(long nativeObj) {
   return new GifImage(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new GifImage(gif_image_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new GifImage(gif_image_cast(widget != null ? (widget.nativeObj) : 0));
 }

static private native long gif_image_create(long parent, int x, int y, int w, int h);
static private native long gif_image_cast(long widget);
}

