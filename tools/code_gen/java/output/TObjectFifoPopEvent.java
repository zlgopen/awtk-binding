package awtk;


/**
 * 弹出元素事件。
 *
 */
public class TObjectFifoPopEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TObjectFifoPopEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TObjectFifoPopEvent cast(long nativeObj) {
   return new TObjectFifoPopEvent(nativeObj);
 }


  /**
   * 弹出元素的个数。
   *
   */
 public int getNr() {
   return object_fifo_pop_event_t_get_prop_nr(this.nativeObj);
 }

static private native int object_fifo_pop_event_t_get_prop_nr(long nativeObj);
};