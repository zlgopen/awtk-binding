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

[awtk.ts:4247](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4247)

***

### getPointerY()

> `static` **getPointerY**(): `number`

获取全局指针的Y坐标。

#### Returns

`number`

返回全局指针的X坐标。

#### Defined in

[awtk.ts:4258](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4258)

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

[awtk.ts:4202](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4202)

***

### isPointerPressed()

> `static` **isPointerPressed**(): `boolean`

获取全局指针是否按下。

#### Returns

`boolean`

返回全局指针是否按下。

#### Defined in

[awtk.ts:4269](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4269)

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

[awtk.ts:4186](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4186)

***

### quit()

> `static` **quit**(): [`TRet`](../enumerations/TRet.md)

退出TK事件主循环。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4224](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4224)

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

[awtk.ts:4236](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4236)

***

### run()

> `static` **run**(): [`TRet`](../enumerations/TRet.md)

进入TK事件主循环。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:4213](https://github.com/zlgopen/awtk-binding/blob/f59cb588237dd9223284af0eed269ac285d66f8b/tools/code_gen/js/output/awtk.ts#L4213)
