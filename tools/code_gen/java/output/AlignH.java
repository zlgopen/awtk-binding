package awtk;



/**
 * 水平对齐的常量定义。
 *
 */

public enum AlignH {
  
/**
 * 无效对齐方式。
 *
 */
 
  NONE (ALIGN_H_NONE()),
  
/**
 * 居中对齐。
 *
 */
 
  CENTER (ALIGN_H_CENTER()),
  
/**
 * 左边对齐。
 *
 */
 
  LEFT (ALIGN_H_LEFT()),
  
/**
 * 右边对齐。
 *
 */
 
  RIGHT (ALIGN_H_RIGHT());
 
   
  private int value;
  AlignH(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static AlignH from(int value) {
    for(AlignH iter : AlignH.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return NONE;
  }

  static private native int ALIGN_H_NONE();
  static private native int ALIGN_H_CENTER();
  static private native int ALIGN_H_LEFT();
  static private native int ALIGN_H_RIGHT();

}
