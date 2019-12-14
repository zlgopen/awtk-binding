package awtk;



/**
 * 窗口的closable常量定义。
 *
 */

public enum WindowClosable {
  
/**
 * 窗口可关闭。
 *
 */
 
  YES (WINDOW_CLOSABLE_YES()),
  
/**
 * 窗口不可关闭。
 *
 */
 
  NO (WINDOW_CLOSABLE_NO()),
  
/**
 * 窗口需要确认后才能关闭。
 *
 */
 
  CONFIRM (WINDOW_CLOSABLE_CONFIRM());
 
   
  private int value;
  WindowClosable(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static WindowClosable from(int value) {
    for(WindowClosable iter : WindowClosable.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return YES;
  }

  static private native int WINDOW_CLOSABLE_YES();
  static private native int WINDOW_CLOSABLE_NO();
  static private native int WINDOW_CLOSABLE_CONFIRM();

}
