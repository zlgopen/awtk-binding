class ComboBox extends Widget {
 public long nativeObj;

 public ComboBox(long nativeObj) {
   super(nativeObj);
 }

 static public ComboBox cast(long nativeObj) {
   return new ComboBox(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new ComboBox(combo_box_create(parent != null ? parent.nativeObj : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new ComboBox(combo_box_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret setOpenWindow(String open_window)  {
   return combo_box_set_open_window(this.nativeObj, open_window);
 }

 Ret resetOptions()  {
   return combo_box_reset_options(this.nativeObj);
 }

 int countOptions()  {
   return combo_box_count_options(this.nativeObj);
 }

 Ret setSelectedIndex(int index)  {
   return combo_box_set_selected_index(this.nativeObj, index);
 }

 Ret setLocalizeOptions(boolean localize_options)  {
   return combo_box_set_localize_options(this.nativeObj, localize_options);
 }

 Ret setValue(int value)  {
   return combo_box_set_value(this.nativeObj, value);
 }

 Ret setItemHeight(int item_height)  {
   return combo_box_set_item_height(this.nativeObj, item_height);
 }

 Ret appendOption(int value, String text)  {
   return combo_box_append_option(this.nativeObj, value, text);
 }

 Ret setOptions(String options)  {
   return combo_box_set_options(this.nativeObj, options);
 }

 int getValue()  {
   return combo_box_get_value(this.nativeObj);
 }

 String getTextValue()  {
   return combo_box_get_text(this.nativeObj);
 }

 public String getOpenWindow() {
   return combo_box_t_get_prop_open_window(this.nativeObj);
 }

 public int getSelectedIndex() {
   return combo_box_t_get_prop_selected_index(this.nativeObj);
 }

 public boolean getLocalizeOptions() {
   return combo_box_t_get_prop_localize_options(this.nativeObj);
 }

 public String getOptions() {
   return combo_box_t_get_prop_options(this.nativeObj);
 }

 public int getItemHeight() {
   return combo_box_t_get_prop_item_height(this.nativeObj);
 }

static private native long combo_box_create(long parent, int x, int y, int w, int h);
static private native long combo_box_cast(long widget);
static private native Ret combo_box_set_open_window(long widget, String open_window);
static private native Ret combo_box_reset_options(long widget);
static private native int combo_box_count_options(long widget);
static private native Ret combo_box_set_selected_index(long widget, int index);
static private native Ret combo_box_set_localize_options(long widget, boolean localize_options);
static private native Ret combo_box_set_value(long widget, int value);
static private native Ret combo_box_set_item_height(long widget, int item_height);
static private native Ret combo_box_append_option(long widget, int value, String text);
static private native Ret combo_box_set_options(long widget, String options);
static private native int combo_box_get_value(long widget);
static private native String combo_box_get_text(long widget);
static private native String combo_box_t_get_prop_open_window(long nativeObj);
static private native int combo_box_t_get_prop_selected_index(long nativeObj);
static private native int combo_box_t_get_prop_value(long nativeObj);
static private native boolean combo_box_t_get_prop_localize_options(long nativeObj);
static private native String combo_box_t_get_prop_options(long nativeObj);
static private native int combo_box_t_get_prop_item_height(long nativeObj);
}
