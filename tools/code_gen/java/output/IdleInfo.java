class IdleInfo extends Object {
 public long nativeObj;

 public IdleInfo(long nativeObj) {
   super(nativeObj);
 }

 static public IdleInfo cast(long nativeObj) {
   return new IdleInfo(nativeObj);
 }

 static IdleInfo cast(IdleInfo idle)  {
   return new IdleInfo(idle_info_cast(idle != null ? (idle.nativeObj) : 0));
 }

 public int getCtx() {
   return idle_info_t_get_prop_ctx(this.nativeObj);
 }

 public int getId() {
   return idle_info_t_get_prop_id(this.nativeObj);
 }

static private native long idle_info_cast(long idle);
static private native int idle_info_t_get_prop_ctx(long nativeObj);
static private native int idle_info_t_get_prop_id(long nativeObj);
}

