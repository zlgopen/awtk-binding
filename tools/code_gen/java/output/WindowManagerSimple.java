class WindowManagerSimple extends WindowManager {
 public long nativeObj;

 public WindowManagerSimple(long nativeObj) {
   super(nativeObj);
 }

 static public WindowManagerSimple cast(long nativeObj) {
   return new WindowManagerSimple(nativeObj);
 }

}

