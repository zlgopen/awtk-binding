class Keyboard extends Widget {
 public long nativeObj;

 public Keyboard(long nativeObj) {
   super(nativeObj);
 }

 static public Keyboard cast(long nativeObj) {
   return new Keyboard(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Keyboard(keyboard_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new Keyboard(keyboard_cast(widget != null ? (widget.nativeObj) : 0));
 }

static private native long keyboard_create(long parent, int x, int y, int w, int h);
static private native long keyboard_cast(long widget);
}

