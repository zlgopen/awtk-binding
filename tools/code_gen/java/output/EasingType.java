package awtk;



/**
 * 缓动作动画常量定义。
 *
 */

public enum EasingType {
  
/**
 * EASING_LINEAR。
 *
 */
 
  LINEAR (EASING_LINEAR()),
  
/**
 * EASING_QUADRATIC_IN
 *
 */
 
  QUADRATIC_IN (EASING_QUADRATIC_IN()),
  
/**
 * EASING_QUADRATIC_OUT
 *
 */
 
  QUADRATIC_OUT (EASING_QUADRATIC_OUT()),
  
/**
 * EASING_QUADRATIC_INOUT
 *
 */
 
  QUADRATIC_INOUT (EASING_QUADRATIC_INOUT()),
  
/**
 * EASING_CUBIC_IN
 *
 */
 
  CUBIC_IN (EASING_CUBIC_IN()),
  
/**
 * EASING_CUBIC_OUT
 *
 */
 
  CUBIC_OUT (EASING_CUBIC_OUT()),
  
/**
 * EASING_SIN_IN
 *
 */
 
  SIN_IN (EASING_SIN_IN()),
  
/**
 * EASING_SIN_OUT
 *
 */
 
  SIN_OUT (EASING_SIN_OUT()),
  
/**
 * EASING_SIN_OUT
 *
 */
 
  SIN_INOUT (EASING_SIN_INOUT()),
  
/**
 * EASING_POW_IN
 *
 */
 
  POW_IN (EASING_POW_IN()),
  
/**
 * EASING_POW_OUT
 *
 */
 
  POW_OUT (EASING_POW_OUT()),
  
/**
 * EASING_POW_INOUT
 *
 */
 
  POW_INOUT (EASING_POW_INOUT()),
  
/**
 * EASING_CIRCULAR_IN
 *
 */
 
  CIRCULAR_IN (EASING_CIRCULAR_IN()),
  
/**
 * EASING_CIRCULAR_OUT
 *
 */
 
  CIRCULAR_OUT (EASING_CIRCULAR_OUT()),
  
/**
 * EASING_CIRCULAR_INOUT
 *
 */
 
  CIRCULAR_INOUT (EASING_CIRCULAR_INOUT()),
  
/**
 * EASING_ELASTIC_IN
 *
 */
 
  ELASTIC_IN (EASING_ELASTIC_IN()),
  
/**
 * EASING_ELASTIC_OUT
 *
 */
 
  ELASTIC_OUT (EASING_ELASTIC_OUT()),
  
/**
 * EASING_ELASTIC_INOUT
 *
 */
 
  ELASTIC_INOUT (EASING_ELASTIC_INOUT()),
  
/**
 * EASING_BACK_IN
 *
 */
 
  BACK_IN (EASING_BACK_IN()),
  
/**
 * EASING_BACK_OUT
 *
 */
 
  BACK_OUT (EASING_BACK_OUT()),
  
/**
 * EASING_BACK_INOUT
 *
 */
 
  BACK_INOUT (EASING_BACK_INOUT()),
  
/**
 * EASING_BOUNCE_IN
 *
 */
 
  BOUNCE_IN (EASING_BOUNCE_IN()),
  
/**
 * EASING_BOUNCE_OUT
 *
 */
 
  BOUNCE_OUT (EASING_BOUNCE_OUT()),
  
/**
 * EASING_BOUNCE_INOUT
 *
 */
 
  BOUNCE_INOUT (EASING_BOUNCE_INOUT());
 
   
  private int value;
  EasingType(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static EasingType from(int value) {
    for(EasingType iter : EasingType.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return LINEAR;
  }

  static private native int EASING_LINEAR();
  static private native int EASING_QUADRATIC_IN();
  static private native int EASING_QUADRATIC_OUT();
  static private native int EASING_QUADRATIC_INOUT();
  static private native int EASING_CUBIC_IN();
  static private native int EASING_CUBIC_OUT();
  static private native int EASING_SIN_IN();
  static private native int EASING_SIN_OUT();
  static private native int EASING_SIN_INOUT();
  static private native int EASING_POW_IN();
  static private native int EASING_POW_OUT();
  static private native int EASING_POW_INOUT();
  static private native int EASING_CIRCULAR_IN();
  static private native int EASING_CIRCULAR_OUT();
  static private native int EASING_CIRCULAR_INOUT();
  static private native int EASING_ELASTIC_IN();
  static private native int EASING_ELASTIC_OUT();
  static private native int EASING_ELASTIC_INOUT();
  static private native int EASING_BACK_IN();
  static private native int EASING_BACK_OUT();
  static private native int EASING_BACK_INOUT();
  static private native int EASING_BOUNCE_IN();
  static private native int EASING_BOUNCE_OUT();
  static private native int EASING_BOUNCE_INOUT();

}
