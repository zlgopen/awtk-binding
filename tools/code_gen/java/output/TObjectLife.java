package awtk;



/**
 * 对象生命周期的定义。如果需要保存对象的实例，如何决定对象的生命周期。
 *
 */

public enum TObjectLife {
  
  /**
   * 不关心对象的生命周期(假设对象的生命周期长于当前的上下文)。
   *
   */
 
  NONE (OBJECT_LIFE_NONE()),
  
  /**
   * 拥有对象的生命周期。当前上下文开始时，*不会* 增加对象的引用计数。当前上下文结束时，自动减少(unref)对象引用计数。
   *
   */
 
  OWN (OBJECT_LIFE_OWN()),
  
  /**
   * 持有对象的生命周期。当前上下文开始时，增加对象的引用计数。当前上下文结束时，自动减少(unref)对象引用计数。
   *
   */
 
  HOLD (OBJECT_LIFE_HOLD());
 
 
  private TObjectLife(int value) {
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
  public static TObjectLife from(int value) {
    for(TObjectLife iter : TObjectLife.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return NONE;
  }
  
  private int value;

  static private native int OBJECT_LIFE_NONE();
  static private native int OBJECT_LIFE_OWN();
  static private native int OBJECT_LIFE_HOLD();

}
