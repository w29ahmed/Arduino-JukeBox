////////////////////////////////////////////////////////////////////////
//
//                    GAME OF THRONES THEME SONG
//                    PERFORMED ON PIEZO SENSOR
//                           WRITTEN BY
//                           KALEB HILL
//                            5/28/15
//
////////////////////////////////////////////////////////////////////////

//Original code and demonstration can be found at: https://www.youtube.com/watch?v=vrzQU_QbQ5U

//Modifications made by: w29ahmed 
//Modifications include the queue function to check button state and code to restart the program if potentiometer range has changed  


void queueGoT()
{
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == 1) {
    //button has been pressed
    playGoT();
  } 
}

void note(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  
  songNum = analogCheck();

  if (songNum != 3) {
    //This restarts the program
    asm volatile ("  jmp 0");
  }
}


void playGoT() {
 
//G3
note( 196, 375);
delay(400);
 
 
////////////////////////////////ONE
 
//C3 
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
////////////////////////////////TWO
 
//C3 
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
//////////////////////////////THREE
 
//C3
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
///////////////////////////////FOUR
 
//C3 
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
///////////////////////////////FIVE
 
//C3
note( 131, 375);
delay(400);
 
//E3
note( 165, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
///////////////////////////////SIX
 
//C3 
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
//////////////////////////////SEVEN
 
//C3
note( 131, 375);
delay(400);
 
//E3
note( 165, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
 
//////////////////////////////EIGHT
 
//C3
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
/////////////////////////////////////////////////CHORUS1////////////////////////////////////////////
 
 
//G4  
note( 392, 1175);
delay(1200);
 
//C4
note( 262, 1175);
delay(1200);
 
//DS4
note( 311, 175);
delay(200);
 
//F4
note( 349, 175);
delay(200);
 
//G4
note( 392, 775);
delay(800);
 
//C4
note( 262, 775);
delay(800);
 
//DS4
note( 311, 175);
delay(200);
 
//F4
note( 349, 175);
delay(200);
 
//////////////////////////////
 
//C3  
note( 131, 375);
delay(400);
 
//DS3
note( 156, 175);
delay(200);
 
//F3
note( 175, 175);
delay(200);
 
//G3
note( 196, 375);
delay(400);
 
///////////////////////////////
 
//C3 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);
 
 
 
/////////////////////////////
 
//C3

 
 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);
 
/////////////////////////////
 
//C3
 
 
 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);

 
 
//F4

note( 349, 1175);
delay(1200);

 
//AS4

note( 233, 1175);
delay(1200);

 
//D4

note( 294, 175);
delay(200);
 
//DS4

note( 311, 175);
delay(200);
 
//F4

note( 349, 775);
delay(800);
 
//AS3
note( 233, 775);
delay(800);
 
//DS4

note( 311, 175);
delay(200);
 
//D4

note( 294, 175);
delay(200);
 
//////////////////////////////
 
//C3
 
 
 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);
 
///////////////////////////////
 
//C3
 
 
 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);
 
 
/////////////////////////////
 
//C3
 
 
 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);
 
/////////////////////////////
 
//C3
 
 
 
note( 131, 375);
delay(400);
 
//DS3

note( 156, 175);
delay(200);
 
//F3

note( 175, 175);
delay(200);
 
//G3

note( 196, 375);
delay(400);

/////////////////////////////////////////////////CHORUS2////////////////////////////////////////////
  
  
//G5  

note( 392, 1175);
delay(1200);


//C4

note( 262, 1175);
delay(1200);


//DS4

note( 311, 175);
delay(200);

//F4

note( 349, 175);
delay(200);

//G4

note( 392, 775);
delay(800);

//C4



note( 262, 775);
delay(800);

//DS4

note( 311, 175);
delay(200);

//F4

note( 349, 175);
delay(200);

//////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);

///////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);



/////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);

/////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);



//////////////////////////////////////////

//F4

note( 349, 1175);
delay(1200);


//AS4

note( 233, 1175);
delay(1200);


//D4

note( 294, 175);
delay(200);

//DS4

note( 311, 175);
delay(200);

//F4

note( 349, 775);
delay(800);

//AS3



note( 233, 775);
delay(800);

//DS4

note( 311, 175);
delay(200);

//D4

note( 294, 175);
delay(200);

//////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);

///////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);


/////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);

/////////////////////////////
  
//C3



note( 131, 375);
delay(400);

//DS3

note( 156, 175);
delay(200); 
  
//F3

note( 175, 175);
delay(200);

//G3

note( 196, 375);
delay(400);

}
