


//定義聲音模組所使用的腳位
#define VOICE_PIN D7

void setup()
{
  //初始化序列埠
  Serial.begin(9600);

  //設定聲音模組所使用的腳位為輸入
  pinMode(VOICE_PIN, INPUT);

  //設定 LED 燈所使用的腳位為輸出
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  //讀取聲音模組的數位輸入值
  int voice = digitalRead(VOICE_PIN);
     Serial.println (voice);
  if (voice == 1)
  {
    //LED 燈腳位輸出低電位，LED 燈亮起
    digitalWrite(LED_BUILTIN, 0);

    //延遲 3000 ms
    delay(3000);
  }
  else
  {
    //LED 燈腳位輸出高電位，LED 燈熄滅
    digitalWrite(LED_BUILTIN, 1);
  }
}

