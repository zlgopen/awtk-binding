class GridItem extends Widget {
 public long nativeObj;

 public GridItem(long nativeObj) {
   super(nativeObj);
 }

 static public GridItem cast(long nativeObj) {
   return new GridItem(nativeObj);
 }

 static Widget create(Widget parent, int x, int y, int w, int h)  {
   return new GridItem(grid_item_create(parent != null ? (parent.nativeObj) : 0, x, y, w, h));
 }

 static Widget cast(Widget widget)  {
   return new GridItem(grid_item_cast(widget != null ? (widget.nativeObj) : 0));
 }

static private native long grid_item_create(long parent, int x, int y, int w, int h);
static private native long grid_item_cast(long widget);
}

