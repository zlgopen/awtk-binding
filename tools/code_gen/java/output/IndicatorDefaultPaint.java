package awtk;



/**
 * 指示器默认绘制的类型。
 *
 */

public enum IndicatorDefaultPaint {
  
/**
 * 自动选择。
 *
 */
 
  AUTO (INDICATOR_DEFAULT_PAINT_AUTO()),
  
/**
 * 实心圆点指示器，当前项填充selected_fg_color，其他填充fg_color。
 *
 */
 
  FILL_DOT (INDICATOR_DEFAULT_PAINT_FILL_DOT()),
  
/**
 * 镂空圆点指示器，当前项填充selected_fg_color，其他镂空fg_color。
 *
 */
 
  STROKE_DOT (INDICATOR_DEFAULT_PAINT_STROKE_DOT()),
  
/**
 * 实心矩形指示器，当前项填充selected_fg_color，其他填充fg_color。
 *
 */
 
  FILL_RECT (INDICATOR_DEFAULT_PAINT_FILL_RECT()),
  
/**
 * 镂空矩形指示器，当前项填充selected_fg_color，其他镂空fg_color。
 *
 */
 
  STROKE_RECT (INDICATOR_DEFAULT_PAINT_STROKE_RECT());
 
   
  private int value;
  IndicatorDefaultPaint(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static IndicatorDefaultPaint from(int value) {
    for(IndicatorDefaultPaint iter : IndicatorDefaultPaint.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return AUTO;
  }

  static private native int INDICATOR_DEFAULT_PAINT_AUTO();
  static private native int INDICATOR_DEFAULT_PAINT_FILL_DOT();
  static private native int INDICATOR_DEFAULT_PAINT_STROKE_DOT();
  static private native int INDICATOR_DEFAULT_PAINT_FILL_RECT();
  static private native int INDICATOR_DEFAULT_PAINT_STROKE_RECT();

}
