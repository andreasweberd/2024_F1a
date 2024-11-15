#include <noten.h>

int shortDuration = 250;
int normalDuration = 500;
int longDuration = 750;
int extraLongDuration = 1000;

int melodie[62][2] = {
  {NOTE_E4, normalDuration}, {NOTE_E4, normalDuration}, 
  {NOTE_F4, normalDuration}, {NOTE_G4, normalDuration}, //takt 1

  {NOTE_G4, normalDuration}, {NOTE_F4, normalDuration}, 
  {NOTE_E4, normalDuration}, {NOTE_D4, normalDuration}, //takt 2 

  {NOTE_C4, normalDuration}, {NOTE_C4, normalDuration}, 
  {NOTE_D4, normalDuration}, {NOTE_E4, normalDuration}, //takt 3  

  {NOTE_E4, longDuration}, {NOTE_D4, shortDuration}, 
  {NOTE_D4, extraLongDuration}, // takt 4 vers 1 ende

  {NOTE_E4, normalDuration}, {NOTE_E4, normalDuration}, 
  {NOTE_F4, normalDuration}, {NOTE_G4, normalDuration}, //takt 5 ende

  {NOTE_G4, normalDuration}, {NOTE_F4, normalDuration}, 
  {NOTE_E4, normalDuration}, {NOTE_D4, normalDuration}, //takt 6 ende

  {NOTE_C4, normalDuration}, {NOTE_C4, normalDuration}, 
  {NOTE_D4, normalDuration}, {NOTE_E4, normalDuration}, //takt 7 ende 

  {NOTE_D4, longDuration}, {NOTE_C4, shortDuration}, 
  {NOTE_C4, extraLongDuration}, // takt 8 vers 2 ende

  {NOTE_D4, normalDuration}, {NOTE_D4, normalDuration}, 
  {NOTE_E4, normalDuration}, {NOTE_C4, normalDuration}, //takt 9 ende

  {NOTE_D4, normalDuration}, {NOTE_E4, shortDuration},
  {NOTE_F4, shortDuration}, {NOTE_E4, normalDuration},
  {NOTE_C4, normalDuration}, //takt 10 ende

  {NOTE_D4, normalDuration}, {NOTE_E4, shortDuration}, 
  {NOTE_F4, shortDuration}, {NOTE_E4, normalDuration}, 
  {NOTE_D4, normalDuration}, //takt 11 ende

  {NOTE_C4, normalDuration}, {NOTE_D4, normalDuration},
  {NOTE_G3, normalDuration}, {NOTE_E4, normalDuration}, //takt 12 ende vers 3 ende

  {NOTE_E4, normalDuration}, {NOTE_F4, normalDuration},
  {NOTE_G4, normalDuration}, //takt 13 ende

  {NOTE_G4, normalDuration}, {NOTE_F4, normalDuration},
  {NOTE_E4, normalDuration}, {NOTE_D4, normalDuration}, //takt 14 ende

  {NOTE_C4, normalDuration}, {NOTE_C4, normalDuration},
  {NOTE_D4, normalDuration}, {NOTE_E4, normalDuration}, //takt 15 ende

  {NOTE_D4, longDuration}, {NOTE_C4, shortDuration},
  {NOTE_C4, extraLongDuration} // takt 16 ende vers 4 ende lied ende
};

void setup() {
    
}

void loop() {
  for (int i = 0; i < 62; i++) {
      tone(8, melodie[i][0], melodie[i][1]);
      delay(melodie[i][1] * 0.8);
      noTone(8);
      delay(melodie[i][1] * 0.2);
  }
  delay(9000);
}