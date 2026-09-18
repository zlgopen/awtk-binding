package awtk;



/**
 * 填充规则。
 *
 */

public enum TVgcanvasFillMode {
  
  /**
   * 全部填充。（部分vg渲染引擎可能不支持，会退化为非零规则填充）
   *
   */
 
  ALL_FILL (VGCANVAS_FILL_MODE_ALL_FILL()),
  
  /**
   * 非零规则填充。
   *
   */
 
  NON_ZERO (VGCANVAS_FILL_MODE_NON_ZERO()),
  
  /**
   * 奇偶规则填充。
   *
   */
 
  EVEN_ODD (VGCANVAS_FILL_MODE_EVEN_ODD());
 
 
  private TVgcanvasFillMode(int value) {
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
  public static TVgcanvasFillMode from(int value) {
    for(TVgcanvasFillMode iter : TVgcanvasFillMode.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return ALL_FILL;
  }
  
  private int value;

  static private native int VGCANVAS_FILL_MODE_ALL_FILL();
  static private native int VGCANVAS_FILL_MODE_NON_ZERO();
  static private native int VGCANVAS_FILL_MODE_EVEN_ODD();

}
