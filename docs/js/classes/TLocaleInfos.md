[**AWTK**](../README.md)

***

[AWTK](../globals.md) / TLocaleInfos

# Class: TLocaleInfos

Defined in: [awtk.ts:7326](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7326)

在某些情况下，需要多个资源管理器。比如在手表系统里，每个应用或表盘，可能放在独立的资源包中，
此时优先加载应用自己的资源，如果没有就加载系统的资源。

## Constructors

### Constructor

> **new TLocaleInfos**(): `TLocaleInfos`

#### Returns

`TLocaleInfos`

## Methods

### change()

> `static` **change**(`language`, `country`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7360](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7360)

设置全部locale_info的当前国家和语言。

#### Parameters

##### language

`string`

语言。

##### country

`string`

国家或地区。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### off()

> `static` **off**(`id`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7386](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7386)

注销指定事件的处理函数。

#### Parameters

##### id

`number`

locale_infos_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### on()

> `static` **on**(`type`, `on_event`, `ctx`): `number`

Defined in: [awtk.ts:7374](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7374)

注册指定事件的处理函数。

#### Parameters

##### type

[`TEventType`](../enumerations/TEventType.md)

事件类型，目前有EVT_LOCALE_INFOS_LOAD_INFO、EVT_LOCALE_INFOS_UNLOAD_INFO。

##### on\_event

`Function`

事件处理函数。

##### ctx

`any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于locale_infos_off。

***

### ref()

> `static` **ref**(`name`): `TLocaleInfos`

Defined in: [awtk.ts:7335](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7335)

获取指定小应用程序(applet)的locale_info。

#### Parameters

##### name

`string`

小应用程序(applet)的名称。

#### Returns

`TLocaleInfos`

返回locale_info对象。

***

### reloadAll()

> `static` **reloadAll**(): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7397](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7397)

重新加载全部字符串资源。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

***

### unref()

> `static` **unref**(`locale_info`): [`TRet`](../enumerations/TRet.md)

Defined in: [awtk.ts:7347](https://github.com/zlgopen/awtk-binding/blob/fc6a89953425a78e07c6b6bfebe31f79505904bf/tools/code_gen/js/output/awtk.ts#L7347)

释放指定小应用程序(applet)的locale_info。

#### Parameters

##### locale\_info

[`TLocaleInfo`](TLocaleInfo.md)

locale_info对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。
