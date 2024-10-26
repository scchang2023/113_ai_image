//int ledPin = BUILTIN;
int sensorPin = D7;
boolean val = 0;
boolean ledOn =0;

void setup(){
  //pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val =digitalRead(sensorPin);
     Serial.println (val);
  // 當感測器偵測到聲音訊號時，讓LED變暗或變亮
  
  if (val==HIGH) {
    // 當 LED 熄滅時，讓LED亮，否則熄滅 LED 
    if (!ledOn) { 
       digitalWrite(LED_BUILTIN, 0);
       ledOn = 1;
    }
    else {
       digitalWrite(LED_BUILTIN, 1);
       ledOn = 0;
    }
  }
}