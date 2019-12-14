package awtk;



/**
 * 字模格式常量定义。
 *
 */

public enum GlyphFormat {
  
/**
 * 每个像素占用1个字节(缺省)。
 *
 */
 
  ALPHA (GLYPH_FMT_ALPHA()),
  
/**
 * 每个像素占用1个比特。
 *
 */
 
  MONO (GLYPH_FMT_MONO()),
  
/**
 * 每个像素占用4个字节。
 *
 */
 
  RGBA (GLYPH_FMT_RGBA());
 
   
  private int value;
  GlyphFormat(int value) {
    this.value = value;
  }
  public int value() {
    return this.value;
  }

  public static GlyphFormat from(int value) {
    for(GlyphFormat iter : GlyphFormat.values()) {
      if(iter.value() == value) {
        return iter;
      }
    }

    return ALPHA;
  }

  static private native int GLYPH_FMT_ALPHA();
  static private native int GLYPH_FMT_MONO();
  static private native int GLYPH_FMT_RGBA();

}
