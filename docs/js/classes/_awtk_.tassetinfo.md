[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TAssetInfo](_awtk_.tassetinfo.md)

# Class: TAssetInfo

单个资源的描述信息。

## Hierarchy

* **TAssetInfo**

## Index

### Constructors

* [constructor](_awtk_.tassetinfo.md#constructor)

### Properties

* [nativeObj](_awtk_.tassetinfo.md#nativeobj)

### Accessors

* [isInRom](_awtk_.tassetinfo.md#isinrom)
* [name](_awtk_.tassetinfo.md#name)
* [refcount](_awtk_.tassetinfo.md#refcount)
* [size](_awtk_.tassetinfo.md#size)
* [subtype](_awtk_.tassetinfo.md#subtype)
* [type](_awtk_.tassetinfo.md#type)

## Constructors

###  constructor

\+ **new TAssetInfo**(`nativeObj`: any): *[TAssetInfo](_awtk_.tassetinfo.md)*

*Defined in [awtk.ts:10475](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10475)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TAssetInfo](_awtk_.tassetinfo.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:10475](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10475)*

## Accessors

###  isInRom

• **get isInRom**(): *number*

*Defined in [awtk.ts:10503](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10503)*

资源是否在ROM中。

**Returns:** *number*

___

###  name

• **get name**(): *string*

*Defined in [awtk.ts:10531](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10531)*

名称。

**Returns:** *string*

___

###  refcount

• **get refcount**(): *number*

*Defined in [awtk.ts:10522](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10522)*

引用计数。
is\_in\_rom == FALSE时才有效。

**Returns:** *number*

___

###  size

• **get size**(): *number*

*Defined in [awtk.ts:10512](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10512)*

大小。

**Returns:** *number*

___

###  subtype

• **get subtype**(): *number*

*Defined in [awtk.ts:10494](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10494)*

子类型。

**Returns:** *number*

___

###  type

• **get type**(): *number*

*Defined in [awtk.ts:10485](https://github.com/zlgopen/awtk-binding/blob/d723364/tools/code_gen/js/output/awtk.ts#L10485)*

类型。

**Returns:** *number*
