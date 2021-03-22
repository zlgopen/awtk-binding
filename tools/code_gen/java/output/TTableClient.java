package awtk;


/**
 * table\_client。表示表格的数据区。
 *
 *table\_client\_t是[widget\_t](widget_t.md)的子类控件，widget\_t的函数均适用于table\_client\_t控件。
 *
 *在xml中使用"table\_client"标签创建table\_client。
 *
 *一般放在table\_client对象中放一个table\_row即可，table\_client以此为模版，根据需要创建table\_row对象。
 *
 *如：
 *
 *```xml
 *<!-- ui -->
 *<table_client x="0" y="0" w="200" h="200"/>
 *```
 *
 *可用通过style来设置控件的显示风格，如背景颜色等。如：
 *
 *```xml
 *<!-- style -->
 *<table_client>
 *<style name="default">
 *<normal />
 *</style>
 *</table_client>
 *```
 *
 */
public class TTableClient extends TWidget { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TTableClient(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TTableClient cast(long nativeObj) {
   return new TTableClient(nativeObj);
 }


  /**
   * 创建table_client对象
   * 
   * @param parent 父控件
   * @param x x坐标
   * @param y y坐标
   * @param w 宽度
   * @param h 高度
   *
   * @return table_client对象。
   */
 public  static TWidget create(TWidget parent, int x, int y, int w, int h)  {
    return new TTableClient(table_client_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }


  /**
   * 转换为table_client对象(供脚本语言使用)。
   * 
   * @param widget table_client对象。
   *
   * @return table_client对象。
   */
 public  static TTableClient cast(TWidget widget)  {
    return new TTableClient(table_client_cast(widget != null ? (widget.nativeObj) : 0));
 }


  /**
   * 设置 行高。
   * 
   * @param row_height 行高。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setRowHeight(int row_height)  {
   return TRet.from(table_client_set_row_height(this != null ? (this.nativeObj) : 0, row_height));
 }


  /**
   * 设置 最大行数。
   * 
   * @param rows 最大行数。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setRows(int rows)  {
   return TRet.from(table_client_set_rows(this != null ? (this.nativeObj) : 0, rows));
 }


  /**
   * 设置 偏移量。
   * 
   * @param yoffset 偏移量。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setYoffset(int yoffset)  {
   return TRet.from(table_client_set_yoffset(this != null ? (this.nativeObj) : 0, yoffset));
 }


  /**
   * 设置 是否允许y方向滑动。
   * 
   * @param yslidable 是否允许y方向滑动。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setYslidable(boolean yslidable)  {
   return TRet.from(table_client_set_yslidable(this != null ? (this.nativeObj) : 0, yslidable));
 }


  /**
   * 设置 y偏移速度比例。
   * 
   * @param yspeed_scale y偏移速度比例。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setYspeedScale(double yspeed_scale)  {
   return TRet.from(table_client_set_yspeed_scale(this != null ? (this.nativeObj) : 0, yspeed_scale));
 }


  /**
   * 行高。
   *
   */
 public int getRowHeight() {
   return table_client_t_get_prop_row_height(this.nativeObj);
 }


  /**
   * 最大行数。
   *
   */
 public int getRows() {
   return table_client_t_get_prop_rows(this.nativeObj);
 }


  /**
   * 偏移量。
   *
   */
 public int getYoffset() {
   return table_client_t_get_prop_yoffset(this.nativeObj);
 }


  /**
   * 是否允许y方向滑动。
   *
   */
 public boolean getYslidable() {
   return table_client_t_get_prop_yslidable(this.nativeObj);
 }


  /**
   * y偏移速度比例。
   *
   */
 public double getYspeedScale() {
   return table_client_t_get_prop_yspeed_scale(this.nativeObj);
 }

static private native long table_client_create(long parent, int x, int y, int w, int h);
static private native long table_client_cast(long widget);
static private native int table_client_set_row_height(long widget, int row_height);
static private native int table_client_set_rows(long widget, int rows);
static private native int table_client_set_yoffset(long widget, int yoffset);
static private native int table_client_set_yslidable(long widget, boolean yslidable);
static private native int table_client_set_yspeed_scale(long widget, double yspeed_scale);
static private native int table_client_t_get_prop_row_height(long nativeObj);
static private native int table_client_t_get_prop_rows(long nativeObj);
static private native int table_client_t_get_prop_yoffset(long nativeObj);
static private native boolean table_client_t_get_prop_yslidable(long nativeObj);
static private native double table_client_t_get_prop_yspeed_scale(long nativeObj);
};