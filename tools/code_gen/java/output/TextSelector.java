class TextSelector extends Widget {
 public long nativeObj;

 public TextSelector(long nativeObj) {
   super(nativeObj);
 }

 static public TextSelector cast(long nativeObj) {
   return new TextSelector(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new TextSelector(text_selector_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new TextSelector(text_selector_cast(widget != null ? (widget.nativeObj) : 0));
 }

 Ret resetOptions()  {
   return text_selector_reset_options(this.nativeObj);
 }

 int countOptions()  {
   return text_selector_count_options(this.nativeObj);
 }

 Ret appendOption(int value, String text)  {
   return text_selector_append_option(this.nativeObj, value, text);
 }

 Ret setOptions(String options)  {
   return text_selector_set_options(this.nativeObj, options);
 }

 Ret setRangeOptions(int start, int nr, int step)  {
   return text_selector_set_range_options(this.nativeObj, start, nr, step);
 }

 int getValue()  {
   return text_selector_get_value(this.nativeObj);
 }

 Ret setValue(int value)  {
   return text_selector_set_value(this.nativeObj, value);
 }

 String getTextValue()  {
   return text_selector_get_text(this.nativeObj);
 }

 Ret setText(String text)  {
   return text_selector_set_text(this.nativeObj, text);
 }

 Ret setSelectedIndex(int index)  {
   return text_selector_set_selected_index(this.nativeObj, index);
 }

 Ret setVisibleNr(int visible_nr)  {
   return text_selector_set_visible_nr(this.nativeObj, visible_nr);
 }

 public int getVisibleNr() {
   return text_selector_t_get_prop_visible_nr(this.nativeObj);
 }

 public int getSelectedIndex() {
   return text_selector_t_get_prop_selected_index(this.nativeObj);
 }

 public String getOptions() {
   return text_selector_t_get_prop_options(this.nativeObj);
 }

static private native long text_selector_create(long parent, int x, int y, int w, int h);
static private native long text_selector_cast(long widget);
static private native Ret text_selector_reset_options(long widget);
static private native int text_selector_count_options(long widget);
static private native Ret text_selector_append_option(long widget, int value, String text);
static private native Ret text_selector_set_options(long widget, String options);
static private native Ret text_selector_set_range_options(long widget, int start, int nr, int step);
static private native int text_selector_get_value(long widget);
static private native Ret text_selector_set_value(long widget, int value);
static private native String text_selector_get_text(long widget);
static private native Ret text_selector_set_text(long widget, String text);
static private native Ret text_selector_set_selected_index(long widget, int index);
static private native Ret text_selector_set_visible_nr(long widget, int visible_nr);
static private native int text_selector_t_get_prop_visible_nr(long nativeObj);
static private native int text_selector_t_get_prop_selected_index(long nativeObj);
static private native String text_selector_t_get_prop_options(long nativeObj);
}

