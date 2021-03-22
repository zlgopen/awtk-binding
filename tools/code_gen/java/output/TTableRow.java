package awtk;


/**
 * table\_row。表示表格的一行。
 *
 *它本身不提供布局功能，仅提供具有语义的标签，让xml更具有可读性。
 *子控件的布局可用layout\_children属性指定。
 *请参考[布局参数](https://github.com/zlgopen/awtk/blob/master/docs/layout.md)。
 *
 *table\_row\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于table\_row\_t控件。
 *
 *在xml中使用"table\_row"标签创建table\_row。
 *
 *table\_row一般放在table\_client对象中，创建一个对象即可，table\_client以此为模版，根据需要创建table\_row对象。
 *
 *如：
 *
 *```xml
 *<!-- ui -->
 *<table_row x="0" y="0" w="200" h="30"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<!-- style -->
 *<table_row>
 *<style name="default" border_color="#d8d8d8" border="bottom">
 *<normal bg_color="#fcfcfc"/>
 *</style>
 *</table_row>
 *```
 *
 */
public class TTableRow extends TWidget { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TTableRow(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TTableRow cast(long nativeObj) {
   return new TTableRow(nativeObj);
 }


  /**
   * 创建table_row对象
   * 
   * @param parent 父控件
   * @param x x坐标
   * @param y y坐标
   * @param w 宽度
   * @param h 高度
   *
   * @return table_row对象。
   */
 public  static TWidget create(TWidget parent, int x, int y, int w, int h)  {
    return new TTableRow(table_row_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


  /**
   * 转换为table_row对象(供脚本语言使用)。
   * 
   * @param widget table_row对象。
   *
   * @return table_row对象。
   */
 public  static TTableRow cast(TWidget widget)  {
    return new TTableRow(table_row_cast(widget != null ? (widget.nativeObj) : 0));
 }


  /**
   * 设置 行的编号。
   * 
   * @param index 行的编号。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setIndex(int index)  {
   return TRet.from(table_row_set_index(this != null ? (this.nativeObj) : 0, index));
 }


  /**
   * 行的编号。
   *
   */
 public int getIndex() {
   return table_row_t_get_prop_index(this.nativeObj);
 }

static private native long table_row_create(long parent, int x, int y, int w, int h);
static private native long table_row_cast(long widget);
static private native int table_row_set_index(long widget, int index);
static private native int table_row_t_get_prop_index(long nativeObj);
};