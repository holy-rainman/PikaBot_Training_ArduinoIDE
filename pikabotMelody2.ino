#include "pitches.h"

int melody[] = {
  NOTE_E4, NOTE_G4, NOTE_C4, 0, NOTE_A4, NOTE_C5, NOTE_F4,
  NOTE_B4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_D5, NOTE_C5
};
int noteDurations[] = {
  4,8,2,8,4,8,2,8,8,8,8,8,2
};

void setup() {
  for (int thisNote = 0; thisNote < 13; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

void loop() {
}
