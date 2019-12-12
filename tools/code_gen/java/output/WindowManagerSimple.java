package awtk;


/**
 * 缺省窗口管理器。
 *
 */
public class WindowManagerSimple extends WindowManager {
 public long nativeObj;

 public WindowManagerSimple(long nativeObj) {
   super(nativeObj);
 }

 static public WindowManagerSimple cast(long nativeObj) {
   return new WindowManagerSimple(nativeObj);
 }

}

