package awtk;

public class Widget {
 public long nativeObj;

 public Widget(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public Widget cast(long nativeObj) {
   return new Widget(nativeObj);
 }

 public  int countChildren()  {
   return widget_count_children(this.nativeObj);
 }

 public  Widget getChild(int index)  {
   return new Widget(widget_get_child(this.nativeObj, index));
 }

 public  int indexOf()  {
   return widget_index_of(this.nativeObj);
 }

 public  int move(int x, int y)  {
   return widget_move(this.nativeObj, x, y);
 }

 public  int resize(int w, int h)  {
   return widget_resize(this.nativeObj, w, h);
 }

 public  int moveResize(int x, int y, int w, int h)  {
   return widget_move_resize(this.nativeObj, x, y, w, h);
 }

 public  int setValue(int value)  {
   return widget_set_value(this.nativeObj, value);
 }

 public  int animateValueTo(int value, int duration)  {
   return widget_animate_value_to(this.nativeObj, value, duration);
 }

 public  int addValue(int delta)  {
   return widget_add_value(this.nativeObj, delta);
 }

 public  int useStyle(String style)  {
   return widget_use_style(this.nativeObj, style);
 }

 public  int setText(String text)  {
   return widget_set_text_utf8(this.nativeObj, text);
 }

 public  int setTrText(String text)  {
   return widget_set_tr_text(this.nativeObj, text);
 }

 public  int getValue()  {
   return widget_get_value(this.nativeObj);
 }

 public  long getText()  {
   return widget_get_text(this.nativeObj);
 }

 public  int setName(String name)  {
   return widget_set_name(this.nativeObj, name);
 }

 public  int setTheme(String name)  {
   return widget_set_theme(this.nativeObj, name);
 }

 public  int setPointerCursor(String cursor)  {
   return widget_set_pointer_cursor(this.nativeObj, cursor);
 }

 public  int setAnimation(String animation)  {
   return widget_set_animation(this.nativeObj, animation);
 }

 public  int createAnimator(String animation)  {
   return widget_create_animator(this.nativeObj, animation);
 }

 public  int startAnimator(String name)  {
   return widget_start_animator(this.nativeObj, name);
 }

 public  int setAnimatorTimeScale(String name, double time_scale)  {
   return widget_set_animator_time_scale(this.nativeObj, name, time_scale);
 }

 public  int pauseAnimator(String name)  {
   return widget_pause_animator(this.nativeObj, name);
 }

 public  int stopAnimator(String name)  {
   return widget_stop_animator(this.nativeObj, name);
 }

 public  int destroyAnimator(String name)  {
   return widget_destroy_animator(this.nativeObj, name);
 }

 public  int setEnable(boolean enable)  {
   return widget_set_enable(this.nativeObj, enable);
 }

 public  int setFeedback(boolean feedback)  {
   return widget_set_feedback(this.nativeObj, feedback);
 }

 public  int setFloating(boolean floating)  {
   return widget_set_floating(this.nativeObj, floating);
 }

 public  int setFocused(boolean focused)  {
   return widget_set_focused(this.nativeObj, focused);
 }

 public  int setState(String state)  {
   return widget_set_state(this.nativeObj, state);
 }

 public  int setOpacity(int opacity)  {
   return widget_set_opacity(this.nativeObj, opacity);
 }

 public  int destroyChildren()  {
   return widget_destroy_children(this.nativeObj);
 }

 public  int addChild(Widget child)  {
   return widget_add_child(this.nativeObj, child != null ? (child.nativeObj) : 0);
 }

 public  int removeChild(Widget child)  {
   return widget_remove_child(this.nativeObj, child != null ? (child.nativeObj) : 0);
 }

 public  int insertChild(int index, Widget child)  {
   return widget_insert_child(this.nativeObj, index, child != null ? (child.nativeObj) : 0);
 }

 public  int restack(int index)  {
   return widget_restack(this.nativeObj, index);
 }

 public  Widget child(String name)  {
   return new Widget(widget_child(this.nativeObj, name));
 }

 public  Widget lookup(String name, boolean recursive)  {
   return new Widget(widget_lookup(this.nativeObj, name, recursive));
 }

 public  Widget lookupByType(String type, boolean recursive)  {
   return new Widget(widget_lookup_by_type(this.nativeObj, type, recursive));
 }

 public  int setVisible(boolean visible, boolean recursive)  {
   return widget_set_visible(this.nativeObj, visible, recursive);
 }

 public  int setVisibleOnly(boolean visible)  {
   return widget_set_visible_only(this.nativeObj, visible);
 }

 public  int setSensitive(boolean sensitive)  {
   return widget_set_sensitive(this.nativeObj, sensitive);
 }

 public  int on(int type, OnEvent on_event, long ctx)  {
   return widget_on(this.nativeObj, type, on_event, ctx);
 }

 public  int onWithTag(int type, OnEvent on_event, long ctx, int tag)  {
   return widget_on_with_tag(this.nativeObj, type, on_event, ctx, tag);
 }

 public  int off(int id)  {
   return widget_off(this.nativeObj, id);
 }

 public  int invalidateForce(Rect r)  {
   return widget_invalidate_force(this.nativeObj, r != null ? (r.nativeObj) : 0);
 }

 public  int setPropStr(String name, String v)  {
   return widget_set_prop_str(this.nativeObj, name, v);
 }

 public  String getPropStr(String name, String defval)  {
   return widget_get_prop_str(this.nativeObj, name, defval);
 }

 public  int setPropInt(String name, int v)  {
   return widget_set_prop_int(this.nativeObj, name, v);
 }

 public  int getPropInt(String name, int defval)  {
   return widget_get_prop_int(this.nativeObj, name, defval);
 }

 public  int setPropBool(String name, boolean v)  {
   return widget_set_prop_bool(this.nativeObj, name, v);
 }

 public  boolean getPropBool(String name, boolean defval)  {
   return widget_get_prop_bool(this.nativeObj, name, defval);
 }

 public  boolean isWindowOpened()  {
   return widget_is_window_opened(this.nativeObj);
 }

 public  boolean isWindow()  {
   return widget_is_window(this.nativeObj);
 }

 public  boolean isDesigningWindow()  {
   return widget_is_designing_window(this.nativeObj);
 }

 public  boolean isWindowManager()  {
   return widget_is_window_manager(this.nativeObj);
 }

 public  int foreach(OnData visit, long ctx)  {
   return widget_foreach(this.nativeObj, visit, ctx);
 }

 public  Widget getWindow()  {
   return new Widget(widget_get_window(this.nativeObj));
 }

 public  Widget getWindowManager()  {
   return new Widget(widget_get_window_manager(this.nativeObj));
 }

 public  String getType()  {
   return widget_get_type(this.nativeObj);
 }

 public  Widget clone(Widget parent)  {
   return new Widget(widget_clone(this.nativeObj, parent != null ? (parent.nativeObj) : 0));
 }

 public  boolean equal(Widget other)  {
   return widget_equal(this.nativeObj, other != null ? (other.nativeObj) : 0);
 }

 public  static Widget cast(Widget widget)  {
   return new Widget(widget_cast(widget != null ? (widget.nativeObj) : 0));
 }

 public  int destroy()  {
   return widget_destroy(this.nativeObj);
 }

 public  int unref()  {
   return widget_unref(this.nativeObj);
 }

 public  int layout()  {
   return widget_layout(this.nativeObj);
 }

 public  int setSelfLayout(String params)  {
   return widget_set_self_layout(this.nativeObj, params);
 }

 public  int setChildrenLayout(String params)  {
   return widget_set_children_layout(this.nativeObj, params);
 }

 public  int setSelfLayoutParams(String x, String y, String w, String h)  {
   return widget_set_self_layout_params(this.nativeObj, x, y, w, h);
 }

 public  int setStyleInt(String state_and_name, int value)  {
   return widget_set_style_int(this.nativeObj, state_and_name, value);
 }

 public  int setStyleStr(String state_and_name, String value)  {
   return widget_set_style_str(this.nativeObj, state_and_name, value);
 }

 public  int setStyleColor(String state_and_name, int value)  {
   return widget_set_style_color(this.nativeObj, state_and_name, value);
 }

 public int getX() {
   return widget_t_get_prop_x(this.nativeObj);
 }

 public int getY() {
   return widget_t_get_prop_y(this.nativeObj);
 }

 public int getW() {
   return widget_t_get_prop_w(this.nativeObj);
 }

 public int getH() {
   return widget_t_get_prop_h(this.nativeObj);
 }

 public String getName() {
   return widget_t_get_prop_name(this.nativeObj);
 }

 public String getTrText() {
   return widget_t_get_prop_tr_text(this.nativeObj);
 }

 public String getStyle() {
   return widget_t_get_prop_style(this.nativeObj);
 }

 public String getAnimation() {
   return widget_t_get_prop_animation(this.nativeObj);
 }

 public boolean getEnable() {
   return widget_t_get_prop_enable(this.nativeObj);
 }

 public boolean getFeedback() {
   return widget_t_get_prop_feedback(this.nativeObj);
 }

 public boolean getVisible() {
   return widget_t_get_prop_visible(this.nativeObj);
 }

 public boolean getSensitive() {
   return widget_t_get_prop_sensitive(this.nativeObj);
 }

 public boolean getFocusable() {
   return widget_t_get_prop_focusable(this.nativeObj);
 }

 public boolean getWithFocusState() {
   return widget_t_get_prop_with_focus_state(this.nativeObj);
 }

 public boolean getFloating() {
   return widget_t_get_prop_floating(this.nativeObj);
 }

 public Widget getParent() {
   return new Widget(widget_t_get_prop_parent(this.nativeObj));
 }

static private native int widget_count_children(long widget);
static private native long widget_get_child(long widget, int index);
static private native int widget_index_of(long widget);
static private native int widget_move(long widget, int x, int y);
static private native int widget_resize(long widget, int w, int h);
static private native int widget_move_resize(long widget, int x, int y, int w, int h);
static private native int widget_set_value(long widget, int value);
static private native int widget_animate_value_to(long widget, int value, int duration);
static private native int widget_add_value(long widget, int delta);
static private native int widget_use_style(long widget, String style);
static private native int widget_set_text_utf8(long widget, String text);
static private native int widget_set_tr_text(long widget, String text);
static private native int widget_get_value(long widget);
static private native long widget_get_text(long widget);
static private native int widget_set_name(long widget, String name);
static private native int widget_set_theme(long widget, String name);
static private native int widget_set_pointer_cursor(long widget, String cursor);
static private native int widget_set_animation(long widget, String animation);
static private native int widget_create_animator(long widget, String animation);
static private native int widget_start_animator(long widget, String name);
static private native int widget_set_animator_time_scale(long widget, String name, double time_scale);
static private native int widget_pause_animator(long widget, String name);
static private native int widget_stop_animator(long widget, String name);
static private native int widget_destroy_animator(long widget, String name);
static private native int widget_set_enable(long widget, boolean enable);
static private native int widget_set_feedback(long widget, boolean feedback);
static private native int widget_set_floating(long widget, boolean floating);
static private native int widget_set_focused(long widget, boolean focused);
static private native int widget_set_state(long widget, String state);
static private native int widget_set_opacity(long widget, int opacity);
static private native int widget_destroy_children(long widget);
static private native int widget_add_child(long widget, long child);
static private native int widget_remove_child(long widget, long child);
static private native int widget_insert_child(long widget, int index, long child);
static private native int widget_restack(long widget, int index);
static private native long widget_child(long widget, String name);
static private native long widget_lookup(long widget, String name, boolean recursive);
static private native long widget_lookup_by_type(long widget, String type, boolean recursive);
static private native int widget_set_visible(long widget, boolean visible, boolean recursive);
static private native int widget_set_visible_only(long widget, boolean visible);
static private native int widget_set_sensitive(long widget, boolean sensitive);
static private native int widget_on(long widget, int type, OnEvent on_event, long ctx);
static private native int widget_on_with_tag(long widget, int type, OnEvent on_event, long ctx, int tag);
static private native int widget_off(long widget, int id);
static private native int widget_invalidate_force(long widget, long r);
static private native int widget_set_prop_str(long widget, String name, String v);
static private native String widget_get_prop_str(long widget, String name, String defval);
static private native int widget_set_prop_int(long widget, String name, int v);
static private native int widget_get_prop_int(long widget, String name, int defval);
static private native int widget_set_prop_bool(long widget, String name, boolean v);
static private native boolean widget_get_prop_bool(long widget, String name, boolean defval);
static private native boolean widget_is_window_opened(long widget);
static private native boolean widget_is_window(long widget);
static private native boolean widget_is_designing_window(long widget);
static private native boolean widget_is_window_manager(long widget);
static private native int widget_foreach(long widget, OnData visit, long ctx);
static private native long widget_get_window(long widget);
static private native long widget_get_window_manager(long widget);
static private native String widget_get_type(long widget);
static private native long widget_clone(long widget, long parent);
static private native boolean widget_equal(long widget, long other);
static private native long widget_cast(long widget);
static private native int widget_destroy(long widget);
static private native int widget_unref(long widget);
static private native int widget_layout(long widget);
static private native int widget_set_self_layout(long widget, String params);
static private native int widget_set_children_layout(long widget, String params);
static private native int widget_set_self_layout_params(long widget, String x, String y, String w, String h);
static private native int widget_set_style_int(long widget, String state_and_name, int value);
static private native int widget_set_style_str(long widget, String state_and_name, String value);
static private native int widget_set_style_color(long widget, String state_and_name, int value);
static private native int widget_t_get_prop_x(long nativeObj);
static private native int widget_t_get_prop_y(long nativeObj);
static private native int widget_t_get_prop_w(long nativeObj);
static private native int widget_t_get_prop_h(long nativeObj);
static private native String widget_t_get_prop_name(long nativeObj);
static private native String widget_t_get_prop_tr_text(long nativeObj);
static private native String widget_t_get_prop_style(long nativeObj);
static private native String widget_t_get_prop_animation(long nativeObj);
static private native boolean widget_t_get_prop_enable(long nativeObj);
static private native boolean widget_t_get_prop_feedback(long nativeObj);
static private native boolean widget_t_get_prop_visible(long nativeObj);
static private native void widget_t_set_prop_visible(long nativeObj, boolean value);
static private native boolean widget_t_get_prop_sensitive(long nativeObj);
static private native void widget_t_set_prop_sensitive(long nativeObj, boolean value);
static private native boolean widget_t_get_prop_focusable(long nativeObj);
static private native void widget_t_set_prop_focusable(long nativeObj, boolean value);
static private native boolean widget_t_get_prop_with_focus_state(long nativeObj);
static private native void widget_t_set_prop_with_focus_state(long nativeObj, boolean value);
static private native boolean widget_t_get_prop_floating(long nativeObj);
static private native long widget_t_get_prop_parent(long nativeObj);
}

