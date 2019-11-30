class InputMethod {
 public long nativeObj;

 public InputMethod(long nativeObj) {
   this.nativeObj = nativeObj;
 }

 static public InputMethod cast(long nativeObj) {
   return new InputMethod(nativeObj);
 }

 Ret commitText(String text)  {
   return input_method_commit_text(this.nativeObj, text);
 }

 Ret dispatchKey(int key)  {
   return input_method_dispatch_key(this.nativeObj, key);
 }

 static InputMethod instance()  {
   return new InputMethod(input_method());
 }

static private native Ret input_method_commit_text(long im, String text);
static private native Ret input_method_dispatch_key(long im, int key);
static private native long input_method();
}

