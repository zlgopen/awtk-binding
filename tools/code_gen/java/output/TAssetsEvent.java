package awtk;


/**
 * 资源事件，由资源管理器触发。
 *
 */
public class TAssetsEvent extends TEvent { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TAssetsEvent(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TAssetsEvent cast(long nativeObj) {
   return new TAssetsEvent(nativeObj);
 }


  /**
   * 触发事件的资源类型
   *
   */
 public TAssetType getType() {
   return TAssetType.from(assets_event_t_get_prop_type(this.nativeObj));

 }


  /**
   * 触发事件的资源对象
   *
   */
 public TAssetInfo getAssetInfo() {
   return new TAssetInfo(assets_event_t_get_prop_asset_info(this.nativeObj));
 }

static private native int assets_event_t_get_prop_type(long nativeObj);
static private native long assets_event_t_get_prop_asset_info(long nativeObj);
};