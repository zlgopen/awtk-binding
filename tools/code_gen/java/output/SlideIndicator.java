class SlideIndicator extends Widget {
 public long nativeObj;

 public SlideIndicator(long nativeObj) {
   super(nativeObj);
 }

 static public SlideIndicator cast(long nativeObj) {
   return new SlideIndicator(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new SlideIndicator(slide_indicator_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget createLinear(Widget parent, int x, int y, int w, int h)  {
   return new SlideIndicator(slide_indicator_create_linear(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget createArc(Widget parent, int x, int y, int w, int h)  {
   return new SlideIndicator(slide_indicator_create_arc(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new SlideIndicator(slide_indicator_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setValue(int value)  {
   return slide_indicator_set_value(this.nativeObj, value);
 }

 Ret setMax(int max)  {
   return slide_indicator_set_max(this.nativeObj, max);
 }

 Ret setDefaultPaint(IndicatorDefaultPaint default_paint)  {
   return slide_indicator_set_default_paint(this.nativeObj, default_paint);
 }

 Ret setAutoHide(int auto_hide)  {
   return slide_indicator_set_auto_hide(this.nativeObj, auto_hide);
 }

 Ret setMargin(int margin)  {
   return slide_indicator_set_margin(this.nativeObj, margin);
 }

 Ret setSpacing(double spacing)  {
   return slide_indicator_set_spacing(this.nativeObj, spacing);
 }

 Ret setSize(int size)  {
   return slide_indicator_set_size(this.nativeObj, size);
 }

 Ret setAnchor(String anchor_x, String anchor_y)  {
   return slide_indicator_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 Ret setIndicatedTarget(String indicated_target)  {
   return slide_indicator_set_indicated_target(this.nativeObj, indicated_target);
 }

 public int getMax() {
   return slide_indicator_t_get_prop_max(this.nativeObj);
 }

 public IndicatorDefaultPaint getDefaultPaint() {
   return slide_indicator_t_get_prop_default_paint(this.nativeObj);
 }

 public int getAutoHide() {
   return slide_indicator_t_get_prop_auto_hide(this.nativeObj);
 }

 public int getMargin() {
   return slide_indicator_t_get_prop_margin(this.nativeObj);
 }

 public double getSpacing() {
   return slide_indicator_t_get_prop_spacing(this.nativeObj);
 }

 public int getSize() {
   return slide_indicator_t_get_prop_size(this.nativeObj);
 }

 public double getAnchorX() {
   return slide_indicator_t_get_prop_anchor_x(this.nativeObj);
 }

 public double getAnchorY() {
   return slide_indicator_t_get_prop_anchor_y(this.nativeObj);
 }

 public String getIndicatedTarget() {
   return slide_indicator_t_get_prop_indicated_target(this.nativeObj);
 }

static private native long slide_indicator_create(long parent, int x, int y, int w, int h);
static private native long slide_indicator_create_linear(long parent, int x, int y, int w, int h);
static private native long slide_indicator_create_arc(long parent, int x, int y, int w, int h);
static private native long slide_indicator_cast(long widget);
static private native Ret slide_indicator_set_value(long widget, int value);
static private native Ret slide_indicator_set_max(long widget, int max);
static private native Ret slide_indicator_set_default_paint(long widget, IndicatorDefaultPaint default_paint);
static private native Ret slide_indicator_set_auto_hide(long widget, int auto_hide);
static private native Ret slide_indicator_set_margin(long widget, int margin);
static private native Ret slide_indicator_set_spacing(long widget, double spacing);
static private native Ret slide_indicator_set_size(long widget, int size);
static private native Ret slide_indicator_set_anchor(long widget, String anchor_x, String anchor_y);
static private native Ret slide_indicator_set_indicated_target(long widget, String indicated_target);
static private native int slide_indicator_t_get_prop_value(long nativeObj);
static private native int slide_indicator_t_get_prop_max(long nativeObj);
static private native IndicatorDefaultPaint slide_indicator_t_get_prop_default_paint(long nativeObj);
static private native int slide_indicator_t_get_prop_auto_hide(long nativeObj);
static private native int slide_indicator_t_get_prop_margin(long nativeObj);
static private native double slide_indicator_t_get_prop_spacing(long nativeObj);
static private native int slide_indicator_t_get_prop_size(long nativeObj);
static private native double slide_indicator_t_get_prop_anchor_x(long nativeObj);
static private native double slide_indicator_t_get_prop_anchor_y(long nativeObj);
static private native String slide_indicator_t_get_prop_indicated_target(long nativeObj);
}

