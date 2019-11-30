class Idle {
 public long nativeObj;

 public Idle(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Idle cast(long nativeObj) {
   return new Idle(nativeObj);
 }

 static int add(int on_idle, int ctx)  {
   return idle_add(on_idle, ctx);
 }

 static Ret remove(int idle_id)  {
   return idle_remove(idle_id);
 }

static private native int idle_add(int on_idle, int ctx);
static private native Ret idle_remove(int idle_id);
}

