package awtk;


/**
 * table\_header。一个简单的容器控件，用来放置表头中的子控件。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *table\_header\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于table\_header\_t控件。
 *
 *在xml中使用"table\_header"标签创建table\_header。如：
 *
 *```xml
 *<!-- ui -->
 *<table_header x="0" y="0" w="200" h="30"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<!-- style -->
 *<table_header>
 *<style name="default">
 *<normal bg_color="#e0e0e0"/>
 *</style>
 *</table_header>
 *```
 *
 */
public class TTableHeader extends TWidget { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TTableHeader(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TTableHeader cast(long nativeObj) {
   return new TTableHeader(nativeObj);
 }


  /**
   * 创建table_header对象
   * 
   * @param parent 父控件
   * @param x x坐标
   * @param y y坐标
   * @param w 宽度
   * @param h 高度
   *
   * @return table_header对象。
   */
 public  static TWidget create(TWidget parent, int x, int y, int w, int h)  {
    return new TTableHeader(table_header_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


  /**
   * 转换为table_header对象(供脚本语言使用)。
   * 
   * @param widget table_header对象。
   *
   * @return table_header对象。
   */
 public  static TTableHeader cast(TWidget widget)  {
    return new TTableHeader(table_header_cast(widget != null ? (widget.nativeObj) : 0));
 }

static private native long table_header_create(long parent, int x, int y, int w, int h);
static private native long table_header_cast(long widget);
};