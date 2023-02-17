[AWTK](../README.md) / [Exports](../modules.md) / TEventType

# Enumeration: TEventType

类型常量定义。

## Table of contents

### Enumeration Members

- [AFTER\_PAINT](TEventType.md#after_paint)
- [ANIM\_END](TEventType.md#anim_end)
- [ANIM\_ONCE](TEventType.md#anim_once)
- [ANIM\_PAUSE](TEventType.md#anim_pause)
- [ANIM\_START](TEventType.md#anim_start)
- [ANIM\_STOP](TEventType.md#anim_stop)
- [ASSET\_MANAGER\_CLEAR\_CACHE](TEventType.md#asset_manager_clear_cache)
- [ASSET\_MANAGER\_LOAD\_ASSET](TEventType.md#asset_manager_load_asset)
- [ASSET\_MANAGER\_UNLOAD\_ASSET](TEventType.md#asset_manager_unload_asset)
- [BEFORE\_PAINT](TEventType.md#before_paint)
- [BLUR](TEventType.md#blur)
- [CLICK](TEventType.md#click)
- [CMD\_CAN\_EXEC](TEventType.md#cmd_can_exec)
- [CMD\_EXECED](TEventType.md#cmd_execed)
- [CMD\_WILL\_EXEC](TEventType.md#cmd_will_exec)
- [CONNECT](TEventType.md#connect)
- [CONTEXT\_MENU](TEventType.md#context_menu)
- [DATA](TEventType.md#data)
- [DESTROY](TEventType.md#destroy)
- [DONE](TEventType.md#done)
- [DOUBLE\_CLICK](TEventType.md#double_click)
- [DRAG](TEventType.md#drag)
- [DRAG\_END](TEventType.md#drag_end)
- [DRAG\_START](TEventType.md#drag_start)
- [ERROR](TEventType.md#error)
- [FOCUS](TEventType.md#focus)
- [IM\_ACTION](TEventType.md#im_action)
- [IM\_ACTION\_INFO](TEventType.md#im_action_info)
- [IM\_CANCEL](TEventType.md#im_cancel)
- [IM\_CLEAR](TEventType.md#im_clear)
- [IM\_COMMIT](TEventType.md#im_commit)
- [IM\_LANG\_CHANGED](TEventType.md#im_lang_changed)
- [IM\_PREEDIT](TEventType.md#im_preedit)
- [IM\_PREEDIT\_ABORT](TEventType.md#im_preedit_abort)
- [IM\_PREEDIT\_CONFIRM](TEventType.md#im_preedit_confirm)
- [IM\_SHOW\_CANDIDATES](TEventType.md#im_show_candidates)
- [IM\_SHOW\_PRE\_CANDIDATES](TEventType.md#im_show_pre_candidates)
- [IM\_START](TEventType.md#im_start)
- [IM\_STOP](TEventType.md#im_stop)
- [ITEMS\_CHANGED](TEventType.md#items_changed)
- [ITEMS\_WILL\_CHANGE](TEventType.md#items_will_change)
- [KEY\_DOWN](TEventType.md#key_down)
- [KEY\_DOWN\_BEFORE\_CHILDREN](TEventType.md#key_down_before_children)
- [KEY\_LONG\_PRESS](TEventType.md#key_long_press)
- [KEY\_REPEAT](TEventType.md#key_repeat)
- [KEY\_UP](TEventType.md#key_up)
- [KEY\_UP\_BEFORE\_CHILDREN](TEventType.md#key_up_before_children)
- [LOCALE\_CHANGED](TEventType.md#locale_changed)
- [LONG\_PRESS](TEventType.md#long_press)
- [LOW\_MEMORY](TEventType.md#low_memory)
- [MODEL\_CHANGE](TEventType.md#model_change)
- [MOVE](TEventType.md#move)
- [MOVE\_RESIZE](TEventType.md#move_resize)
- [MULTI\_GESTURE](TEventType.md#multi_gesture)
- [NONE](TEventType.md#none)
- [ORIENTATION\_CHANGED](TEventType.md#orientation_changed)
- [ORIENTATION\_WILL\_CHANGED](TEventType.md#orientation_will_changed)
- [OUT\_OF\_MEMORY](TEventType.md#out_of_memory)
- [PAGE\_CHANGED](TEventType.md#page_changed)
- [PAGE\_CHANGING](TEventType.md#page_changing)
- [PAINT](TEventType.md#paint)
- [PAINT\_DONE](TEventType.md#paint_done)
- [POINTER\_DOWN](TEventType.md#pointer_down)
- [POINTER\_DOWN\_ABORT](TEventType.md#pointer_down_abort)
- [POINTER\_DOWN\_BEFORE\_CHILDREN](TEventType.md#pointer_down_before_children)
- [POINTER\_ENTER](TEventType.md#pointer_enter)
- [POINTER\_LEAVE](TEventType.md#pointer_leave)
- [POINTER\_MOVE](TEventType.md#pointer_move)
- [POINTER\_MOVE\_BEFORE\_CHILDREN](TEventType.md#pointer_move_before_children)
- [POINTER\_UP](TEventType.md#pointer_up)
- [POINTER\_UP\_BEFORE\_CHILDREN](TEventType.md#pointer_up_before_children)
- [PROGRESS](TEventType.md#progress)
- [PROPS\_CHANGED](TEventType.md#props_changed)
- [PROP\_CHANGED](TEventType.md#prop_changed)
- [PROP\_WILL\_CHANGE](TEventType.md#prop_will_change)
- [REQUEST\_CLOSE\_WINDOW](TEventType.md#request_close_window)
- [REQUEST\_QUIT\_APP](TEventType.md#request_quit_app)
- [REQ\_START](TEventType.md#req_start)
- [RESET](TEventType.md#reset)
- [RESIZE](TEventType.md#resize)
- [SCREEN\_SAVER](TEventType.md#screen_saver)
- [SCROLL](TEventType.md#scroll)
- [SCROLL\_END](TEventType.md#scroll_end)
- [SCROLL\_START](TEventType.md#scroll_start)
- [SYSTEM](TEventType.md#system)
- [THEME\_CHANGED](TEventType.md#theme_changed)
- [THEME\_WILL\_CHANGE](TEventType.md#theme_will_change)
- [TIMER](TEventType.md#timer)
- [TOP\_WINDOW\_CHANGED](TEventType.md#top_window_changed)
- [USER\_START](TEventType.md#user_start)
- [VALUE\_CHANGED](TEventType.md#value_changed)
- [VALUE\_CHANGING](TEventType.md#value_changing)
- [VALUE\_WILL\_CHANGE](TEventType.md#value_will_change)
- [WHEEL](TEventType.md#wheel)
- [WHEEL\_BEFORE\_CHILDREN](TEventType.md#wheel_before_children)
- [WIDGET\_ADD\_CHILD](TEventType.md#widget_add_child)
- [WIDGET\_CREATED](TEventType.md#widget_created)
- [WIDGET\_LOAD](TEventType.md#widget_load)
- [WIDGET\_REMOVE\_CHILD](TEventType.md#widget_remove_child)
- [WILL\_MOVE](TEventType.md#will_move)
- [WILL\_MOVE\_RESIZE](TEventType.md#will_move_resize)
- [WILL\_RESIZE](TEventType.md#will_resize)
- [WINDOW\_CLOSE](TEventType.md#window_close)
- [WINDOW\_LOAD](TEventType.md#window_load)
- [WINDOW\_OPEN](TEventType.md#window_open)
- [WINDOW\_TO\_BACKGROUND](TEventType.md#window_to_background)
- [WINDOW\_TO\_FOREGROUND](TEventType.md#window_to_foreground)
- [WINDOW\_WILL\_OPEN](TEventType.md#window_will_open)

## Enumeration Members

### AFTER\_PAINT

• **AFTER\_PAINT** = `number`

绘制完成的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5048](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5048)

___

### ANIM\_END

• **ANIM\_END** = `number`

控件动画完成事件(event_t)。

#### Defined in

[awtk.ts:5090](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5090)

___

### ANIM\_ONCE

• **ANIM\_ONCE** = `number`

控件动画yoyo/repeat时，完成一次的事件(event_t)。

#### Defined in

[awtk.ts:5084](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5084)

___

### ANIM\_PAUSE

• **ANIM\_PAUSE** = `number`

控件动画被暂停的事件(event_t)。

#### Defined in

[awtk.ts:5078](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5078)

___

### ANIM\_START

• **ANIM\_START** = `number`

控件动画开始事件(event_t)。

#### Defined in

[awtk.ts:5066](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5066)

___

### ANIM\_STOP

• **ANIM\_STOP** = `number`

控件动画被主动停止的事件(event_t)。

#### Defined in

[awtk.ts:5072](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5072)

___

### ASSET\_MANAGER\_CLEAR\_CACHE

• **ASSET\_MANAGER\_CLEAR\_CACHE** = `number`

资源管理移除同种资源缓存(assets_event_t)。

#### Defined in

[awtk.ts:5371](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5371)

___

### ASSET\_MANAGER\_LOAD\_ASSET

• **ASSET\_MANAGER\_LOAD\_ASSET** = `number`

资源管理加载某个资源(assets_event_t)。

#### Defined in

[awtk.ts:5359](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5359)

___

### ASSET\_MANAGER\_UNLOAD\_ASSET

• **ASSET\_MANAGER\_UNLOAD\_ASSET** = `number`

资源管理卸载某个资源(assets_event_t)。

#### Defined in

[awtk.ts:5365](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5365)

___

### BEFORE\_PAINT

• **BEFORE\_PAINT** = `number`

即将绘制的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5042](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5042)

___

### BLUR

• **BLUR** = `number`

失去焦点事件名(event_t)。

#### Defined in

[awtk.ts:4940](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4940)

___

### CLICK

• **CLICK** = `number`

点击事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4922](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4922)

___

### CMD\_CAN\_EXEC

• **CMD\_CAN\_EXEC** = `number`

对象命令是否能执行指定的命令(cmd_exec_event_t)。

#### Defined in

[awtk.ts:5449](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5449)

___

### CMD\_EXECED

• **CMD\_EXECED** = `number`

对象完成执行命令(cmd_exec_event_t)。

#### Defined in

[awtk.ts:5443](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5443)

___

### CMD\_WILL\_EXEC

• **CMD\_WILL\_EXEC** = `number`

对象即将执行命令(cmd_exec_event_t)。

#### Defined in

[awtk.ts:5437](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5437)

___

### CONNECT

• **CONNECT** = `number`

客户连接到来(event_t)。

#### Defined in

[awtk.ts:5389](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5389)

___

### CONTEXT\_MENU

• **CONTEXT\_MENU** = `number`

右键/长按弹出上下文菜单的事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4898](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4898)

___

### DATA

• **DATA** = `number`

数据到来(event_t)。

#### Defined in

[awtk.ts:5383](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5383)

___

### DESTROY

• **DESTROY** = `number`

对象销毁事件名(event_t)。

#### Defined in

[awtk.ts:5491](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5491)

___

### DONE

• **DONE** = `number`

完成(done_event_t)。

#### Defined in

[awtk.ts:5479](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5479)

___

### DOUBLE\_CLICK

• **DOUBLE\_CLICK** = `number`

双击事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4928](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4928)

___

### DRAG

• **DRAG** = `number`

拖动(event_t)。

#### Defined in

[awtk.ts:5238](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5238)

___

### DRAG\_END

• **DRAG\_END** = `number`

结束拖动(event_t)。

#### Defined in

[awtk.ts:5244](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5244)

___

### DRAG\_START

• **DRAG\_START** = `number`

开始拖动(event_t)。

#### Defined in

[awtk.ts:5232](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5232)

___

### ERROR

• **ERROR** = `number`

错误(error_event_t)。

#### Defined in

[awtk.ts:5485](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5485)

___

### FOCUS

• **FOCUS** = `number`

得到焦点事件名(event_t)。

#### Defined in

[awtk.ts:4934](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4934)

___

### IM\_ACTION

• **IM\_ACTION** = `number`

软键盘Action点击事件(event_t)。

#### Defined in

[awtk.ts:5220](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5220)

___

### IM\_ACTION\_INFO

• **IM\_ACTION\_INFO** = `number`

请求更新软键盘上的Action按钮的信息(im_action_button_info_event_t)。

#### Defined in

[awtk.ts:5226](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5226)

___

### IM\_CANCEL

• **IM\_CANCEL** = `number`

取消编辑，恢复之前的内容(event_t)。

#### Defined in

[awtk.ts:5178](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5178)

___

### IM\_CLEAR

• **IM\_CLEAR** = `number`

清除编辑器内容(event_t)。

#### Defined in

[awtk.ts:5172](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5172)

___

### IM\_COMMIT

• **IM\_COMMIT** = `number`

输入法提交输入的文本事件(im_commit_event_t)。

#### Defined in

[awtk.ts:5166](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5166)

___

### IM\_LANG\_CHANGED

• **IM\_LANG\_CHANGED** = `number`

输入法语言改变事件(event_t)。

#### Defined in

[awtk.ts:5214](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5214)

___

### IM\_PREEDIT

• **IM\_PREEDIT** = `number`

进入预编辑状态(event_t)。

#### Defined in

[awtk.ts:5184](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5184)

___

### IM\_PREEDIT\_ABORT

• **IM\_PREEDIT\_ABORT** = `number`

删除预编辑内容，退出预编辑状态event_t)。

#### Defined in

[awtk.ts:5196](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5196)

___

### IM\_PREEDIT\_CONFIRM

• **IM\_PREEDIT\_CONFIRM** = `number`

确认预编辑内容，退出预编辑状态(event_t)。

#### Defined in

[awtk.ts:5190](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5190)

___

### IM\_SHOW\_CANDIDATES

• **IM\_SHOW\_CANDIDATES** = `number`

输入法请求显示候选字事件(im_candidates_event_t)。

#### Defined in

[awtk.ts:5202](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5202)

___

### IM\_SHOW\_PRE\_CANDIDATES

• **IM\_SHOW\_PRE\_CANDIDATES** = `number`

输入法请求显示预候选字事件(im_candidates_event_t)。

#### Defined in

[awtk.ts:5208](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5208)

___

### IM\_START

• **IM\_START** = `number`

输入法启动(event_t)。

#### Defined in

[awtk.ts:5154](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5154)

___

### IM\_STOP

• **IM\_STOP** = `number`

输入法停止(event_t)。

#### Defined in

[awtk.ts:5160](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5160)

___

### ITEMS\_CHANGED

• **ITEMS\_CHANGED** = `number`

完成增加和删除集合中的项目(event_t)。

#### Defined in

[awtk.ts:5461](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5461)

___

### ITEMS\_WILL\_CHANGE

• **ITEMS\_WILL\_CHANGE** = `number`

即将增加和删除集合中的项目(event_t)。

#### Defined in

[awtk.ts:5455](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5455)

___

### KEY\_DOWN

• **KEY\_DOWN** = `number`

键按下事件名(key_event_t)。

#### Defined in

[awtk.ts:4946](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4946)

___

### KEY\_DOWN\_BEFORE\_CHILDREN

• **KEY\_DOWN\_BEFORE\_CHILDREN** = `number`

键按下事件名，在子控件处理之前触发(key_event_t)。

#### Defined in

[awtk.ts:4958](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4958)

___

### KEY\_LONG\_PRESS

• **KEY\_LONG\_PRESS** = `number`

键长按事件名(key_event_t)。

#### Defined in

[awtk.ts:4952](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4952)

___

### KEY\_REPEAT

• **KEY\_REPEAT** = `number`

按键repeat事件名(key_event_t)。

#### Defined in

[awtk.ts:4964](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4964)

___

### KEY\_UP

• **KEY\_UP** = `number`

键抬起事件名(key_event_t)。

#### Defined in

[awtk.ts:4970](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4970)

___

### KEY\_UP\_BEFORE\_CHILDREN

• **KEY\_UP\_BEFORE\_CHILDREN** = `number`

键抬起事件名，在子控件处理之前触发(key_event_t)。

#### Defined in

[awtk.ts:4976](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4976)

___

### LOCALE\_CHANGED

• **LOCALE\_CHANGED** = `number`

locale改变的事件(event_t)。

#### Defined in

[awtk.ts:5060](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5060)

___

### LONG\_PRESS

• **LONG\_PRESS** = `number`

长按事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4916](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4916)

___

### LOW\_MEMORY

• **LOW\_MEMORY** = `number`

内存不足(event_t)。

#### Defined in

[awtk.ts:5262](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5262)

___

### MODEL\_CHANGE

• **MODEL\_CHANGE** = `number`

模型变化。用于fscript实现窗口间通讯(model_event_t)。

#### Defined in

[awtk.ts:5395](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5395)

___

### MOVE

• **MOVE** = `number`

移动Widget的事件名(event_t)。

#### Defined in

[awtk.ts:4988](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4988)

___

### MOVE\_RESIZE

• **MOVE\_RESIZE** = `number`

调整Widget大小/位置的事件名(event_t)。

#### Defined in

[awtk.ts:5012](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5012)

___

### MULTI\_GESTURE

• **MULTI\_GESTURE** = `number`

多点触摸手势(multi_gesture_event_t)。

#### Defined in

[awtk.ts:5341](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5341)

___

### NONE

• **NONE** = `number`

无效事件名称。

#### Defined in

[awtk.ts:5419](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5419)

___

### ORIENTATION\_CHANGED

• **ORIENTATION\_CHANGED** = `number`

屏幕旋转(event_t)。

#### Defined in

[awtk.ts:5280](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5280)

___

### ORIENTATION\_WILL\_CHANGED

• **ORIENTATION\_WILL\_CHANGED** = `number`

屏幕即将旋转(event_t)。

#### Defined in

[awtk.ts:5274](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5274)

___

### OUT\_OF\_MEMORY

• **OUT\_OF\_MEMORY** = `number`

内存耗尽(event_t)。

#### Defined in

[awtk.ts:5268](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5268)

___

### PAGE\_CHANGED

• **PAGE\_CHANGED** = `number`

页面改变了(event_t)。

#### Defined in

[awtk.ts:5347](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5347)

___

### PAGE\_CHANGING

• **PAGE\_CHANGING** = `number`

页面正在改变(offset_change_event_t)。

#### Defined in

[awtk.ts:5353](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5353)

___

### PAINT

• **PAINT** = `number`

绘制的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5036](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5036)

___

### PAINT\_DONE

• **PAINT\_DONE** = `number`

绘制完成(canvas状态已经恢复)的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5054](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5054)

___

### POINTER\_DOWN

• **POINTER\_DOWN** = `number`

指针按下事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4844](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4844)

___

### POINTER\_DOWN\_ABORT

• **POINTER\_DOWN\_ABORT** = `number`

取消前一个指针按下事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4892](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4892)

___

### POINTER\_DOWN\_BEFORE\_CHILDREN

• **POINTER\_DOWN\_BEFORE\_CHILDREN** = `number`

指针按下事件名，在子控件处理之前触发(pointer_event_t)。

#### Defined in

[awtk.ts:4850](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4850)

___

### POINTER\_ENTER

• **POINTER\_ENTER** = `number`

指针进入事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4904](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4904)

___

### POINTER\_LEAVE

• **POINTER\_LEAVE** = `number`

指针离开事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4910](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4910)

___

### POINTER\_MOVE

• **POINTER\_MOVE** = `number`

指针移动事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4856](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4856)

___

### POINTER\_MOVE\_BEFORE\_CHILDREN

• **POINTER\_MOVE\_BEFORE\_CHILDREN** = `number`

指针移动事件名，在子控件处理之前触发(pointer_event_t)。

#### Defined in

[awtk.ts:4862](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4862)

___

### POINTER\_UP

• **POINTER\_UP** = `number`

指针抬起事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4868](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4868)

___

### POINTER\_UP\_BEFORE\_CHILDREN

• **POINTER\_UP\_BEFORE\_CHILDREN** = `number`

指针抬起事件名，在子控件处理之前触发(pointer_event_t)。

#### Defined in

[awtk.ts:4874](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4874)

___

### PROGRESS

• **PROGRESS** = `number`

进度状态(progress_event_t)。

#### Defined in

[awtk.ts:5473](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5473)

___

### PROPS\_CHANGED

• **PROPS\_CHANGED** = `number`

对象的属性改变的事件名(props_event_t)。

#### Defined in

[awtk.ts:5467](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5467)

___

### PROP\_CHANGED

• **PROP\_CHANGED** = `number`

对象的属性改变的事件名(prop_change_event_t)。

#### Defined in

[awtk.ts:5431](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5431)

___

### PROP\_WILL\_CHANGE

• **PROP\_WILL\_CHANGE** = `number`

对象的属性即将改变的事件名(prop_change_event_t)。

#### Defined in

[awtk.ts:5425](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5425)

___

### REQUEST\_CLOSE\_WINDOW

• **REQUEST\_CLOSE\_WINDOW** = `number`

请求关闭窗口的事件(event_t)。

#### Defined in

[awtk.ts:5142](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5142)

___

### REQUEST\_QUIT\_APP

• **REQUEST\_QUIT\_APP** = `number`

请求退出应用程序事件。
点击原生窗口关闭按钮时，通过窗口管理器触发，注册该事件并返回RET_STOP，可以阻止窗口关闭。

#### Defined in

[awtk.ts:5293](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5293)

___

### REQ\_START

• **REQ\_START** = `number`

event queue其它请求编号起始值。

#### Defined in

[awtk.ts:5407](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5407)

___

### RESET

• **RESET** = `number`

Reset(event_t)。

#### Defined in

[awtk.ts:5250](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5250)

___

### RESIZE

• **RESIZE** = `number`

调整Widget大小的事件名(event_t)。

#### Defined in

[awtk.ts:5000](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5000)

___

### SCREEN\_SAVER

• **SCREEN\_SAVER** = `number`

在指定的时间内，没有用户输入事件，由窗口管理器触发。

#### Defined in

[awtk.ts:5256](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5256)

___

### SCROLL

• **SCROLL** = `number`

scroll view滚动(event_t)。

#### Defined in

[awtk.ts:5329](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5329)

___

### SCROLL\_END

• **SCROLL\_END** = `number`

scroll view结束滚动(event_t)。

#### Defined in

[awtk.ts:5335](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5335)

___

### SCROLL\_START

• **SCROLL\_START** = `number`

scroll view开始滚动(event_t)。

#### Defined in

[awtk.ts:5323](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5323)

___

### SYSTEM

• **SYSTEM** = `number`

SDL系统事件(system_event_t)。

#### Defined in

[awtk.ts:5401](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5401)

___

### THEME\_CHANGED

• **THEME\_CHANGED** = `number`

主题变化(event_t)。

#### Defined in

[awtk.ts:5305](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5305)

___

### THEME\_WILL\_CHANGE

• **THEME\_WILL\_CHANGE** = `number`

即将改变主题(event_t)。

#### Defined in

[awtk.ts:5299](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5299)

___

### TIMER

• **TIMER** = `number`

定时器(event_t)。

#### Defined in

[awtk.ts:5377](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5377)

___

### TOP\_WINDOW\_CHANGED

• **TOP\_WINDOW\_CHANGED** = `number`

顶层窗口改变的事件(window_event_t)。

#### Defined in

[awtk.ts:5148](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5148)

___

### USER\_START

• **USER\_START** = `number`

用户定义事件起始值。

#### Defined in

[awtk.ts:5413](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5413)

___

### VALUE\_CHANGED

• **VALUE\_CHANGED** = `number`

控件的值改变的事件名(value_change_event_t)。

#### Defined in

[awtk.ts:5024](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5024)

___

### VALUE\_CHANGING

• **VALUE\_CHANGING** = `number`

控件的值持续改变(如编辑器正在编辑)的事件名(value_change_event_t)。

#### Defined in

[awtk.ts:5030](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5030)

___

### VALUE\_WILL\_CHANGE

• **VALUE\_WILL\_CHANGE** = `number`

控件的值即将改变的事件名(value_change_event_t)。

#### Defined in

[awtk.ts:5018](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5018)

___

### WHEEL

• **WHEEL** = `number`

滚轮事件名(wheel_event_t)。

#### Defined in

[awtk.ts:4880](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4880)

___

### WHEEL\_BEFORE\_CHILDREN

• **WHEEL\_BEFORE\_CHILDREN** = `number`

鼠标滚轮事件名，在子控件处理之前触发(wheel_event_t)。

#### Defined in

[awtk.ts:4886](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4886)

___

### WIDGET\_ADD\_CHILD

• **WIDGET\_ADD\_CHILD** = `number`

控件加载新的子控件(event_t)。

#### Defined in

[awtk.ts:5311](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5311)

___

### WIDGET\_CREATED

• **WIDGET\_CREATED** = `number`

控件创建事件(event_t)。

#### Defined in

[awtk.ts:5286](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5286)

___

### WIDGET\_LOAD

• **WIDGET\_LOAD** = `number`

控件加载完成事件(event_t)。

#### Defined in

[awtk.ts:5102](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5102)

___

### WIDGET\_REMOVE\_CHILD

• **WIDGET\_REMOVE\_CHILD** = `number`

控件移除子控件(event_t)。

#### Defined in

[awtk.ts:5317](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5317)

___

### WILL\_MOVE

• **WILL\_MOVE** = `number`

即将移动Widget的事件名(event_t)。

#### Defined in

[awtk.ts:4982](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4982)

___

### WILL\_MOVE\_RESIZE

• **WILL\_MOVE\_RESIZE** = `number`

即将调整Widget大小/位置的事件名(event_t)。

#### Defined in

[awtk.ts:5006](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5006)

___

### WILL\_RESIZE

• **WILL\_RESIZE** = `number`

即将调整Widget大小的事件名(event_t)。

#### Defined in

[awtk.ts:4994](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L4994)

___

### WINDOW\_CLOSE

• **WINDOW\_CLOSE** = `number`

窗口关闭事件。

#### Defined in

[awtk.ts:5136](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5136)

___

### WINDOW\_LOAD

• **WINDOW\_LOAD** = `number`

窗口加载完成事件(event_t)。

#### Defined in

[awtk.ts:5096](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5096)

___

### WINDOW\_OPEN

• **WINDOW\_OPEN** = `number`

窗口打开事件(event_t)。
如果有窗口动画，在窗口动画完成时触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。

#### Defined in

[awtk.ts:5116](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5116)

___

### WINDOW\_TO\_BACKGROUND

• **WINDOW\_TO\_BACKGROUND** = `number`

窗口被切换到后台事件(event_t)。
打开新窗口时，当前窗口被切换到后台时，对当前窗口触发本事件。

#### Defined in

[awtk.ts:5123](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5123)

___

### WINDOW\_TO\_FOREGROUND

• **WINDOW\_TO\_FOREGROUND** = `number`

窗口被切换到前台事件(event_t)。
关闭当前窗口时，前一个窗口被切换到前台时，对前一个窗口触发本事件。

#### Defined in

[awtk.ts:5130](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5130)

___

### WINDOW\_WILL\_OPEN

• **WINDOW\_WILL\_OPEN** = `number`

窗口即将打开事件(event_t)。
如果有窗口动画，在窗口动画开始前触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。

#### Defined in

[awtk.ts:5109](https://github.com/zlgopen/awtk-binding/blob/5d7e9b70/tools/code_gen/js/output/awtk.ts#L5109)
