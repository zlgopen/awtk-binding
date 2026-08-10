package awtk;


/**
 * 在头部插入元素事件。
 *
 */
public class TObjectFifoPushHeadEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TObjectFifoPushHeadEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TObjectFifoPushHeadEvent cast(long nativeObj) {
   return new TObjectFifoPushHeadEvent(nativeObj);
 }


  /**
   * 插入元素的个数。
   *
   */
 public int getNr() {
   return object_fifo_push_head_event_t_get_prop_nr(this.nativeObj);
 }


  /**
   * 插入数据。
   *
   */
 public long getData() {
   return object_fifo_push_head_event_t_get_prop_data(this.nativeObj);
 }

static private native int object_fifo_push_head_event_t_get_prop_nr(long nativeObj);
static private native long object_fifo_push_head_event_t_get_prop_data(long nativeObj);
};