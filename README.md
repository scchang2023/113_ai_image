# 113_AI影像互動入門

## 準備

- [嘸蝦米](https://boshiamy.com/)

- [Git](https://git-scm.com/)

- [Visual Studio Code](https://code.visualstudio.com/)

- [Ardunio](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)

- [倪老師上課用的雲端硬碟](https://drive.google.com/drive/folders/1KgtU5GrxqSX69DrHz9Hf0e90lH7osqnu?usp=drive_link)

- 郭老師上課用的內部網路磁碟 ( \\\\172.16.19.31 )

- 教室的 WIFI
  - SSID : STUDENT-C2-3
  - PWD : 28721940

- 組別：第 5 組

## 材料表

1. Bread Board
1. USB Cable
1. ESP8266 ( MCU )
1. LCD1602
1. PIR (人體感應)
1. IN219 (電流偵測)
1. AD8232 (脈博偵測)
1. RFID (門禁卡)
1. 杜邦線
1. 排針

## 環境設定

- 安裝 Ardunio
- 安裝 esp8266 package
  - 至 File\\Preferences\\Setting\\Board URL
  - 貼上下載點 http://arduino.esp8266.com/stable/package_esp8266com_index.json

  - 或是這個下載點 https://github.com/esp8266/Arduino/releases/download/2.3.0/package_esp8266com_index.json

- 選擇開發板：NodeMCU 1.0(ESP-12E Module)
- 選擇正確的 port
