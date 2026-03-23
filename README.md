# UIAPduino Pro Micro CH32V006 V1.1 Blink

`UIAPduino Pro Micro CH32V006 V1.1` 向けの、`ch32fun` ベース PlatformIO Lチカプロジェクトです。  
オンボード LED (`PC3`) を 1 秒ごとに点滅させます。

## 構成

- MCU: `CH32V006K8U6`
- Platform: `ch32v`
- PlatformIO board: `genericCH32V006K8U6`
- Framework: `ch32v003fun`
- Default environment: `uiapduino-onboard`
- On-board LED: `PC3` (`D18/LED`)

## 動作内容

[`src/main.c`](/Users/ooe/src/UIAPduino_ch32v006/src/main.c) では以下を行っています。

- `SystemInit()` で初期化
- `funGpioInitAll()` で GPIO を有効化
- `PC3` を push-pull 出力に設定
- LED を 1 秒周期で ON/OFF

## ビルド

VS Code でこのフォルダを開き、PlatformIO IDE の機能を使ってビルドします。

1. VS Code でこのプロジェクトを開く
2. PlatformIO IDE が有効になっていることを確認する
3. 画面下部の PlatformIO ツールバーから `Build` を実行する

既定の environment は `uiapduino-onboard` です。

## 書き込み

現在の [`platformio.ini`](/Users/ooe/src/UIAPduino_ch32v006/platformio.ini) では、書き込み方式に `minichlink` を使用します。

このプロジェクトでは、実績のある最小コマンド `minichlink -w firmware.bin flash -b` に合わせるため、追加の `upload_flags` は設定していません。

VS Code 上で書き込む場合は、PlatformIO IDE の `Upload` を使用します。

1. ターゲットボードを接続する
2. VS Code でこのプロジェクトを開く
3. 画面下部の PlatformIO ツールバーから `Upload` を実行する

## メモ

- 工場出荷時には、中央のオレンジ色 LED が「ろうそく」のように点灯するサンプルが書き込まれている場合があります。
- `WCH-Link` 用の別 environment は、現時点の [`platformio.ini`](/Users/ooe/src/UIAPduino_ch32v006/platformio.ini) には定義していません。
