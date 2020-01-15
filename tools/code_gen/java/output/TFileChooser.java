package awtk;


/**
 * 文件/目录选择器
 *
 */
public class TFileChooser extends TEmitter { 

/**
 * 通过nativeObj构造Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 public TFileChooser(long nativeObj) {
   super(nativeObj);
 }


/**
 * 把nativeObj转换层Java对象。
 *
 * @param nativeObj 原生对象。

 * @return 对应的Java对象。
 */
 static public TFileChooser cast(long nativeObj) {
   return new TFileChooser(nativeObj);
 }


  /**
   * 创建file_chooser对象
   * 
   * @param init_dir 初始目录
   * @param filter 过滤规则(如".jpg.png.gif")。
   *
   * @return 对象。
   */
 public  static TFileChooser create(String init_dir, String filter)  {
    return new TFileChooser(file_chooser_create(init_dir, filter));
 }


  /**
   * 转换为file_chooser对象(供脚本语言使用)。
   * 
   * @param data file_chooser对象。
   *
   * @return 对象。
   */
 public  static TFileChooser cast(long data)  {
    return new TFileChooser(file_chooser_cast(data != null ? (data.nativeObj) : 0));
 }


  /**
   * 为了保存而选择文件。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet chooseFileForSave()  {
   return TRet.from(file_chooser_choose_file_for_save(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 为了打开而选择文件。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet chooseFileForOpen()  {
   return TRet.from(file_chooser_choose_file_for_open(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 选择目录。
   * 
   *
   * @return 返回RET_OK表示成功，否则表示失败。
   */
 public  TRet chooseFolder()  {
   return TRet.from(file_chooser_choose_folder(this != null ? (this.nativeObj) : 0));
 }


  /**
   * 获取目录。
   * 
   *
   * @return 返回选择的目录。
   */
 public  String getDir()  {
    return file_chooser_get_dir(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 获取文件名。
   * 
   *
   * @return 返回选择的文件名。
   */
 public  String getFilename()  {
    return file_chooser_get_filename(this != null ? (this.nativeObj) : 0);
 }


  /**
   * 用户是否取消了选择。
   * 
   *
   * @return 返回用户是否取消了选择。
   */
 public  boolean isAborted()  {
    return file_chooser_is_aborted(this != null ? (this.nativeObj) : 0);
 }

static private native long file_chooser_create(String init_dir, String filter);
static private native long file_chooser_cast(long data);
static private native int file_chooser_choose_file_for_save(long chooser);
static private native int file_chooser_choose_file_for_open(long chooser);
static private native int file_chooser_choose_folder(long chooser);
static private native String file_chooser_get_dir(long chooser);
static private native String file_chooser_get_filename(long chooser);
static private native boolean file_chooser_is_aborted(long chooser);
};