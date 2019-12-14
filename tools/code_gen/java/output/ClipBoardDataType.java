package awtk;



/**
 * 剪切板数据类型定义。
 *
 */

public enum ClipBoardDataType {
  
/**
 * 无数据。
 *
 */
 
  NONE (CLIP_BOARD_DATA_TYPE_NONE()),
  
/**
 * UTF8文本。
 *
 */
 
  TEXT (CLIP_BOARD_DATA_TYPE_TEXT());
 
   
  private int value;
  ClipBoardDataType(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static ClipBoardDataType from(int value) {
    for(ClipBoardDataType iter : ClipBoardDataType.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return NONE;
  }

  static private native int CLIP_BOARD_DATA_TYPE_NONE();
  static private native int CLIP_BOARD_DATA_TYPE_TEXT();

}
