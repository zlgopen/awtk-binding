package awtk;



/**
 * 字库 bidi 类型常量定义。
 *
 */

public enum TFontBidiType {
  
  /**
   * 自动检查。
   *
   */
 
  AUTO (FONT_BIDI_TYPE_AUTO()),
  
  /**
   * Left-To-Right letter。
   *
   */
 
  LTR (FONT_BIDI_TYPE_LTR()),
  
  /**
   * Right-To-Left letter。
   *
   */
 
  RTL (FONT_BIDI_TYPE_RTL()),
  
  /**
   * Left-To-Right letter Override。
   *
   */
 
  LRO (FONT_BIDI_TYPE_LRO()),
  
  /**
   * Right-To-Left letter Override。
   *
   */
 
  RLO (FONT_BIDI_TYPE_RLO()),
  
  /**
   * Weak Left To Right paragraph。
   *
   */
 
  WLTR (FONT_BIDI_TYPE_WLTR()),
  
  /**
   * Weak Right To Left paragraph。
   *
   */
 
  WRTL (FONT_BIDI_TYPE_WRTL());
 
 
  private TFontBidiType(int value) {
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
  public static TFontBidiType from(int value) {
    for(TFontBidiType iter : TFontBidiType.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return AUTO;
  }
  
  private int value;

  static private native int FONT_BIDI_TYPE_AUTO();
  static private native int FONT_BIDI_TYPE_LTR();
  static private native int FONT_BIDI_TYPE_RTL();
  static private native int FONT_BIDI_TYPE_LRO();
  static private native int FONT_BIDI_TYPE_RLO();
  static private native int FONT_BIDI_TYPE_WLTR();
  static private native int FONT_BIDI_TYPE_WRTL();

}
