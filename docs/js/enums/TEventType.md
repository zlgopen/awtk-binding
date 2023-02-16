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

[awtk.ts:5034](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5034)

___

### ANIM\_END

• **ANIM\_END** = `number`

控件动画完成事件(event_t)。

#### Defined in

[awtk.ts:5076](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5076)

___

### ANIM\_ONCE

• **ANIM\_ONCE** = `number`

控件动画yoyo/repeat时，完成一次的事件(event_t)。

#### Defined in

[awtk.ts:5070](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5070)

___

### ANIM\_PAUSE

• **ANIM\_PAUSE** = `number`

控件动画被暂停的事件(event_t)。

#### Defined in

[awtk.ts:5064](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5064)

___

### ANIM\_START

• **ANIM\_START** = `number`

控件动画开始事件(event_t)。

#### Defined in

[awtk.ts:5052](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5052)

___

### ANIM\_STOP

• **ANIM\_STOP** = `number`

控件动画被主动停止的事件(event_t)。

#### Defined in

[awtk.ts:5058](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5058)

___

### ASSET\_MANAGER\_CLEAR\_CACHE

• **ASSET\_MANAGER\_CLEAR\_CACHE** = `number`

资源管理移除同种资源缓存(assets_event_t)。

#### Defined in

[awtk.ts:5357](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5357)

___

### ASSET\_MANAGER\_LOAD\_ASSET

• **ASSET\_MANAGER\_LOAD\_ASSET** = `number`

资源管理加载某个资源(assets_event_t)。

#### Defined in

[awtk.ts:5345](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5345)

___

### ASSET\_MANAGER\_UNLOAD\_ASSET

• **ASSET\_MANAGER\_UNLOAD\_ASSET** = `number`

资源管理卸载某个资源(assets_event_t)。

#### Defined in

[awtk.ts:5351](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5351)

___

### BEFORE\_PAINT

• **BEFORE\_PAINT** = `number`

即将绘制的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5028](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5028)

___

### BLUR

• **BLUR** = `number`

失去焦点事件名(event_t)。

#### Defined in

[awtk.ts:4926](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4926)

___

### CLICK

• **CLICK** = `number`

点击事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4908](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4908)

___

### CMD\_CAN\_EXEC

• **CMD\_CAN\_EXEC** = `number`

对象命令是否能执行指定的命令(cmd_exec_event_t)。

#### Defined in

[awtk.ts:5435](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5435)

___

### CMD\_EXECED

• **CMD\_EXECED** = `number`

对象完成执行命令(cmd_exec_event_t)。

#### Defined in

[awtk.ts:5429](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5429)

___

### CMD\_WILL\_EXEC

• **CMD\_WILL\_EXEC** = `number`

对象即将执行命令(cmd_exec_event_t)。

#### Defined in

[awtk.ts:5423](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5423)

___

### CONNECT

• **CONNECT** = `number`

客户连接到来(event_t)。

#### Defined in

[awtk.ts:5375](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5375)

___

### CONTEXT\_MENU

• **CONTEXT\_MENU** = `number`

右键/长按弹出上下文菜单的事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4884](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4884)

___

### DATA

• **DATA** = `number`

数据到来(event_t)。

#### Defined in

[awtk.ts:5369](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5369)

___

### DESTROY

• **DESTROY** = `number`

对象销毁事件名(event_t)。

#### Defined in

[awtk.ts:5477](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5477)

___

### DONE

• **DONE** = `number`

完成(done_event_t)。

#### Defined in

[awtk.ts:5465](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5465)

___

### DOUBLE\_CLICK

• **DOUBLE\_CLICK** = `number`

双击事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4914](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4914)

___

### DRAG

• **DRAG** = `number`

拖动(event_t)。

#### Defined in

[awtk.ts:5224](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5224)

___

### DRAG\_END

• **DRAG\_END** = `number`

结束拖动(event_t)。

#### Defined in

[awtk.ts:5230](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5230)

___

### DRAG\_START

• **DRAG\_START** = `number`

开始拖动(event_t)。

#### Defined in

[awtk.ts:5218](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5218)

___

### ERROR

• **ERROR** = `number`

错误(error_event_t)。

#### Defined in

[awtk.ts:5471](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5471)

___

### FOCUS

• **FOCUS** = `number`

得到焦点事件名(event_t)。

#### Defined in

[awtk.ts:4920](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4920)

___

### IM\_ACTION

• **IM\_ACTION** = `number`

软键盘Action点击事件(event_t)。

#### Defined in

[awtk.ts:5206](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5206)

___

### IM\_ACTION\_INFO

• **IM\_ACTION\_INFO** = `number`

请求更新软键盘上的Action按钮的信息(im_action_button_info_event_t)。

#### Defined in

[awtk.ts:5212](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5212)

___

### IM\_CANCEL

• **IM\_CANCEL** = `number`

取消编辑，恢复之前的内容(event_t)。

#### Defined in

[awtk.ts:5164](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5164)

___

### IM\_CLEAR

• **IM\_CLEAR** = `number`

清除编辑器内容(event_t)。

#### Defined in

[awtk.ts:5158](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5158)

___

### IM\_COMMIT

• **IM\_COMMIT** = `number`

输入法提交输入的文本事件(im_commit_event_t)。

#### Defined in

[awtk.ts:5152](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5152)

___

### IM\_LANG\_CHANGED

• **IM\_LANG\_CHANGED** = `number`

输入法语言改变事件(event_t)。

#### Defined in

[awtk.ts:5200](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5200)

___

### IM\_PREEDIT

• **IM\_PREEDIT** = `number`

进入预编辑状态(event_t)。

#### Defined in

[awtk.ts:5170](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5170)

___

### IM\_PREEDIT\_ABORT

• **IM\_PREEDIT\_ABORT** = `number`

删除预编辑内容，退出预编辑状态event_t)。

#### Defined in

[awtk.ts:5182](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5182)

___

### IM\_PREEDIT\_CONFIRM

• **IM\_PREEDIT\_CONFIRM** = `number`

确认预编辑内容，退出预编辑状态(event_t)。

#### Defined in

[awtk.ts:5176](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5176)

___

### IM\_SHOW\_CANDIDATES

• **IM\_SHOW\_CANDIDATES** = `number`

输入法请求显示候选字事件(im_candidates_event_t)。

#### Defined in

[awtk.ts:5188](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5188)

___

### IM\_SHOW\_PRE\_CANDIDATES

• **IM\_SHOW\_PRE\_CANDIDATES** = `number`

输入法请求显示预候选字事件(im_candidates_event_t)。

#### Defined in

[awtk.ts:5194](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5194)

___

### IM\_START

• **IM\_START** = `number`

输入法启动(event_t)。

#### Defined in

[awtk.ts:5140](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5140)

___

### IM\_STOP

• **IM\_STOP** = `number`

输入法停止(event_t)。

#### Defined in

[awtk.ts:5146](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5146)

___

### ITEMS\_CHANGED

• **ITEMS\_CHANGED** = `number`

完成增加和删除集合中的项目(event_t)。

#### Defined in

[awtk.ts:5447](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5447)

___

### ITEMS\_WILL\_CHANGE

• **ITEMS\_WILL\_CHANGE** = `number`

即将增加和删除集合中的项目(event_t)。

#### Defined in

[awtk.ts:5441](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5441)

___

### KEY\_DOWN

• **KEY\_DOWN** = `number`

键按下事件名(key_event_t)。

#### Defined in

[awtk.ts:4932](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4932)

___

### KEY\_DOWN\_BEFORE\_CHILDREN

• **KEY\_DOWN\_BEFORE\_CHILDREN** = `number`

键按下事件名，在子控件处理之前触发(key_event_t)。

#### Defined in

[awtk.ts:4944](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4944)

___

### KEY\_LONG\_PRESS

• **KEY\_LONG\_PRESS** = `number`

键长按事件名(key_event_t)。

#### Defined in

[awtk.ts:4938](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4938)

___

### KEY\_REPEAT

• **KEY\_REPEAT** = `number`

按键repeat事件名(key_event_t)。

#### Defined in

[awtk.ts:4950](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4950)

___

### KEY\_UP

• **KEY\_UP** = `number`

键抬起事件名(key_event_t)。

#### Defined in

[awtk.ts:4956](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4956)

___

### KEY\_UP\_BEFORE\_CHILDREN

• **KEY\_UP\_BEFORE\_CHILDREN** = `number`

键抬起事件名，在子控件处理之前触发(key_event_t)。

#### Defined in

[awtk.ts:4962](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4962)

___

### LOCALE\_CHANGED

• **LOCALE\_CHANGED** = `number`

locale改变的事件(event_t)。

#### Defined in

[awtk.ts:5046](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5046)

___

### LONG\_PRESS

• **LONG\_PRESS** = `number`

长按事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4902](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4902)

___

### LOW\_MEMORY

• **LOW\_MEMORY** = `number`

内存不足(event_t)。

#### Defined in

[awtk.ts:5248](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5248)

___

### MODEL\_CHANGE

• **MODEL\_CHANGE** = `number`

模型变化。用于fscript实现窗口间通讯(model_event_t)。

#### Defined in

[awtk.ts:5381](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5381)

___

### MOVE

• **MOVE** = `number`

移动Widget的事件名(event_t)。

#### Defined in

[awtk.ts:4974](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4974)

___

### MOVE\_RESIZE

• **MOVE\_RESIZE** = `number`

调整Widget大小/位置的事件名(event_t)。

#### Defined in

[awtk.ts:4998](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4998)

___

### MULTI\_GESTURE

• **MULTI\_GESTURE** = `number`

多点触摸手势(multi_gesture_event_t)。

#### Defined in

[awtk.ts:5327](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5327)

___

### NONE

• **NONE** = `number`

无效事件名称。

#### Defined in

[awtk.ts:5405](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5405)

___

### ORIENTATION\_CHANGED

• **ORIENTATION\_CHANGED** = `number`

屏幕旋转(event_t)。

#### Defined in

[awtk.ts:5266](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5266)

___

### ORIENTATION\_WILL\_CHANGED

• **ORIENTATION\_WILL\_CHANGED** = `number`

屏幕即将旋转(event_t)。

#### Defined in

[awtk.ts:5260](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5260)

___

### OUT\_OF\_MEMORY

• **OUT\_OF\_MEMORY** = `number`

内存耗尽(event_t)。

#### Defined in

[awtk.ts:5254](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5254)

___

### PAGE\_CHANGED

• **PAGE\_CHANGED** = `number`

页面改变了(event_t)。

#### Defined in

[awtk.ts:5333](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5333)

___

### PAGE\_CHANGING

• **PAGE\_CHANGING** = `number`

页面正在改变(offset_change_event_t)。

#### Defined in

[awtk.ts:5339](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5339)

___

### PAINT

• **PAINT** = `number`

绘制的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5022](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5022)

___

### PAINT\_DONE

• **PAINT\_DONE** = `number`

绘制完成(canvas状态已经恢复)的事件名(paint_event_t)。

#### Defined in

[awtk.ts:5040](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5040)

___

### POINTER\_DOWN

• **POINTER\_DOWN** = `number`

指针按下事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4830](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4830)

___

### POINTER\_DOWN\_ABORT

• **POINTER\_DOWN\_ABORT** = `number`

取消前一个指针按下事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4878](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4878)

___

### POINTER\_DOWN\_BEFORE\_CHILDREN

• **POINTER\_DOWN\_BEFORE\_CHILDREN** = `number`

指针按下事件名，在子控件处理之前触发(pointer_event_t)。

#### Defined in

[awtk.ts:4836](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4836)

___

### POINTER\_ENTER

• **POINTER\_ENTER** = `number`

指针进入事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4890](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4890)

___

### POINTER\_LEAVE

• **POINTER\_LEAVE** = `number`

指针离开事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4896](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4896)

___

### POINTER\_MOVE

• **POINTER\_MOVE** = `number`

指针移动事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4842](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4842)

___

### POINTER\_MOVE\_BEFORE\_CHILDREN

• **POINTER\_MOVE\_BEFORE\_CHILDREN** = `number`

指针移动事件名，在子控件处理之前触发(pointer_event_t)。

#### Defined in

[awtk.ts:4848](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4848)

___

### POINTER\_UP

• **POINTER\_UP** = `number`

指针抬起事件名(pointer_event_t)。

#### Defined in

[awtk.ts:4854](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4854)

___

### POINTER\_UP\_BEFORE\_CHILDREN

• **POINTER\_UP\_BEFORE\_CHILDREN** = `number`

指针抬起事件名，在子控件处理之前触发(pointer_event_t)。

#### Defined in

[awtk.ts:4860](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4860)

___

### PROGRESS

• **PROGRESS** = `number`

进度状态(progress_event_t)。

#### Defined in

[awtk.ts:5459](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5459)

___

### PROPS\_CHANGED

• **PROPS\_CHANGED** = `number`

对象的属性改变的事件名(props_event_t)。

#### Defined in

[awtk.ts:5453](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5453)

___

### PROP\_CHANGED

• **PROP\_CHANGED** = `number`

对象的属性改变的事件名(prop_change_event_t)。

#### Defined in

[awtk.ts:5417](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5417)

___

### PROP\_WILL\_CHANGE

• **PROP\_WILL\_CHANGE** = `number`

对象的属性即将改变的事件名(prop_change_event_t)。

#### Defined in

[awtk.ts:5411](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5411)

___

### REQUEST\_CLOSE\_WINDOW

• **REQUEST\_CLOSE\_WINDOW** = `number`

请求关闭窗口的事件(event_t)。

#### Defined in

[awtk.ts:5128](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5128)

___

### REQUEST\_QUIT\_APP

• **REQUEST\_QUIT\_APP** = `number`

请求退出应用程序事件。
点击原生窗口关闭按钮时，通过窗口管理器触发，注册该事件并返回RET_STOP，可以阻止窗口关闭。

#### Defined in

[awtk.ts:5279](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5279)

___

### REQ\_START

• **REQ\_START** = `number`

event queue其它请求编号起始值。

#### Defined in

[awtk.ts:5393](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5393)

___

### RESET

• **RESET** = `number`

Reset(event_t)。

#### Defined in

[awtk.ts:5236](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5236)

___

### RESIZE

• **RESIZE** = `number`

调整Widget大小的事件名(event_t)。

#### Defined in

[awtk.ts:4986](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4986)

___

### SCREEN\_SAVER

• **SCREEN\_SAVER** = `number`

在指定的时间内，没有用户输入事件，由窗口管理器触发。

#### Defined in

[awtk.ts:5242](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5242)

___

### SCROLL

• **SCROLL** = `number`

scroll view滚动(event_t)。

#### Defined in

[awtk.ts:5315](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5315)

___

### SCROLL\_END

• **SCROLL\_END** = `number`

scroll view结束滚动(event_t)。

#### Defined in

[awtk.ts:5321](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5321)

___

### SCROLL\_START

• **SCROLL\_START** = `number`

scroll view开始滚动(event_t)。

#### Defined in

[awtk.ts:5309](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5309)

___

### SYSTEM

• **SYSTEM** = `number`

SDL系统事件(system_event_t)。

#### Defined in

[awtk.ts:5387](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5387)

___

### THEME\_CHANGED

• **THEME\_CHANGED** = `number`

主题变化(event_t)。

#### Defined in

[awtk.ts:5291](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5291)

___

### THEME\_WILL\_CHANGE

• **THEME\_WILL\_CHANGE** = `number`

即将改变主题(event_t)。

#### Defined in

[awtk.ts:5285](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5285)

___

### TIMER

• **TIMER** = `number`

定时器(event_t)。

#### Defined in

[awtk.ts:5363](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5363)

___

### TOP\_WINDOW\_CHANGED

• **TOP\_WINDOW\_CHANGED** = `number`

顶层窗口改变的事件(window_event_t)。

#### Defined in

[awtk.ts:5134](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5134)

___

### USER\_START

• **USER\_START** = `number`

用户定义事件起始值。

#### Defined in

[awtk.ts:5399](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5399)

___

### VALUE\_CHANGED

• **VALUE\_CHANGED** = `number`

控件的值改变的事件名(value_change_event_t)。

#### Defined in

[awtk.ts:5010](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5010)

___

### VALUE\_CHANGING

• **VALUE\_CHANGING** = `number`

控件的值持续改变(如编辑器正在编辑)的事件名(value_change_event_t)。

#### Defined in

[awtk.ts:5016](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5016)

___

### VALUE\_WILL\_CHANGE

• **VALUE\_WILL\_CHANGE** = `number`

控件的值即将改变的事件名(value_change_event_t)。

#### Defined in

[awtk.ts:5004](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5004)

___

### WHEEL

• **WHEEL** = `number`

滚轮事件名(wheel_event_t)。

#### Defined in

[awtk.ts:4866](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4866)

___

### WHEEL\_BEFORE\_CHILDREN

• **WHEEL\_BEFORE\_CHILDREN** = `number`

鼠标滚轮事件名，在子控件处理之前触发(wheel_event_t)。

#### Defined in

[awtk.ts:4872](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4872)

___

### WIDGET\_ADD\_CHILD

• **WIDGET\_ADD\_CHILD** = `number`

控件加载新的子控件(event_t)。

#### Defined in

[awtk.ts:5297](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5297)

___

### WIDGET\_CREATED

• **WIDGET\_CREATED** = `number`

控件创建事件(event_t)。

#### Defined in

[awtk.ts:5272](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5272)

___

### WIDGET\_LOAD

• **WIDGET\_LOAD** = `number`

控件加载完成事件(event_t)。

#### Defined in

[awtk.ts:5088](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5088)

___

### WIDGET\_REMOVE\_CHILD

• **WIDGET\_REMOVE\_CHILD** = `number`

控件移除子控件(event_t)。

#### Defined in

[awtk.ts:5303](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5303)

___

### WILL\_MOVE

• **WILL\_MOVE** = `number`

即将移动Widget的事件名(event_t)。

#### Defined in

[awtk.ts:4968](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4968)

___

### WILL\_MOVE\_RESIZE

• **WILL\_MOVE\_RESIZE** = `number`

即将调整Widget大小/位置的事件名(event_t)。

#### Defined in

[awtk.ts:4992](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4992)

___

### WILL\_RESIZE

• **WILL\_RESIZE** = `number`

即将调整Widget大小的事件名(event_t)。

#### Defined in

[awtk.ts:4980](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L4980)

___

### WINDOW\_CLOSE

• **WINDOW\_CLOSE** = `number`

窗口关闭事件。

#### Defined in

[awtk.ts:5122](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5122)

___

### WINDOW\_LOAD

• **WINDOW\_LOAD** = `number`

窗口加载完成事件(event_t)。

#### Defined in

[awtk.ts:5082](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5082)

___

### WINDOW\_OPEN

• **WINDOW\_OPEN** = `number`

窗口打开事件(event_t)。
如果有窗口动画，在窗口动画完成时触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。

#### Defined in

[awtk.ts:5102](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5102)

___

### WINDOW\_TO\_BACKGROUND

• **WINDOW\_TO\_BACKGROUND** = `number`

窗口被切换到后台事件(event_t)。
打开新窗口时，当前窗口被切换到后台时，对当前窗口触发本事件。

#### Defined in

[awtk.ts:5109](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5109)

___

### WINDOW\_TO\_FOREGROUND

• **WINDOW\_TO\_FOREGROUND** = `number`

窗口被切换到前台事件(event_t)。
关闭当前窗口时，前一个窗口被切换到前台时，对前一个窗口触发本事件。

#### Defined in

[awtk.ts:5116](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5116)

___

### WINDOW\_WILL\_OPEN

• **WINDOW\_WILL\_OPEN** = `number`

窗口即将打开事件(event_t)。
如果有窗口动画，在窗口动画开始前触发。如果没有窗口动画，在窗口被加载后的下一次循环中触发。

#### Defined in

[awtk.ts:5095](https://github.com/zlgopen/awtk-binding/blob/145cdd58/tools/code_gen/js/output/awtk.ts#L5095)
