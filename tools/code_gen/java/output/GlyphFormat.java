package awtk;

public class GlyphFormat {
 static public final int ALPHA = GLYPH_FMT_ALPHA();
 static public final int MONO = GLYPH_FMT_MONO();
 static public final int RGBA = GLYPH_FMT_RGBA();
 static private native int GLYPH_FMT_ALPHA();
 static private native int GLYPH_FMT_MONO();
 static private native int GLYPH_FMT_RGBA();
};

