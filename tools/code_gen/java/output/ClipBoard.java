class ClipBoard {
 public long nativeObj;

 public ClipBoard(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public ClipBoard cast(long nativeObj) {
   return new ClipBoard(nativeObj);
 }

 static Ret setText(String text)  {
   return clip_board_set_text(text);
 }

 static String getText()  {
   return clip_board_get_text();
 }

static private native Ret clip_board_set_text(String text);
static private native String clip_board_get_text();
}

