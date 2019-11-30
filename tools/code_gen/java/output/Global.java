class Global {
 public long nativeObj;

 public Global(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Global cast(long nativeObj) {
   return new Global(nativeObj);
 }

 static Ret quit()  {
   return tk_quit();
 }

 static int getPointerX()  {
   return tk_get_pointer_x();
 }

 static int getPointerY()  {
   return tk_get_pointer_y();
 }

 static boolean isPointerPressed()  {
   return tk_is_pointer_pressed();
 }

static private native Ret tk_quit();
static private native int tk_get_pointer_x();
static private native int tk_get_pointer_y();
static private native boolean tk_is_pointer_pressed();
}

