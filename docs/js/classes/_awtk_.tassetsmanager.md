[AWTK](../README.md) › [Globals](../globals.md) › ["awtk"](../modules/_awtk_.md) › [TAssetsManager](_awtk_.tassetsmanager.md)

# Class: TAssetsManager

资源管理器。
这里的资源管理器并非Windows下的文件浏览器，而是负责对各种资源，比如字体、主题、图片、界面数据、字符串和其它数据的进行集中管理的组件。引入资源管理器的目的有以下几个：

* 让上层不需要了解存储的方式。
在没有文件系统时或者内存紧缺时，把资源转成常量数组直接编译到代码中。在有文件系统而且内存充足时，资源放在文件系统中。在有网络时，资源也可以存放在服务器上(暂未实现)。资源管理器为上层提供统一的接口，让上层而不用关心底层的存储方式。

* 让上层不需要了解资源的具体格式。
比如一个名为earth的图片，没有文件系统或内存紧缺，图片直接用位图数据格式存在ROM中，而有文件系统时，则用PNG格式存放在文件系统中。资源管理器让上层不需要关心图片的格式，访问时指定图片的名称即可(不用指定扩展名)。

* 让上层不需要了解屏幕的密度。
不同的屏幕密度下需要加载不同的图片，比如MacPro的Retina屏就需要用双倍解析度的图片，否则就出现界面模糊。AWTK以后会支持PC软件和手机软件的开发，所以资源管理器需要为此提供支持，让上层不需关心屏幕的密度。

* 对资源进行内存缓存。
不同类型的资源使用方式是不一样的，比如字体和主题加载之后会一直使用，UI文件在生成界面之后就暂时不需要了，PNG文件解码之后就只需要保留解码的位图数据即可。资源管理器配合图片管理器等其它组件实现资源的自动缓存。

当从文件系统加载资源时，目录结构要求如下：

```
assets/{theme}/raw/
fonts   字体
images  图片
x1   普通密度屏幕的图片。
x2   2倍密度屏幕的图片。
x3   3倍密度屏幕的图片。
xx   密度无关的图片。
strings 需要翻译的字符串。
styles  主题数据。
ui      UI描述数据。
```

## Hierarchy

* **TAssetsManager**

## Index

### Constructors

* [constructor](_awtk_.tassetsmanager.md#constructor)

### Properties

* [nativeObj](_awtk_.tassetsmanager.md#nativeobj)

### Methods

* [ref](_awtk_.tassetsmanager.md#ref)
* [unref](_awtk_.tassetsmanager.md#unref)
* [instance](_awtk_.tassetsmanager.md#static-instance)

## Constructors

###  constructor

\+ **new TAssetsManager**(`nativeObj`: any): *[TAssetsManager](_awtk_.tassetsmanager.md)*

*Defined in [awtk.ts:10658](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10658)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeObj` | any |

**Returns:** *[TAssetsManager](_awtk_.tassetsmanager.md)*

## Properties

###  nativeObj

• **nativeObj**: *any*

*Defined in [awtk.ts:10658](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10658)*

## Methods

###  ref

▸ **ref**(`type`: [TAssetType](../enums/_awtk_.tassettype.md), `name`: string): *[TAssetInfo](_awtk_.tassetinfo.md)*

*Defined in [awtk.ts:10683](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10683)*

在资源管理器的缓存中查找指定的资源并引用它，如果缓存中不存在，尝试加载该资源。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`type` | [TAssetType](../enums/_awtk_.tassettype.md) | 资源的类型。 |
`name` | string | 资源的名称。  |

**Returns:** *[TAssetInfo](_awtk_.tassetinfo.md)*

返回资源。

___

###  unref

▸ **unref**(`info`: [TAssetInfo](_awtk_.tassetinfo.md)): *[TRet](../enums/_awtk_.tret.md)*

*Defined in [awtk.ts:10695](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10695)*

释放指定的资源。

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`info` | [TAssetInfo](_awtk_.tassetinfo.md) | 资源。  |

**Returns:** *[TRet](../enums/_awtk_.tret.md)*

返回RET_OK表示成功，否则表示失败。

___

### `Static` instance

▸ **instance**(): *[TAssetsManager](_awtk_.tassetsmanager.md)*

*Defined in [awtk.ts:10670](https://github.com/zlgopen/awtk-binding/blob/78b9c61/tools/code_gen/js/output/awtk.ts#L10670)*

获取缺省资源管理器。

**Returns:** *[TAssetsManager](_awtk_.tassetsmanager.md)*

返回asset manager对象。
