[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TGlobal

# Class: TGlobal

TK全局对象。

## Constructors

### new TGlobal()

> **new TGlobal**(): [`TGlobal`](TGlobal.md)

#### Returns

[`TGlobal`](TGlobal.md)

## Methods

### getPointerX()

> `static` **getPointerX**(): `number`

获取全局指针的X坐标。

#### Returns

`number`

返回全局指针的X坐标。

#### Defined in

[awtk.ts:4204](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4204)

***

### getPointerY()

> `static` **getPointerY**(): `number`

获取全局指针的Y坐标。

#### Returns

`number`

返回全局指针的X坐标。

#### Defined in

[awtk.ts:4215](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4215)

***

### init()

> `static` **init**(`w`, `h`, `app_type`, `app_name`, `app_root`): [`TRet`](../enumerations/TRet.md)

初始化TK。

#### Parameters

• **w**: `number`

LCD宽度。

• **h**: `number`

LCD高度。

• **app\_type**: [`TAppType`](../enumerations/TAppType.md)

应用程序的类型。

• **app\_name**: `string`

应用程序的名称(必须为常量字符串)。

• **app\_root**: `string`

应用程序的根目录，用于定位资源文件(必须为常量字符串)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4159](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4159)

***

### isPointerPressed()

> `static` **isPointerPressed**(): `boolean`

获取全局指针是否按下。

#### Returns

`boolean`

返回全局指针是否按下。

#### Defined in

[awtk.ts:4226](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4226)

***

### preInit()

> `static` **preInit**(): [`TRet`](../enumerations/TRet.md)

初始化基本功能。
> 在tk_init之前，应用程序可能需要加载配置文件，
> 为了保证这些功能正常工作，可以先调用tk_pre_init来初始化平台、内存和data reader等等。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4143](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4143)

***

### quit()

> `static` **quit**(): [`TRet`](../enumerations/TRet.md)

退出TK事件主循环。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4181](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4181)

***

### quitEx()

> `static` **quitEx**(`delay`): [`TRet`](../enumerations/TRet.md)

退出TK事件主循环。

#### Parameters

• **delay**: `number`

延迟退出的时间(毫秒)。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4193](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4193)

***

### run()

> `static` **run**(): [`TRet`](../enumerations/TRet.md)

进入TK事件主循环。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4170](https://github.com/zlgopen/awtk-binding/blob/eba643a28b6249e8f99055dcbc6755f195868c97/tools/code_gen/js/output/awtk.ts#L4170)
