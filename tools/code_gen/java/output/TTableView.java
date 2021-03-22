package awtk;


/**
 * 表格视图。
 *
 *table\_view\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于table\_view\_t控件。
 *
 *在xml中使用"table\_view"标签创建table\_view。
 *
 *table\_view中一般放table\_header、table\_client和滚动条控件。
 *
 *table\_header和滚动条为可选，table\_client为必选。
 *
 *如：
 *
 *```xml
 *<!-- ui -->
 *<table_view x="10" y="10" w="200" h="200">
 *<table_header x="0" y="0" w="-12" h="30" name="table_header" children_layout="default(r=1,c=0,s=5,m=5)">
 *<label w="30%" text="Name"/>
 *<label w="40%" text="Value"/>
 *<label w="30%" text="Action"/>
 *</table_header>
 *
 *<table_client name="table_client" x="0"  y="30" w="-12" h="-30" row_height="40" rows="1">
 *<table_row children_layout="default(r=1,c=0,s=5,m=5)">
 *<label name="name"  w="30%" h="100%" text="name"/>
 *<edit name="value" w="40%" h="100%"/>
 *<button name="remove" w="30%" h="100%" text="Remove"/>
 *</table_row>
 *</table_client>
 *<scroll_bar_d name="scroll_bar" x="r" y="0" w="12" h="100%" value="0"/>
 *</table_view>
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
 *<table_client>
 *<style name="default">
 *<normal/>
 *</style>
 *</table_client>
 *<table_row>
 *<style name="default" border_color="#d8d8d8" border="bottom">
 *<normal bg_color="#fcfcfc"/>
 *</style>
 *</table_row>
 *<table_view>
 *<style name="default" border_color="#c2c2c2">
 *<normal bg_color="#f4f4f4"/>
 *</style>
 *</table_view>
 *```
 *
 */
public class TTableView extends TWidget { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TTableView(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TTableView cast(long nativeObj) {
   return new TTableView(nativeObj);
 }


  /**
   * 创建table_view对象
   * 
   * @param parent 父控件
   * @param x x坐标
   * @param y y坐标
   * @param w 宽度
   * @param h 高度
   *
   * @return table_view对象。
   */
 public  static TWidget create(TWidget parent, int x, int y, int w, int h)  {
    return new TTableView(table_view_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


  /**
   * 转换为table_view对象(供脚本语言使用)。
   * 
   * @param widget table_view对象。
   *
   * @return table_view对象。
   */
 public  static TTableView cast(TWidget widget)  {
    return new TTableView(table_view_cast(widget != null ? (widget.nativeObj) : 0));
 }

static private native long table_view_create(long parent, int x, int y, int w, int h);
static private native long table_view_cast(long widget);
};