[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TImageManager](_awtk_.timagemanager.md)

# Class: TImageManager

图片管理器。负责加载，解码和缓存图片。

## Hierarchy

* **TImageManager**

## Index

### Constructors

* [constructor](_awtk_.timagemanager.md#constructor)

### Properties

* [nativeObj](_awtk_.timagemanager.md#nativeobj)

### Methods

* [getBitmap](_awtk_.timagemanager.md#getbitmap)
* [instance](_awtk_.timagemanager.md#static-instance)

## Constructors

###  constructor

\+ **new TImageManager**(`nativeObj`: any): *[TImageManager](_awtk_.timagemanager.md)*

*Defined in [awtk.ts:3641](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L3641)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TImageManager](_awtk_.timagemanager.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:3641](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L3641)*

## Methods

###  getBitmap

▸ **getBitmap**(`name`: string, `image`: [TBitmap](_awtk_.tbitmap.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:3667](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L3667)*

获取指定的图片。
先从缓存查找，如果没找到，再加载并缓存。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`name` | string | 图片名称。 |
`image` | [TBitmap](_awtk_.tbitmap.md) | 用于返回图片。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` instance

▸ **instance**(): *[TImageManager](_awtk_.timagemanager.md)*

*Defined in [awtk.ts:3653](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L3653)*

获取缺省的图片管理器。

**Returns:** *[TImageManager](_awtk_.timagemanager.md)*

返回图片管理器对象。
