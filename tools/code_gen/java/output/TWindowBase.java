package awtk;


/**
 * 窗口。
 *
 *本类把窗口相关的公共行为进行抽象，放到一起方便重用。目前已知的具体实现如下图：
 *
 *
 *
 *> 本类是一个抽象类，不能进行实例化。请在应用程序中使用具体的类，如window\_t。
 *
 */
public class TWindowBase extends TWidget { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TWindowBase(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TWindowBase cast(long nativeObj) {
   return new TWindowBase(nativeObj);
 }


/**
 * 转换为window_base对象(供脚本语言使用)。
 * 
 * @param widget window_base对象。
 
 * @return window_base对象。
 */
 public  static TWindowBase cast(TWidget widget)  {
    return new TWindowBase(window_base_cast(widget != null ? (widget.nativeObj) : 0));
 }


/**
 * 主题资源的名称。
 *每个窗口都可以有独立的主题文件，如果没指定，则使用系统缺省的主题文件。
 *主题是一个XML文件，放在assets/raw/styles目录下。
 *请参考[主题](https://github.com/zlgopen/awtk/blob/master/docs/theme.md)
 *
 */
 public String getTheme() {
   return window_base_t_get_prop_theme(this.nativeObj);
 }


/**
 * 收到EVT_REQUEST_CLOSE_WINDOW是否自动关闭窗口。
 *
 *如果关闭窗口时，需要用户确认:
 *
 ** 1.将closable设置为WINDOW\_CLOSABLE\_CONFIRM
 *
 ** 2.处理窗口的EVT\_REQUEST\_CLOSE\_WINDOW事件
 *
 *> closable在XML中取值为：yes/no/confirm，缺省为yes。
 *
 */
 public TWindowClosable getClosable() {
   return TWindowClosable.from(window_base_t_get_prop_closable(this.nativeObj));

 }

static private native long window_base_cast(long widget);
static private native String window_base_t_get_prop_theme(long nativeObj);
static private native int window_base_t_get_prop_closable(long nativeObj);
};