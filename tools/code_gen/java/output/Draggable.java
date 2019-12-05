package awtk;

public class Draggable extends Widget {
 public Draggable(long nativeObj) {
   super(nativeObj);
 }

 static public Draggable cast(long nativeObj) {
   return new Draggable(nativeObj);
 }

 public  static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new Draggable(draggable_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 public  static Widget cast(Widget widget)  {
   return new Draggable(draggable_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public  int setTop(int top)  {
   return draggable_set_top(this.nativeObj, top);
 }

 public  int setBottom(int bottom)  {
   return draggable_set_bottom(this.nativeObj, bottom);
 }

 public  int setLeft(int left)  {
   return draggable_set_left(this.nativeObj, left);
 }

 public  int setRight(int right)  {
   return draggable_set_right(this.nativeObj, right);
 }

 public  int setVerticalOnly(boolean vertical_only)  {
   return draggable_set_vertical_only(this.nativeObj, vertical_only);
 }

 public  int setHorizontalOnly(boolean horizontal_only)  {
   return draggable_set_horizontal_only(this.nativeObj, horizontal_only);
 }

 public  int setDragWindow(boolean drag_window)  {
   return draggable_set_drag_window(this.nativeObj, drag_window);
 }

 public int getTop() {
   return draggable_t_get_prop_top(this.nativeObj);
 }

 public int getBottom() {
   return draggable_t_get_prop_bottom(this.nativeObj);
 }

 public int getLeft() {
   return draggable_t_get_prop_left(this.nativeObj);
 }

 public int getRight() {
   return draggable_t_get_prop_right(this.nativeObj);
 }

 public boolean getVerticalOnly() {
   return draggable_t_get_prop_vertical_only(this.nativeObj);
 }

 public boolean getHorizontalOnly() {
   return draggable_t_get_prop_horizontal_only(this.nativeObj);
 }

 public boolean getDragWindow() {
   return draggable_t_get_prop_drag_window(this.nativeObj);
 }

static private native long draggable_create(long parent, int x, int y, int w, int h);
static private native long draggable_cast(long widget);
static private native int draggable_set_top(long widget, int top);
static private native int draggable_set_bottom(long widget, int bottom);
static private native int draggable_set_left(long widget, int left);
static private native int draggable_set_right(long widget, int right);
static private native int draggable_set_vertical_only(long widget, boolean vertical_only);
static private native int draggable_set_horizontal_only(long widget, boolean horizontal_only);
static private native int draggable_set_drag_window(long widget, boolean drag_window);
static private native int draggable_t_get_prop_top(long nativeObj);
static private native int draggable_t_get_prop_bottom(long nativeObj);
static private native int draggable_t_get_prop_left(long nativeObj);
static private native int draggable_t_get_prop_right(long nativeObj);
static private native boolean draggable_t_get_prop_vertical_only(long nativeObj);
static private native boolean draggable_t_get_prop_horizontal_only(long nativeObj);
static private native boolean draggable_t_get_prop_drag_window(long nativeObj);
}

