package awtk;



/**
 * LOG的级别。
 *
 */

public enum TTkLogLevel {
  
  /**
   * DEBUG
   *
   */
 
  DEBUG (LOG_LEVEL_DEBUG()),
  
  /**
   * INFO
   *
   */
 
  INFO (LOG_LEVEL_INFO()),
  
  /**
   * WARN
   *
   */
 
  WARN (LOG_LEVEL_WARN()),
  
  /**
   * ERROR
   *
   */
 
  ERROR (LOG_LEVEL_ERROR());
 
 
  private TTkLogLevel(int value) {
    this.value = value;
  }

/**
 * 获取枚举的值。
 *
 * @return 枚举的值。
 */
  public int value() {
    return this.value;
  }

/**
 * 把枚举的值转换层枚举。
 *
 * @param value 枚举的值。

 * @return 对应的枚举类型。
 */
  public static TTkLogLevel from(int value) {
    for(TTkLogLevel iter : TTkLogLevel.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return DEBUG;
  }
  
  private int value;

  static private native int LOG_LEVEL_DEBUG();
  static private native int LOG_LEVEL_INFO();
  static private native int LOG_LEVEL_WARN();
  static private native int LOG_LEVEL_ERROR();

}
