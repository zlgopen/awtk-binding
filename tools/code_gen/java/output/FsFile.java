package awtk;


/**
 * 文件接口。
 * 示例：
 * 
 *
 */
public class FsFile {
 public long nativeObj;

 public FsFile(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public FsFile cast(long nativeObj) {
   return new FsFile(nativeObj);
 }

}

