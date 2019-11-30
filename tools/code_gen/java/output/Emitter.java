class Emitter {
 public long nativeObj;

 public Emitter(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Emitter cast(long nativeObj) {
   return new Emitter(nativeObj);
 }

 static Emitter create()  {
   return new Emitter(emitter_create());
 }

 Ret dispatch(Event e)  {
   return emitter_dispatch(this.nativeObj, e != null ? e.nativeObj : 0);
 }

 Ret dispatchSimpleEvent(int type)  {
   return emitter_dispatch_simple_event(this.nativeObj, type);
 }

 int on(int type, int on_event, int ctx)  {
   return emitter_on(this.nativeObj, type, on_event, ctx);
 }

 int onWithTag(int type, int on_event, int ctx, int tag)  {
   return emitter_on_with_tag(this.nativeObj, type, on_event, ctx, tag);
 }

 Ret off(int id)  {
   return emitter_off(this.nativeObj, id);
 }

 Ret enable()  {
   return emitter_enable(this.nativeObj);
 }

 Ret disable()  {
   return emitter_disable(this.nativeObj);
 }

 int size()  {
   return emitter_size(this.nativeObj);
 }

 Ret destroy()  {
   return emitter_destroy(this.nativeObj);
 }

 static Emitter cast(Emitter emitter)  {
   return new Emitter(emitter_cast(emitter != null ? (emitter.nativeObj) : 0));
 }

static private native long emitter_create();
static private native Ret emitter_dispatch(long emitter, long e);
static private native Ret emitter_dispatch_simple_event(long emitter, int type);
static private native int emitter_on(long emitter, int type, int on_event, int ctx);
static private native int emitter_on_with_tag(long emitter, int type, int on_event, int ctx, int tag);
static private native Ret emitter_off(long emitter, int id);
static private native Ret emitter_enable(long emitter);
static private native Ret emitter_disable(long emitter);
static private native int emitter_size(long emitter);
static private native Ret emitter_destroy(long emitter);
static private native long emitter_cast(long emitter);
}

