class Event {
 public long nativeObj;

 public Event(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Event cast(long nativeObj) {
   return new Event(nativeObj);
 }

 static Event cast(Event event)  {
   return new Event(event_cast(event != null ? (event.nativeObj) : 0));
 }

 static Event create(int type, int target)  {
   return new Event(event_create(type, target));
 }

 Ret destroy()  {
   return event_destroy(this.nativeObj);
 }

 public int getType() {
   return event_t_get_prop_type(this.nativeObj);
 }

 public int getTime() {
   return event_t_get_prop_time(this.nativeObj);
 }

 public int getTarget() {
   return event_t_get_prop_target(this.nativeObj);
 }

static private native long event_cast(long event);
static private native long event_create(int type, int target);
static private native Ret event_destroy(long event);
static private native int event_t_get_prop_type(long nativeObj);
static private native int event_t_get_prop_time(long nativeObj);
static private native int event_t_get_prop_target(long nativeObj);
}

