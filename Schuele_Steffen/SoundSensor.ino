const int soundSensorPin = A0; // Pin connected to the sound sensor
int soundLevel;

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop() {
  soundLevel = analogRead(soundSensorPin); // Read the analog value from the sound sensor
  Serial.print("Sound Level: ");
  Serial.println(soundLevel); // Output the sound level to the serial monitor
  delay(500); // Wait for half a second before the next reading
}
