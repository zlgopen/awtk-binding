package awtk;


/**
 * 值改变事件。
 *
 */
public class TObjectFifoValueChangeEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TObjectFifoValueChangeEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TObjectFifoValueChangeEvent cast(long nativeObj) {
   return new TObjectFifoValueChangeEvent(nativeObj);
 }


  /**
   * 把event对象转object_fifo_event_set_t对象，主要给脚本语言使用。
   * 
   * @param event event对象。
   *
   * @return event对象。
   */
 public  static TObjectFifoValueChangeEvent objectFifoSetEventCast(TEvent event)  {
    return new TObjectFifoValueChangeEvent(object_fifo_set_event_cast(event != null ? (event.nativeObj) : 0));
 }


  /**
   * 把event对象转object_fifo_push_event_t对象，主要给脚本语言使用。
   * 
   * @param event event对象。
   *
   * @return event对象。
   */
 public  static TObjectFifoValueChangeEvent objectFifoPushEventCast(TEvent event)  {
    return new TObjectFifoValueChangeEvent(object_fifo_push_event_cast(event != null ? (event.nativeObj) : 0));
 }


  /**
   * 把event对象转object_fifo_push_head_event_t对象，主要给脚本语言使用。
   * 
   * @param event event对象。
   *
   * @return event对象。
   */
 public  static TObjectFifoValueChangeEvent objectFifoPushHeadEventCast(TEvent event)  {
    return new TObjectFifoValueChangeEvent(object_fifo_push_head_event_cast(event != null ? (event.nativeObj) : 0));
 }


  /**
   * 把event对象转object_fifo_pop_event_t对象，主要给脚本语言使用。
   * 
   * @param event event对象。
   *
   * @return event对象。
   */
 public  static TObjectFifoValueChangeEvent objectFifoPopEventCast(TEvent event)  {
    return new TObjectFifoValueChangeEvent(object_fifo_pop_event_cast(event != null ? (event.nativeObj) : 0));
 }


  /**
   * 把event对象转object_fifo_pop_tail_event_t对象，主要给脚本语言使用。
   * 
   * @param event event对象。
   *
   * @return event对象。
   */
 public  static TObjectFifoValueChangeEvent objectFifoPopTailEventCast(TEvent event)  {
    return new TObjectFifoValueChangeEvent(object_fifo_pop_tail_event_cast(event != null ? (event.nativeObj) : 0));
 }


  /**
   * 把event对象转object_fifo_value_change_event_t对象，主要给脚本语言使用。
   * 
   * @param event event对象。
   *
   * @return event对象。
   */
 public  static TObjectFifoValueChangeEvent cast(TEvent event)  {
    return new TObjectFifoValueChangeEvent(object_fifo_value_change_event_cast(event != null ? (event.nativeObj) : 0));
 }


  /**
   * 具体的事件类型。
   *
   */
 public int getType() {
   return object_fifo_value_change_event_t_get_prop_type(this.nativeObj);
 }

static private native long object_fifo_set_event_cast(long event);
static private native long object_fifo_push_event_cast(long event);
static private native long object_fifo_push_head_event_cast(long event);
static private native long object_fifo_pop_event_cast(long event);
static private native long object_fifo_pop_tail_event_cast(long event);
static private native long object_fifo_value_change_event_cast(long event);
static private native int object_fifo_value_change_event_t_get_prop_type(long nativeObj);
};