package awtk;


/**
 * 从末尾弹出元素事件。
 *
 */
public class TObjectFifoPopTailEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TObjectFifoPopTailEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TObjectFifoPopTailEvent cast(long nativeObj) {
   return new TObjectFifoPopTailEvent(nativeObj);
 }


  /**
   * 弹出元素的个数。
   *
   */
 public int getNr() {
   return object_fifo_pop_tail_event_t_get_prop_nr(this.nativeObj);
 }

static private native int object_fifo_pop_tail_event_t_get_prop_nr(long nativeObj);
};