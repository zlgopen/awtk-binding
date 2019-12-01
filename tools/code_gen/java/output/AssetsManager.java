class AssetsManager {
 public long nativeObj;

 public AssetsManager(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public AssetsManager cast(long nativeObj) {
   return new AssetsManager(nativeObj);
 }

 static AssetsManager instance()  {
   return new AssetsManager(assets_manager());
 }

 AssetInfo ref(AssetType type, String name)  {
   return new AssetInfo(assets_manager_ref(this.nativeObj, type, name));
 }

 Ret unref(AssetInfo info)  {
   return assets_manager_unref(this.nativeObj, info != null ? (info.nativeObj) : 0);
 }

static private native long assets_manager();
static private native long assets_manager_ref(long am, AssetType type, String name);
static private native Ret assets_manager_unref(long am, long info);
}

