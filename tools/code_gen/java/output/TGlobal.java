package awtk;


/**
 * TK全局对象。
 *
 */
public class TGlobal { 

  /**
   * 初始化基本功能。
   *> 在tk_init之前，应用程序可能需要加载配置文件，
   *> 为了保证这些功能正常工作，可以先调用tk_pre_init来初始化平台、内存和data reader等等。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet preInit()  {
   return TRet.from(tk_pre_init());
 }


  /**
   * 初始化TK。
   * 
   * @param w LCD宽度。
   * @param h LCD高度。
   * @param app_type 应用程序的类型。
   * @param app_name 应用程序的名称(必须为常量字符串)。
   * @param app_root 应用程序的根目录，用于定位资源文件(必须为常量字符串)。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet init(int w, int h, TAppType app_type, String app_name, String app_root)  {
   return TRet.from(tk_init(w, h, app_type.value(), app_name, app_root));
 }


  /**
   * 进入TK事件主循环。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet run()  {
   return TRet.from(tk_run());
 }


  /**
   * 退出TK事件主循环。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet quit()  {
   return TRet.from(tk_quit());
 }


  /**
   * 退出TK事件主循环。
   * 
   * @param delay 延迟退出的时间(毫秒)。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet quitEx(int delay)  {
   return TRet.from(tk_quit_ex(delay));
 }


  /**
   * 获取全局指针的X坐标。
   * 
   *
   * @return 返回全局指针的X坐标。
   */
 public  static int getPointerX()  {
    return tk_get_pointer_x();
 }


  /**
   * 获取全局指针的Y坐标。
   * 
   *
   * @return 返回全局指针的X坐标。
   */
 public  static int getPointerY()  {
    return tk_get_pointer_y();
 }


  /**
   * 获取全局指针是否按下。
   * 
   *
   * @return 返回全局指针是否按下。
   */
 public  static boolean isPointerPressed()  {
    return tk_is_pointer_pressed();
 }

static private native int tk_pre_init();
static private native int tk_init(int w, int h, int app_type, String app_name, String app_root);
static private native int tk_run();
static private native int tk_quit();
static private native int tk_quit_ex(int delay);
static private native int tk_get_pointer_x();
static private native int tk_get_pointer_y();
static private native boolean tk_is_pointer_pressed();
};