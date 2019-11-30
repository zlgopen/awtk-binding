class ImageBase extends Widget {
 public long nativeObj;

 public ImageBase(long nativeObj) {
   super(nativeObj);
 }

 static public ImageBase cast(long nativeObj) {
   return new ImageBase(nativeObj);
 }

 Ret setImage(String name)  {
   return image_base_set_image(this.nativeObj, name);
 }

 Ret setRotation(double rotation)  {
   return image_base_set_rotation(this.nativeObj, rotation);
 }

 Ret setScale(double scale_x, double scale_y)  {
   return image_base_set_scale(this.nativeObj, scale_x, scale_y);
 }

 Ret setAnchor(double anchor_x, double anchor_y)  {
   return image_base_set_anchor(this.nativeObj, anchor_x, anchor_y);
 }

 Ret setSelected(boolean selected)  {
   return image_base_set_selected(this.nativeObj, selected);
 }

 Ret setSelectable(boolean selectable)  {
   return image_base_set_selectable(this.nativeObj, selectable);
 }

 Ret setClickable(boolean clickable)  {
   return image_base_set_clickable(this.nativeObj, clickable);
 }

 static Widget cast(Widget widget)  {
   return new ImageBase(image_base_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public String getImage() {
   return image_base_t_get_prop_image(this.nativeObj);
 }

 public double getAnchorX() {
   return image_base_t_get_prop_anchor_x(this.nativeObj);
 }

 public double getAnchorY() {
   return image_base_t_get_prop_anchor_y(this.nativeObj);
 }

 public double getScaleX() {
   return image_base_t_get_prop_scale_x(this.nativeObj);
 }

 public double getScaleY() {
   return image_base_t_get_prop_scale_y(this.nativeObj);
 }

 public double getRotation() {
   return image_base_t_get_prop_rotation(this.nativeObj);
 }

 public boolean getClickable() {
   return image_base_t_get_prop_clickable(this.nativeObj);
 }

 public boolean getSelectable() {
   return image_base_t_get_prop_selectable(this.nativeObj);
 }

 public boolean getSelected() {
   return image_base_t_get_prop_selected(this.nativeObj);
 }

static private native Ret image_base_set_image(long widget, String name);
static private native Ret image_base_set_rotation(long widget, double rotation);
static private native Ret image_base_set_scale(long widget, double scale_x, double scale_y);
static private native Ret image_base_set_anchor(long widget, double anchor_x, double anchor_y);
static private native Ret image_base_set_selected(long widget, boolean selected);
static private native Ret image_base_set_selectable(long widget, boolean selectable);
static private native Ret image_base_set_clickable(long widget, boolean clickable);
static private native long image_base_cast(long widget);
static private native String image_base_t_get_prop_image(long nativeObj);
static private native double image_base_t_get_prop_anchor_x(long nativeObj);
static private native double image_base_t_get_prop_anchor_y(long nativeObj);
static private native double image_base_t_get_prop_scale_x(long nativeObj);
static private native double image_base_t_get_prop_scale_y(long nativeObj);
static private native double image_base_t_get_prop_rotation(long nativeObj);
static private native boolean image_base_t_get_prop_clickable(long nativeObj);
static private native boolean image_base_t_get_prop_selectable(long nativeObj);
static private native boolean image_base_t_get_prop_selected(long nativeObj);
}

