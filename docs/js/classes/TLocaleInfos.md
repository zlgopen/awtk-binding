[**AWTK**](../README.md) • **Docs**

***

[AWTK](../globals.md) / TLocaleInfos

# Class: TLocaleInfos

在某些情况下，需要多个资源管理器。比如在手表系统里，每个应用或表盘，可能放在独立的资源包中，
此时优先加载应用自己的资源，如果没有就加载系统的资源。

## Constructors

### new TLocaleInfos()

> **new TLocaleInfos**(): [`TLocaleInfos`](TLocaleInfos.md)

#### Returns

[`TLocaleInfos`](TLocaleInfos.md)

## Methods

### change()

> `static` **change**(`language`, `country`): [`TRet`](../enumerations/TRet.md)

设置全部locale_info的当前国家和语言。

#### Parameters

• **language**: `string`

语言。

• **country**: `string`

国家或地区。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7280](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7280)

***

### off()

> `static` **off**(`id`): [`TRet`](../enumerations/TRet.md)

注销指定事件的处理函数。

#### Parameters

• **id**: `number`

locale_infos_on返回的ID。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7306](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7306)

***

### on()

> `static` **on**(`type`, `on_event`, `ctx`): `number`

注册指定事件的处理函数。

#### Parameters

• **type**: [`TEventType`](../enumerations/TEventType.md)

事件类型，目前有EVT_LOCALE_INFOS_LOAD_INFO、EVT_LOCALE_INFOS_UNLOAD_INFO。

• **on\_event**: `Function`

事件处理函数。

• **ctx**: `any`

事件处理函数上下文。

#### Returns

`number`

返回id，用于locale_infos_off。

#### Defined in

[awtk.ts:7294](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7294)

***

### ref()

> `static` **ref**(`name`): [`TLocaleInfos`](TLocaleInfos.md)

获取指定小应用程序(applet)的locale_info。

#### Parameters

• **name**: `string`

小应用程序(applet)的名称。

#### Returns

[`TLocaleInfos`](TLocaleInfos.md)

返回locale_info对象。

#### Defined in

[awtk.ts:7255](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7255)

***

### reloadAll()

> `static` **reloadAll**(): [`TRet`](../enumerations/TRet.md)

重新加载全部字符串资源。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7317](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7317)

***

### unref()

> `static` **unref**(`locale_info`): [`TRet`](../enumerations/TRet.md)

释放指定小应用程序(applet)的locale_info。

#### Parameters

• **locale\_info**: [`TLocaleInfo`](TLocaleInfo.md)

locale_info对象。

#### Returns

[`TRet`](../enumerations/TRet.md)

返回RET_OK表示成功，否则表示失败。

#### Defined in

[awtk.ts:7267](https://github.com/zlgopen/awtk-binding/blob/a700388ad7cc060c10001c4cf776a40433e0a4e7/tools/code_gen/js/output/awtk.ts#L7267)
