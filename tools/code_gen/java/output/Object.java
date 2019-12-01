class Object extends Emitter {
 public long nativeObj;

 public Object(long nativeObj) {
   super(nativeObj);
 }

 static public Object cast(long nativeObj) {
   return new Object(nativeObj);
 }

 Ret unref()  {
   return object_unref(this.nativeObj);
 }

 static Object ref(Object obj)  {
   return new Object(object_ref(obj != null ? (obj.nativeObj) : 0));
 }

 String getType()  {
   return object_get_type(this.nativeObj);
 }

 String getDesc()  {
   return object_get_desc(this.nativeObj);
 }

 int getSize()  {
   return object_get_size(this.nativeObj);
 }

 boolean isCollection()  {
   return object_is_collection(this.nativeObj);
 }

 Ret setName(String name)  {
   return object_set_name(this.nativeObj, name);
 }

 int compare(Object other)  {
   return object_compare(this.nativeObj, other != null ? (other.nativeObj) : 0);
 }

 Ret getProp(String name, Value v)  {
   return object_get_prop(this.nativeObj, name, v != null ? (v.nativeObj) : 0);
 }

 String getPropStr(String name)  {
   return object_get_prop_str(this.nativeObj, name);
 }

 int getPropPointer(String name)  {
   return object_get_prop_pointer(this.nativeObj, name);
 }

 Object getPropObject(String name)  {
   return new Object(object_get_prop_object(this.nativeObj, name));
 }

 int getPropInt(String name, int defval)  {
   return object_get_prop_int(this.nativeObj, name, defval);
 }

 boolean getPropBool(String name, boolean defval)  {
   return object_get_prop_bool(this.nativeObj, name, defval);
 }

 double getPropFloat(String name, double defval)  {
   return object_get_prop_float(this.nativeObj, name, defval);
 }

 Ret removeProp(String name)  {
   return object_remove_prop(this.nativeObj, name);
 }

 Ret setProp(String name, Value value)  {
   return object_set_prop(this.nativeObj, name, value != null ? (value.nativeObj) : 0);
 }

 Ret setPropStr(String name, String value)  {
   return object_set_prop_str(this.nativeObj, name, value);
 }

 Ret setPropPointer(String name, int value)  {
   return object_set_prop_pointer(this.nativeObj, name, value);
 }

 Ret setPropObject(String name, Object value)  {
   return object_set_prop_object(this.nativeObj, name, value != null ? (value.nativeObj) : 0);
 }

 Ret setPropInt(String name, int value)  {
   return object_set_prop_int(this.nativeObj, name, value);
 }

 Ret setPropBool(String name, boolean value)  {
   return object_set_prop_bool(this.nativeObj, name, value);
 }

 Ret setPropFloat(String name, double value)  {
   return object_set_prop_float(this.nativeObj, name, value);
 }

 Ret copyProp(Object src, String name)  {
   return object_copy_prop(this.nativeObj, src != null ? (src.nativeObj) : 0, name);
 }

 Ret foreachProp(int on_prop, int ctx)  {
   return object_foreach_prop(this.nativeObj, on_prop, ctx);
 }

 boolean hasProp(String name)  {
   return object_has_prop(this.nativeObj, name);
 }

 Ret eval(String expr, Value v)  {
   return object_eval(this.nativeObj, expr, v != null ? (v.nativeObj) : 0);
 }

 boolean canExec(String name, String args)  {
   return object_can_exec(this.nativeObj, name, args);
 }

 Ret exec(String name, String args)  {
   return object_exec(this.nativeObj, name, args);
 }

 Ret notifyChanged()  {
   return object_notify_changed(this.nativeObj);
 }

 String getPropStrByPath(String path)  {
   return object_get_prop_str_by_path(this.nativeObj, path);
 }

 int getPropPointerByPath(String path)  {
   return object_get_prop_pointer_by_path(this.nativeObj, path);
 }

 Object getPropObjectByPath(String path)  {
   return new Object(object_get_prop_object_by_path(this.nativeObj, path));
 }

 int getPropIntByPath(String path, int defval)  {
   return object_get_prop_int_by_path(this.nativeObj, path, defval);
 }

 boolean getPropBoolByPath(String path, boolean defval)  {
   return object_get_prop_bool_by_path(this.nativeObj, path, defval);
 }

 double getPropFloatByPath(String path, double defval)  {
   return object_get_prop_float_by_path(this.nativeObj, path, defval);
 }

 public int getRefCount() {
   return object_t_get_prop_ref_count(this.nativeObj);
 }

 public String getName() {
   return object_t_get_prop_name(this.nativeObj);
 }

static private native Ret object_unref(long obj);
static private native long object_ref(long obj);
static private native String object_get_type(long obj);
static private native String object_get_desc(long obj);
static private native int object_get_size(long obj);
static private native boolean object_is_collection(long obj);
static private native Ret object_set_name(long obj, String name);
static private native int object_compare(long obj, long other);
static private native Ret object_get_prop(long obj, String name, long v);
static private native String object_get_prop_str(long obj, String name);
static private native int object_get_prop_pointer(long obj, String name);
static private native long object_get_prop_object(long obj, String name);
static private native int object_get_prop_int(long obj, String name, int defval);
static private native boolean object_get_prop_bool(long obj, String name, boolean defval);
static private native double object_get_prop_float(long obj, String name, double defval);
static private native Ret object_remove_prop(long obj, String name);
static private native Ret object_set_prop(long obj, String name, long value);
static private native Ret object_set_prop_str(long obj, String name, String value);
static private native Ret object_set_prop_pointer(long obj, String name, int value);
static private native Ret object_set_prop_object(long obj, String name, long value);
static private native Ret object_set_prop_int(long obj, String name, int value);
static private native Ret object_set_prop_bool(long obj, String name, boolean value);
static private native Ret object_set_prop_float(long obj, String name, double value);
static private native Ret object_copy_prop(long obj, long src, String name);
static private native Ret object_foreach_prop(long obj, int on_prop, int ctx);
static private native boolean object_has_prop(long obj, String name);
static private native Ret object_eval(long obj, String expr, long v);
static private native boolean object_can_exec(long obj, String name, String args);
static private native Ret object_exec(long obj, String name, String args);
static private native Ret object_notify_changed(long obj);
static private native String object_get_prop_str_by_path(long obj, String path);
static private native int object_get_prop_pointer_by_path(long obj, String path);
static private native long object_get_prop_object_by_path(long obj, String path);
static private native int object_get_prop_int_by_path(long obj, String path, int defval);
static private native boolean object_get_prop_bool_by_path(long obj, String path, boolean defval);
static private native double object_get_prop_float_by_path(long obj, String path, double defval);
static private native int object_t_get_prop_ref_count(long nativeObj);
static private native String object_t_get_prop_name(long nativeObj);
}

