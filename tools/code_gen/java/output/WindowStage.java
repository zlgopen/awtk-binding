package awtk;



/**
 * 窗口的生命周期常量定义。
 *
 */

public enum WindowStage {
  
/**
 * 初始状态。
 *
 */
 
  NONE (WINDOW_STAGE_NONE()),
  
/**
 * 创建完成。
 *
 */
 
  CREATED (WINDOW_STAGE_CREATED()),
  
/**
 * 窗口已经打开(窗口打开动画完成后，处于该状态，直到窗口被关闭)
 *
 */
 
  OPENED (WINDOW_STAGE_OPENED()),
  
/**
 * 窗口已关闭。
 *
 */
 
  CLOSED (WINDOW_STAGE_CLOSED());
 
   
  private int value;
  WindowStage(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static WindowStage from(int value) {
    for(WindowStage iter : WindowStage.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return NONE;
  }

  static private native int WINDOW_STAGE_NONE();
  static private native int WINDOW_STAGE_CREATED();
  static private native int WINDOW_STAGE_OPENED();
  static private native int WINDOW_STAGE_CLOSED();

}
