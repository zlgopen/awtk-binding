package awtk;



/**
 * 应用程序类型。
 *
 */

public enum AppType {
  
/**
 * 嵌入式或移动APP
 *
 */
 
  MOBILE (APP_MOBILE()),
  
/**
 * 模拟器。
 *
 */
 
  SIMULATOR (APP_SIMULATOR()),
  
/**
 * 桌面应用程序。
 *
 */
 
  DESKTOP (APP_DESKTOP());
 
   
  private int value;
  AppType(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static AppType from(int value) {
    for(AppType iter : AppType.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return MOBILE;
  }

  static private native int APP_MOBILE();
  static private native int APP_SIMULATOR();
  static private native int APP_DESKTOP();

}
