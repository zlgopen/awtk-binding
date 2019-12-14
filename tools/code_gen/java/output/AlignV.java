package awtk;



/**
 * 垂直对齐的常量定义。
 *
 */

public enum AlignV {
  
/**
 * 无效对齐方式。
 *
 */
 
  NONE (ALIGN_V_NONE()),
  
/**
 * 居中对齐。
 *
 */
 
  MIDDLE (ALIGN_V_MIDDLE()),
  
/**
 * 顶部对齐。
 *
 */
 
  TOP (ALIGN_V_TOP()),
  
/**
 * 底部对齐。
 *
 */
 
  BOTTOM (ALIGN_V_BOTTOM());
 
   
  private int value;
  AlignV(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static AlignV from(int value) {
    for(AlignV iter : AlignV.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return NONE;
  }

  static private native int ALIGN_V_NONE();
  static private native int ALIGN_V_MIDDLE();
  static private native int ALIGN_V_TOP();
  static private native int ALIGN_V_BOTTOM();

}
