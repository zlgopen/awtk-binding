package awtk;

public class WindowClosable {
 static public final int YES = WINDOW_CLOSABLE_YES();
 static public final int NO = WINDOW_CLOSABLE_NO();
 static public final int CONFIRM = WINDOW_CLOSABLE_CONFIRM();
 static private native int WINDOW_CLOSABLE_YES();
 static private native int WINDOW_CLOSABLE_NO();
 static private native int WINDOW_CLOSABLE_CONFIRM();
};

