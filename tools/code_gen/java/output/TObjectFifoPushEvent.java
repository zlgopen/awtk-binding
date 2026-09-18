package awtk;


/**
 * 追加元素事件。
 *
 */
public class TObjectFifoPushEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TObjectFifoPushEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TObjectFifoPushEvent cast(long nativeObj) {
   return new TObjectFifoPushEvent(nativeObj);
 }


  /**
   * 追加元素的个数。
   *
   */
 public int getNr() {
   return object_fifo_push_event_t_get_prop_nr(this.nativeObj);
 }


  /**
   * 追加数据。
   *
   */
 public long getData() {
   return object_fifo_push_event_t_get_prop_data(this.nativeObj);
 }

static private native int object_fifo_push_event_t_get_prop_nr(long nativeObj);
static private native long object_fifo_push_event_t_get_prop_data(long nativeObj);
};