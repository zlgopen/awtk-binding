package awtk;

public class MutableImage extends ImageBase {
 public long nativeObj;

 public MutableImage(long nativeObj) {
   super(nativeObj);
 }

 static public MutableImage cast(long nativeObj) {
   return new MutableImage(nativeObj);
 }

}

