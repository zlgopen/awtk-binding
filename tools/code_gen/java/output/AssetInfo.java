package awtk;


/**
 * 单个资源的描述信息。
 *
 */
public class AssetInfo {
 public long nativeObj;

 public AssetInfo(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public AssetInfo cast(long nativeObj) {
   return new AssetInfo(nativeObj);
 }


/**
 * 类型。
 *
 */
 public int getType() {
   return asset_info_t_get_prop_type(this.nativeObj);
 }


/**
 * 子类型。
 *
 */
 public int getSubtype() {
   return asset_info_t_get_prop_subtype(this.nativeObj);
 }


/**
 * 资源是否在ROM中。
 *
 */
 public int getIsInRom() {
   return asset_info_t_get_prop_is_in_rom(this.nativeObj);
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
 * is\_in\_rom == FALSE时才有效。
 *
 */
 public int getRefcount() {
   return asset_info_t_get_prop_refcount(this.nativeObj);
 }


/**
 * 名称。
 *
 */
 public String getName() {
   return asset_info_t_get_prop_name(this.nativeObj);
 }

static private native int asset_info_t_get_prop_type(long nativeObj);
static private native int asset_info_t_get_prop_subtype(long nativeObj);
static private native int asset_info_t_get_prop_is_in_rom(long nativeObj);
static private native int asset_info_t_get_prop_size(long nativeObj);
static private native int asset_info_t_get_prop_refcount(long nativeObj);
static private native String asset_info_t_get_prop_name(long nativeObj);
}

