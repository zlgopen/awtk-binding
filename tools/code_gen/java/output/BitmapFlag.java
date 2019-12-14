package awtk;



/**
 * 位图标志常量定义。
 *
 */

public enum BitmapFlag {
  
/**
 * 无特殊标志。
 *
 */
 
  NONE (BITMAP_FLAG_NONE()),
  
/**
 * 不透明图片。
 *
 */
 
  OPAQUE (BITMAP_FLAG_OPAQUE()),
  
/**
 * 图片内容不会变化。
 *
 */
 
  IMMUTABLE (BITMAP_FLAG_IMMUTABLE()),
  
/**
 * OpenGL Texture, bitmap的id是有效的texture id。
 *
 */
 
  TEXTURE (BITMAP_FLAG_TEXTURE()),
  
/**
 * 如果是MUTABLE的图片，更新时需要设置此标志，底层可能会做特殊处理，比如更新图片到GPU。
 *
 */
 
  CHANGED (BITMAP_FLAG_CHANGED()),
  
/**
 * 预乘alpha。
 *
 */
 
  PREMULTI_ALPHA (BITMAP_FLAG_PREMULTI_ALPHA());
 
   
  private int value;
  BitmapFlag(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static BitmapFlag from(int value) {
    for(BitmapFlag iter : BitmapFlag.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return NONE;
  }

  static private native int BITMAP_FLAG_NONE();
  static private native int BITMAP_FLAG_OPAQUE();
  static private native int BITMAP_FLAG_IMMUTABLE();
  static private native int BITMAP_FLAG_TEXTURE();
  static private native int BITMAP_FLAG_CHANGED();
  static private native int BITMAP_FLAG_PREMULTI_ALPHA();

}
