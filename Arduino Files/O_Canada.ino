//Original Code from: https://www.youtube.com/watch?v=w0dshz-sRtw

//Modifications made by: w29ahmed 
//Modifications include the queue function to check button state and code to restart the program if potentiometer range has changed  


#include "pitches.h"
#define NO_SOUND 0 //makes the rests in music 

int pace = 1450; //change pace of music if needed 

//array of notes 
int OCanadaMelody[] = {
  NOTE_A4, NOTE_C5, NOTE_C5, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_C5, NOTE_D5, 
  NOTE_G4, NO_SOUND, NOTE_A4, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5,
  NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_AS4,
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_AS4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4,
  NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, 
  NOTE_A4, NOTE_C5, NOTE_C5, NOTE_F4, NOTE_AS4, NOTE_D5, NOTE_D5, NOTE_G4,
  NOTE_C5, NOTE_CS5, NOTE_CS5, NOTE_D5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_A4,
  NOTE_C5, NOTE_F5, NOTE_F5, NOTE_D5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_E4, NOTE_F4 
};

//note duration: 1= whole note, 2 = half note, 4 = quarter note, 8 = eigth note, etc. 
int noteDuration[] = {
  2, 2.67, 8, 1.33, 4, 4, 4, 4, 4, 
  1.33, 4, 2, 2.67, 8, 1.33, 4, 
  4, 4, 4, 4, 1.33, 5.33, 16, 2.67, 8, 4, 5.33, 16,
  2.67, 8, 4, 5.33, 16, 4, 4, 4, 4, 1.33, 5.33, 16, 
  2.67, 8, 4, 5.33, 16, 2.67, 8, 4, 4, 4, 4, 8, 8, 8, 8, 1, 
  2, 2.67, 8, 1, 2, 2.67, 8, 1, 
  2, 2.67, 8, 4, 4, 4, 4, 2, 2, 1, 
  2, 2.67, 8, 4, 4, 4, 4, 2, 2, 1
};


void queueOCanada()
{
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == 1) {
    //button has been pressed
    playOCanada();
  } 
}

void playOCanada() { 
  for (int Note = 0; Note < 84; Note++) {
    int duration = pace/noteDuration[Note];   //adjust duration with the pace of music
    tone(buzzerPin, OCanadaMelody[Note], duration);  //play the note 
    delay(duration);
    noTone(buzzerPin);

    songNum = analogCheck();
    if (songNum != 5) {
      //This restarts the program
      asm volatile ("  jmp 0");
    }
    delay(75);
  }
  
}

