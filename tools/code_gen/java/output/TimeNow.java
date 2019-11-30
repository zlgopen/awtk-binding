class TimeNow {
 public long nativeObj;

 public TimeNow(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public TimeNow cast(long nativeObj) {
   return new TimeNow(nativeObj);
 }

 static long s()  {
   return time_now_s();
 }

 static long ms()  {
   return time_now_ms();
 }

static private native long time_now_s();
static private native long time_now_ms();
}

