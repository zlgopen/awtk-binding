package awtk;


/**
 * 扩展控件。
 *
 */
public class TExtWidgets { 

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
 public TExtWidgets(long nativeObj) {
   this.nativeObj = nativeObj;
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TExtWidgets cast(long nativeObj) {
   return new TExtWidgets(nativeObj);
 }


  /**
   * 初始化AWTK扩展控件。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  static TRet init()  {
   return TRet.from(tk_ext_widgets_init());
 }

static private native int tk_ext_widgets_init();
};