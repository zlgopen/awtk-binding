package awtk;



/**
 * 输入类型常量定义。
 *
 */

public enum InputType {
  
/**
 * 文本。
 *
 */
 
  TEXT (INPUT_TEXT()),
  
/**
 * 整数。
 *
 */
 
  INT (INPUT_INT()),
  
/**
 * 非负整数。
 *
 */
 
  UINT (INPUT_UINT()),
  
/**
 * 16进制整数。
 *
 */
 
  HEX (INPUT_HEX()),
  
/**
 * 浮点数。
 *
 */
 
  FLOAT (INPUT_FLOAT()),
  
/**
 * 非负浮点数。
 *
 */
 
  UFLOAT (INPUT_UFLOAT()),
  
/**
 * 邮件地址。
 *
 */
 
  EMAIL (INPUT_EMAIL()),
  
/**
 * 密码。
 *
 */
 
  PASSWORD (INPUT_PASSWORD()),
  
/**
 * 电话号码。
 *
 */
 
  PHONE (INPUT_PHONE()),
  
/**
 * 使用自定义的软键盘(如计算器等应用不希望弹出系统软键盘)。
 *
 */
 
  CUSTOM (INPUT_CUSTOM()),
  
/**
 * 使用自定义的密码软键盘。
 *
 */
 
  CUSTOM_PASSWORD (INPUT_CUSTOM_PASSWORD());
 
   
  private int value;
  InputType(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static InputType from(int value) {
    for(InputType iter : InputType.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return TEXT;
  }

  static private native int INPUT_TEXT();
  static private native int INPUT_INT();
  static private native int INPUT_UINT();
  static private native int INPUT_HEX();
  static private native int INPUT_FLOAT();
  static private native int INPUT_UFLOAT();
  static private native int INPUT_EMAIL();
  static private native int INPUT_PASSWORD();
  static private native int INPUT_PHONE();
  static private native int INPUT_CUSTOM();
  static private native int INPUT_CUSTOM_PASSWORD();

}
