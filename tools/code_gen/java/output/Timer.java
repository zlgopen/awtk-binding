class Timer {
 public long nativeObj;

 public Timer(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Timer cast(long nativeObj) {
   return new Timer(nativeObj);
 }

 static int add(int on_timer, int ctx, int duration)  {
   return timer_add(on_timer, ctx, duration);
 }

 static Ret remove(int timer_id)  {
   return timer_remove(timer_id);
 }

 static Ret reset(int timer_id)  {
   return timer_reset(timer_id);
 }

 static Ret modify(int timer_id, int duration)  {
   return timer_modify(timer_id, duration);
 }

static private native int timer_add(int on_timer, int ctx, int duration);
static private native Ret timer_remove(int timer_id);
static private native Ret timer_reset(int timer_id);
static private native Ret timer_modify(int timer_id, int duration);
}

