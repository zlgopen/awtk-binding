class WheelEvent extends Event {
 public long nativeObj;

 public WheelEvent(long nativeObj) {
   super(nativeObj);
 }

 static public WheelEvent cast(long nativeObj) {
   return new WheelEvent(nativeObj);
 }

 static WheelEvent cast(Event event)  {
   return new WheelEvent(wheel_event_cast(event != null ? (event.nativeObj) : 0));
 }

 public int getDy() {
   return wheel_event_t_get_prop_dy(this.nativeObj);
 }

 public boolean getAlt() {
   return wheel_event_t_get_prop_alt(this.nativeObj);
 }

 public boolean getCtrl() {
   return wheel_event_t_get_prop_ctrl(this.nativeObj);
 }

 public boolean getShift() {
   return wheel_event_t_get_prop_shift(this.nativeObj);
 }

static private native long wheel_event_cast(long event);
static private native int wheel_event_t_get_prop_dy(long nativeObj);
static private native boolean wheel_event_t_get_prop_alt(long nativeObj);
static private native boolean wheel_event_t_get_prop_ctrl(long nativeObj);
static private native boolean wheel_event_t_get_prop_shift(long nativeObj);
}
