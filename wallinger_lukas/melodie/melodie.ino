#include "notes.h"

int buz = 6;
int viertel = 125;
int halb = 250;

int song[][2] = {
  {NOTE_D4,125},
  {NOTE_D4, viertel},
  {NOTE_D5, halb},
  {NOTE_A4, halb},
  {NOTE_GS4, viertel},
  {NOTE_G4, halb},
  {NOTE_F4, halb},
  {NOTE_D4, viertel},
  {NOTE_F4, halb},
  {NOTE_G4, halb},
  {NOTE_C4, viertel},
  {NOTE_C4, viertel},
  {NOTE_C4, viertel},
  {NOTE_C4, viertel},
  {NOTE_D5, halb},
  {NOTE_A4, 357},
  {NOTE_GS4,125},
  {NOTE_G4,250},
  {NOTE_F4,250},
  {NOTE_D4,125},
  {NOTE_F4,125},
  {NOTE_G4,125},
  {NOTE_B3, 125},
  {NOTE_B3, 125},
  {NOTE_D5, halb},
  {NOTE_A4, 375},


};

void setup() {
  pinMode(buz, OUTPUT);

}

void loop() {
  for ( int i = 0; i < sizeof(song); i++) {
    int th = song[i][0];
    int d = song[i][1];

    tone(buz, th, d);
    delay(d);
  }

}
