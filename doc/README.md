# Doc

## NodeMCU安裝與設定

對於 Windows 使用者，若無法自動偵測 nodeMCU 驅動程式，需要自行下載安裝 COM 埠驅動程式。

- [USB-to-UART CH340G 驅動程式下載](http://www.arduined.eu/files/CH341SER.zip)
- [USB-to-UART CP2102 驅動程式下載](https://www.silabs.com/documents/public/software/CP210x_Windows_Drivers.zip)

檢查 NodeMCU 是否已和電腦正確連接

- 開啟「控制台」>「裝置管理員」>「連接埠(COM 和 LPT)」

## 開發環境設定(使用Ardunio)

- 下載並安裝 [Ardunio](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)

- 下載 ESP8266 Package
  - 至 File\\Preferences\\Setting\\Board URL
  - 貼上下載點 http://arduino.esp8266.com/stable/package_esp8266com_index.json

  - 或是這個下載點 https://github.com/esp8266/Arduino/releases/download/2.3.0/package_esp8266com_index.json
- 安裝 ESP8266 Package
  
  至 Tools\\Boards Manager，搜尋 ESP8266 Community 並安裝。
- 選擇開發板：NodeMCU 1.0(ESP-12E Module)
- 選擇正確的 port。

---

## [LCD1602](lcd1620///README.md)
