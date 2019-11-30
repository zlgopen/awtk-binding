class Theme {
 public long nativeObj;

 public Theme(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Theme cast(long nativeObj) {
   return new Theme(nativeObj);
 }

 static Theme instance()  {
   return new Theme(theme());
 }

static private native long theme();
}

