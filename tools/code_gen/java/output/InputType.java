package awtk;

public class InputType {
 static public final int TEXT = INPUT_TEXT();
 static public final int INT = INPUT_INT();
 static public final int UINT = INPUT_UINT();
 static public final int HEX = INPUT_HEX();
 static public final int FLOAT = INPUT_FLOAT();
 static public final int UFLOAT = INPUT_UFLOAT();
 static public final int EMAIL = INPUT_EMAIL();
 static public final int PASSWORD = INPUT_PASSWORD();
 static public final int PHONE = INPUT_PHONE();
 static public final int CUSTOM = INPUT_CUSTOM();
 static private native int INPUT_TEXT();
 static private native int INPUT_INT();
 static private native int INPUT_UINT();
 static private native int INPUT_HEX();
 static private native int INPUT_FLOAT();
 static private native int INPUT_UFLOAT();
 static private native int INPUT_EMAIL();
 static private native int INPUT_PASSWORD();
 static private native int INPUT_PHONE();
 static private native int INPUT_CUSTOM();
};

