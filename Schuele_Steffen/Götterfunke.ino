#include <noten.h>

int shortDuration = 250;
int normalDuration = 500;
int longDuration = 1000;

int melodie[12][2] = {
    {NOTE_E4, normalDuration},
    {NOTE_E4, normalDuration},
    {NOTE_F4, normalDuration},
    {NOTE_G4, normalDuration},
    {NOTE_F4, normalDuration},
    {NOTE_E4, normalDuration},
    {NOTE_D4, normalDuration},
    {NOTE_C4, normalDuration},
    {NOTE_C4, normalDuration},
    {NOTE_D4, normalDuration},
    {NOTE_E4, normalDuration},
    {NOTE_E4, normalDuration}
};

void setup() {
    
}

void loop() {
    for (int i = 0; i < 12; i++) {
        tone(8, melodie[i][0], melodie[i][1]);
        delay(melodie[i][1]);
        noTone(8);
    }
}