class ObjectDefault extends Object {
 public long nativeObj;

 public ObjectDefault(long nativeObj) {
   super(nativeObj);
 }

 static public ObjectDefault cast(long nativeObj) {
   return new ObjectDefault(nativeObj);
 }

 static Object create()  {
   return new ObjectDefault(object_default_create());
 }

 Ret unref()  {
   return object_default_unref(this.nativeObj);
 }

 Ret clearProps()  {
   return object_default_clear_props(this.nativeObj);
 }

 public int getPropsSize() {
   return object_default_t_get_prop_props_size(this.nativeObj);
 }

static private native long object_default_create();
static private native Ret object_default_unref(long obj);
static private native Ret object_default_clear_props(long obj);
static private native int object_default_t_get_prop_props_size(long nativeObj);
}

