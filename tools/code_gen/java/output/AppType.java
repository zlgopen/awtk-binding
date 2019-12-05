package awtk;

public class AppType {
 static public final int MOBILE = APP_MOBILE();
 static public final int SIMULATOR = APP_SIMULATOR();
 static public final int DESKTOP = APP_DESKTOP();
 static private native int APP_MOBILE();
 static private native int APP_SIMULATOR();
 static private native int APP_DESKTOP();
};

