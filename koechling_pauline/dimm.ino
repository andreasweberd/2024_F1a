int LED = 13;
int intervals = 10;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  brighten();
  dimm();
}

void dimm() {
  for (int staerke=255; staerke>0; staerke=staerke-intervals){
    analogWrite(LED,staerke);
    delay(200);
  }
}
void brighten() {
  for (int staerke=0; staerke<255; staerke=staerke+intervals){
    analogWrite(LED,staerke);
    delay(200);
    }
}
