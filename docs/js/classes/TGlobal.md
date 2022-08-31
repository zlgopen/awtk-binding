[AWTK](../README.md) / [Exports](../modules.md) / TGlobal

# Class: TGlobal

TK全局对象。

## Table of contents

### Constructors

- [constructor](TGlobal.md#constructor)

### Methods

- [getPointerX](TGlobal.md#getpointerx)
- [getPointerY](TGlobal.md#getpointery)
- [init](TGlobal.md#init)
- [isPointerPressed](TGlobal.md#ispointerpressed)
- [preInit](TGlobal.md#preinit)
- [quit](TGlobal.md#quit)
- [run](TGlobal.md#run)

## Constructors

### constructor

• **new TGlobal**()

## Methods

### getPointerX

▸ `Static` **getPointerX**(): `number`

获取全局指针的X坐标。

#### Returns

`number`

返回全局指针的X坐标。

#### Defined in

[awtk.ts:3992](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3992)

___

### getPointerY

▸ `Static` **getPointerY**(): `number`

获取全局指针的Y坐标。

#### Returns

`number`

返回全局指针的X坐标。

#### Defined in

[awtk.ts:4003](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4003)

___

### init

▸ `Static` **init**(`w`, `h`, `app_type`, `app_name`, `app_root`): [`TRet`](../enums/TRet.md)

初始化TK。

#### Parameters

| Name | Type | Description |
| :------ | :------ | :------ |
| `w` | `number` | LCD宽度。 |
| `h` | `number` | LCD高度。 |
| `app_type` | [`TAppType`](../enums/TAppType.md) | 应用程序的类型。 |
| `app_name` | `string` | 应用程序的名称(必须为常量字符串)。 |
| `app_root` | `string` | 应用程序的根目录，用于定位资源文件(必须为常量字符串)。 |

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3959](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3959)

___

### isPointerPressed

▸ `Static` **isPointerPressed**(): `boolean`

获取全局指针是否按下。

#### Returns

`boolean`

返回全局指针是否按下。

#### Defined in

[awtk.ts:4014](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L4014)

___

### preInit

▸ `Static` **preInit**(): [`TRet`](../enums/TRet.md)

初始化基本功能。
> 在tk_init之前，应用程序可能需要加载配置文件，
> 为了保证这些功能正常工作，可以先调用tk_pre_init来初始化平台、内存和data reader等等。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3943](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3943)

___

### quit

▸ `Static` **quit**(): [`TRet`](../enums/TRet.md)

退出TK事件主循环。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3981](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3981)

___

### run

▸ `Static` **run**(): [`TRet`](../enums/TRet.md)

进入TK事件主循环。

#### Returns

[`TRet`](../enums/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:3970](https://github.com/zlgopen/awtk-binding/blob/25012c6/tools/code_gen/js/output/awtk.ts#L3970)
