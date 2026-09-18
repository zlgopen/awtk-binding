[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TGlobal

# Class: TGlobal

Defined in: [awtk.ts:4263](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4263)

TK全局对象。

## Constructors

### Constructor

> **new TGlobal**(): `TGlobal`

#### Returns

`TGlobal`

## Methods

### getPointerX()

> `static` **getPointerX**(): `number`

Defined in: [awtk.ts:4334](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4334)

获取全局指针的X坐标。

#### Returns

`number`

返回全局指针的X坐标。

***

### getPointerY()

> `static` **getPointerY**(): `number`

Defined in: [awtk.ts:4345](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4345)

获取全局指针的Y坐标。

#### Returns

`number`

返回全局指针的X坐标。

***

### init()

> `static` **init**(`w`, `h`, `app_type`, `app_name`, `app_root`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4289](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4289)

初始化TK。

#### Parameters

##### w

`number`

LCD宽度。

##### h

`number`

LCD高度。

##### app\_type

[`TAppType`](../enumerations/TAppType.md)

应用程序的类型。

##### app\_name

`string`

应用程序的名称(必须为常量字符串)。

##### app\_root

`string`

应用程序的根目录，用于定位资源文件(必须为常量字符串)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### isPointerPressed()

> `static` **isPointerPressed**(): `boolean`

Defined in: [awtk.ts:4356](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4356)

获取全局指针是否按下。

#### Returns

`boolean`

返回全局指针是否按下。

***

### preInit()

> `static` **preInit**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4273](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4273)

初始化基本功能。
> 在tk_init之前，应用程序可能需要加载配置文件，
> 为了保证这些功能正常工作，可以先调用tk_pre_init来初始化平台、内存和data reader等等。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### quit()

> `static` **quit**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4311](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4311)

退出TK事件主循环。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### quitEx()

> `static` **quitEx**(`delay`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4323](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4323)

退出TK事件主循环。

#### Parameters

##### delay

`number`

延迟退出的时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### run()

> `static` **run**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:4300](https://github.com/zlgopen/awtk-binding/blob/452775476bc9eb3d3f63639b48e2df4197347ad7/tools/code_gen/js/output/awtk.ts#L4300)

进入TK事件主循环。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
