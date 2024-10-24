// 動手做12-1：偵測人體移動
// 詳細的程式說明，請參閱第十二章，12-5頁。

const byte pirPin = D4 ;   // 紅外線感測器訊號腳位

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);  // 感測器訊號腳位設定成「輸入」
  pinMode(LED_BUILTIN, OUTPUT); // 內部 LED 腳位設定成「輸出」
}
void loop() {
  // 讀取感測器值，類型為布林（0 或 1）
  boolean val = digitalRead(pirPin);
  Serial.println(val);
  if (val==1) { // 若感測值為 1...
    digitalWrite(LED_BUILTIN, 0); // 點亮 LED
  } else {
    digitalWrite(LED_BUILTIN, 1);
  }
  delay(100);
}
