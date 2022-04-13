void setup() {

  Serial.begin(9600);

}

void loop() {

  int analogValue = analogRead(4);  // 4 is the pin reading potentiometer 
  int brightness = map(analogValue, 0, 4095, 0, 255);

  ledcWrite(0, brightness);
  delay(100);

  Serial.println(brightness);
  delay(30);
  
}
