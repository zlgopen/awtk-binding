package awtk;


/**
 * 设置元素事件。
 *
 */
public class TObjectFifoSetEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TObjectFifoSetEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TObjectFifoSetEvent cast(long nativeObj) {
   return new TObjectFifoSetEvent(nativeObj);
 }


  /**
   * 设置元素时的指定位置。
   *
   */
 public int getIndex() {
   return object_fifo_set_event_t_get_prop_index(this.nativeObj);
 }


  /**
   * 设置元素的个数。
   *
   */
 public int getNr() {
   return object_fifo_set_event_t_get_prop_nr(this.nativeObj);
 }


  /**
   * 设置数据。
   *
   */
 public long getData() {
   return object_fifo_set_event_t_get_prop_data(this.nativeObj);
 }

static private native int object_fifo_set_event_t_get_prop_index(long nativeObj);
static private native int object_fifo_set_event_t_get_prop_nr(long nativeObj);
static private native long object_fifo_set_event_t_get_prop_data(long nativeObj);
};