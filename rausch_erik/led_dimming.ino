const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}S

void loop() {
  dimLED(redPin);
  dimLED(greenPin);
  dimLED(bluePin);
}

void dimLED(int pin) {
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(pin, brightness);
    delay(10);
  }
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(pin, brightness);
    delay(10);
  }
}
