# UIAPduino Pro Micro CH32V006 V1.1 Blink

`ch32fun` を使った `UIAPduino Pro Micro CH32V006 V1.1` 向けの PlatformIO Lチカプロジェクトです。

## Board settings

- MCU: `CH32V006K8U6`
- PlatformIO board: `genericCH32V006K8U6`
- Framework: `ch32v003fun`
- On-board LED: `PC3` (`D18/LED` in the schematic)

## Build

```sh
pio run -e uiapduino-onboard
```

## Upload

このプロジェクトでは、実績のある最小コマンド
`minichlink -w firmware.bin flash -b`
に合わせるため、`minichlink` への追加 `upload_flags` は設定していません。

工場出荷時には、ボード中央のオレンジ色 LED が「ろうそく」のように点灯する
ユーザプログラムが書き込まれています。

```sh
pio run -e uiapduino-onboard -t upload
```

外付けの `WCH-Link` を使う場合は、こちらを使います。

```sh
pio run -e wch-link -t upload
```
