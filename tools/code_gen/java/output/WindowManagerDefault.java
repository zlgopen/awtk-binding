package awtk;


/**
 * 缺省窗口管理器。
 * 
 *
 */
public class WindowManagerDefault extends WindowManager {
 public WindowManagerDefault(long nativeObj) {
   super(nativeObj);
 }

 static public WindowManagerDefault cast(long nativeObj) {
   return new WindowManagerDefault(nativeObj);
 }

}

