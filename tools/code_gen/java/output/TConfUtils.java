package awtk;


/**
 * 工具类。
 *
 */
public class TConfUtils { 

  /**
   * 加载配置文件到对象中。
   * 
   * @param obj object对象。
   * @param url 配置文件路径。
   * @param type 配置文件类型, 如果为NULL，则自动检测。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet objectLoadConf(TObject obj, String url, String type)  {
   return TRet.from(object_load_conf(obj != null ? (obj.nativeObj) : 0, url, type));
 }

static private native int object_load_conf(long obj, String url, String type);
};