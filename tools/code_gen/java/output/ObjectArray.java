package awtk;

public class ObjectArray extends Object {
 public long nativeObj;

 public ObjectArray(long nativeObj) {
   super(nativeObj);
 }

 static public ObjectArray cast(long nativeObj) {
   return new ObjectArray(nativeObj);
 }

 public  static Object create()  {
   return new ObjectArray(object_array_create());
 }

 public  int unref()  {
   return object_array_unref(this.nativeObj);
 }

 public  int clearProps()  {
   return object_array_clear_props(this.nativeObj);
 }

 public int getPropsSize() {
   return object_array_t_get_prop_props_size(this.nativeObj);
 }

static private native long object_array_create();
static private native int object_array_unref(long obj);
static private native int object_array_clear_props(long obj);
static private native int object_array_t_get_prop_props_size(long nativeObj);
}

