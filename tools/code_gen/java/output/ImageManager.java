class ImageManager {
 public long nativeObj;

 public ImageManager(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public ImageManager cast(long nativeObj) {
   return new ImageManager(nativeObj);
 }

 static ImageManager instance()  {
   return new ImageManager(image_manager());
 }

 Ret getBitmap(String name, Bitmap image)  {
   return image_manager_get_bitmap(this.nativeObj, name, image != null ? (image.nativeObj) : 0);
 }

static private native long image_manager();
static private native Ret image_manager_get_bitmap(long imm, String name, long image);
}

