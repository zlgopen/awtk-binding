package awtk;


/**
 * 路径相关的工具函数。
 * 
 *
 */
public class Path {
 public long nativeObj;

 public Path(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Path cast(long nativeObj) {
   return new Path(nativeObj);
 }

}

