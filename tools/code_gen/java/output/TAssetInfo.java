package awtk;


/**
 * 单个资源的描述信息。
 *
 */
public class TAssetInfo { 

/**
 * 原生对象。
 */
 public long nativeObj;


/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TAssetInfo(long nativeObj) {
   this.nativeObj = nativeObj;
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TAssetInfo cast(long nativeObj) {
   return new TAssetInfo(nativeObj);
 }


  /**
   * 获取类型。
   * 
   *
   * @return 返回类型。
   */
 public  int getType()  {
    return asset_info_get_type(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 获取名称。
   * 
   *
   * @return 返回名称。
   */
 public  String getName()  {
    return asset_info_get_name(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 资源是否在ROM中。
   * 
   *
   * @return 返回 TRUE 为在 ROM 中，返回 FALSE 则不在。
   */
 public  boolean isInRom()  {
    return asset_info_is_in_rom(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 设置资源是否在ROM中的标记位。
   * 
   * @param is_in_rom 资源是否在ROM中。
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet setIsInRom(boolean is_in_rom)  {
   return TRet.from(asset_info_set_is_in_rom(this != null ? (this.nativeObj) : 0, is_in_rom));
 }


  /**
   * 子类型。
   *
   */
 public int getSubtype() {
   return asset_info_t_get_prop_subtype(this.nativeObj);
 }


  /**
   * 资源标志。
   *
   */
 public int getFlags() {
   return asset_info_t_get_prop_flags(this.nativeObj);
 }


  /**
   * 大小。
   *
   */
 public int getSize() {
   return asset_info_t_get_prop_size(this.nativeObj);
 }


  /**
   * 引用计数。
   *is\_in\_rom == FALSE时才有效。
   *
   */
 public int getRefcount() {
   return asset_info_t_get_prop_refcount(this.nativeObj);
 }

static private native int asset_info_get_type(long info);
static private native String asset_info_get_name(long info);
static private native boolean asset_info_is_in_rom(long info);
static private native int asset_info_set_is_in_rom(long info, boolean is_in_rom);
static private native int asset_info_t_get_prop_type(long nativeObj);
static private native int asset_info_t_get_prop_subtype(long nativeObj);
static private native int asset_info_t_get_prop_flags(long nativeObj);
static private native int asset_info_t_get_prop_size(long nativeObj);
static private native int asset_info_t_get_prop_refcount(long nativeObj);
};