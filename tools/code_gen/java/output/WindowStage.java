package awtk;

public class WindowStage {
 static public final int NONE = WINDOW_STAGE_NONE();
 static public final int CREATED = WINDOW_STAGE_CREATED();
 static public final int OPENED = WINDOW_STAGE_OPENED();
 static public final int CLOSED = WINDOW_STAGE_CLOSED();
 static private native int WINDOW_STAGE_NONE();
 static private native int WINDOW_STAGE_CREATED();
 static private native int WINDOW_STAGE_OPENED();
 static private native int WINDOW_STAGE_CLOSED();
};

