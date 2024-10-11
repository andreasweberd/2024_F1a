void setup() {
  pinMode (11, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogwertVomSoundsensor = analogRead(11);
  Serial.println (analogwertVomSoundsensor);
  delay(80);

}
