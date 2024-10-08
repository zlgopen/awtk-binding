package awtk;


/**
 * 控件风格。
 *
 *widget从style对象中，获取诸如字体、颜色和图片相关的参数，根据这些参数来绘制界面。
 *
 *
 *
 *属性名称的请参考[style\_id](style_id_t.md)
 *
 */
public class TStyle { 

/**
 * 原生对象。
 */
 public long nativeObj;


/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TStyle(long nativeObj) {
   this.nativeObj = nativeObj;
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TStyle cast(long nativeObj) {
   return new TStyle(nativeObj);
 }


  /**
   * widget状态改变时，通知style更新数据。
   * 
   * @param widget 控件对象。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet notifyWidgetStateChanged(TWidget widget)  {
   return TRet.from(style_notify_widget_state_changed(this != null ? (this.nativeObj) : 0, widget != null ? (widget.nativeObj) : 0));
 }


  /**
   * 检查style对象是否有效
   * 
   *
   * @return 返回是否有效。
   */
 public  boolean isValid()  {
    return style_is_valid(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 获取指定name的整数格式的值。
   * 
   * @param name 属性名。
   * @param defval 缺省值。
   *
   * @return 返回整数格式的值。
   */
 public  int getInt(String name, int defval)  {
    return style_get_int(this != null ? (this.nativeObj) : 0, name, defval);
 }


  /**
   * 获取指定name的无符号整数格式的值。
   * 
   * @param name 属性名。
   * @param defval 缺省值。
   *
   * @return 返回无符号整数格式的值。
   */
 public  int getUint(String name, int defval)  {
    return style_get_uint(this != null ? (this.nativeObj) : 0, name, defval);
 }


  /**
   * 获取指定name的字符串格式的值。
   * 
   * @param name 属性名。
   * @param defval 缺省值。
   *
   * @return 返回字符串格式的值。
   */
 public  String getStr(String name, String defval)  {
    return style_get_str(this != null ? (this.nativeObj) : 0, name, defval);
 }


  /**
   * 获取指定状态的指定属性的值。
   * 
   * @param state 状态。
   * @param name 属性名。
   * @param value 值。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet get(String state, String name, TValue value)  {
   return TRet.from(style_get(this != null ? (this.nativeObj) : 0, state, name, value != null ? (value.nativeObj) : 0));
 }


  /**
   * 设置指定状态的指定属性的值(仅仅对mutable的style有效)。
   * 
   * @param state 状态。
   * @param name 属性名。
   * @param value 值。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet set(String state, String name, TValue value)  {
   return TRet.from(style_set(this != null ? (this.nativeObj) : 0, state, name, value != null ? (value.nativeObj) : 0));
 }


  /**
   * 更新风格对象的状态以及对应的数据
   *备注：根据 widget_type 和 style_name 以及 widget_state 在 theme 对象中查找对应的数据并且更新到 style 对象中
   * 
   * @param theme theme对象。
   * @param widget_type 控件的类型名。
   * @param style_name style的名称。
   * @param widget_state 控件的状态。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet updateState(TTheme theme, String widget_type, String style_name, String widget_state)  {
   return TRet.from(style_update_state(this != null ? (this.nativeObj) : 0, theme != null ? (theme.nativeObj) : 0, widget_type, style_name, widget_state));
 }


  /**
   * 获取风格对象的风格状态
   * 
   *
   * @return 返回风格状态。
   */
 public  String getStyleState()  {
    return style_get_style_state(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 检查style是否是mutable的。
   * 
   *
   * @return 返回TRUE表示是，否则表示不是。
   */
 public  boolean isMutable()  {
    return style_is_mutable(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 获取 style 的风格类型。
   * 
   *
   * @return 返回风格类型。
   */
 public  String getStyleType()  {
    return style_get_style_type(this != null ? (this.nativeObj) : 0);
 }

static private native int style_notify_widget_state_changed(long s, long widget);
static private native boolean style_is_valid(long s);
static private native int style_get_int(long s, String name, int defval);
static private native int style_get_uint(long s, String name, int defval);
static private native String style_get_str(long s, String name, String defval);
static private native int style_get(long s, String state, String name, long value);
static private native int style_set(long s, String state, String name, long value);
static private native int style_update_state(long s, long theme, String widget_type, String style_name, String widget_state);
static private native String style_get_style_state(long s);
static private native boolean style_is_mutable(long s);
static private native String style_get_style_type(long s);
};