const int soundSensorPin = A0; 
const int ledPins[] = {11, 12, 13}; // LEDs: 11 = grün, 12 = gelb, 13 = rot
int soundLevel;

void setup() {
  Serial.begin(9600); 
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT); 
  }
}

void loop() {
  soundLevel = analogRead(soundSensorPin); 
  Serial.println(soundLevel); 

  if (soundLevel <= 100) {
    digitalWrite(ledPins[0], HIGH); // Grüne LED an
    digitalWrite(ledPins[1], LOW);  // Gelbe LED aus
    digitalWrite(ledPins[2], LOW);  // Rote LED aus
  } else if (soundLevel > 100 && soundLevel <= 200) {
    digitalWrite(ledPins[0], LOW);  // Grüne LED aus
    digitalWrite(ledPins[1], HIGH); // Gelbe LED an
    digitalWrite(ledPins[2], LOW);  // Rote LED aus
  } else if (soundLevel > 200) {
    digitalWrite(ledPins[0], LOW);  // Grüne LED aus
    digitalWrite(ledPins[1], LOW);  // Gelbe LED aus
    digitalWrite(ledPins[2], HIGH); // Rote LED an
  }

  delay(500); 
}
