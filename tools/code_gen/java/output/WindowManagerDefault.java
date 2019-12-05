package awtk;

public class WindowManagerDefault extends WindowManager {
 public long nativeObj;

 public WindowManagerDefault(long nativeObj) {
   super(nativeObj);
 }

 static public WindowManagerDefault cast(long nativeObj) {
   return new WindowManagerDefault(nativeObj);
 }

}

