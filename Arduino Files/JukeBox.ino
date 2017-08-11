//Arduino JukeBox 
//By: Waleed Ahmed (w29ahmed)


#include <LiquidCrystal.h>
//Create an instance of the library with the interface pins being used 
LiquidCrystal lcd(12,11,5,4,3,2);

int analogValue;
int songNum;

//constant values for the pins connected to the piezo and button 
const int buzzerPin = 13;
const int buttonPin = 8;

int buttonState = 0;


void setup() {
  //Turn on the LCD and initliaze columns and rows 
  lcd.begin(16, 2);

  //Setup pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  //Call analogCheck fuction which will return number of the song 
  songNum = analogCheck(); 

  //Display appropriate song information to LCD and queue the appropriate Song 
  //queue functions are present in each song tab and play the song if the button is pressed 
  if (songNum == 1) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("1. Star Wars");
    delay(10);
    queueStarWars();
  }
  else if (songNum == 2) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("2. Mario");
    delay(10);
    queueMario();
  }
  else if (songNum == 3) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("3. Game of ");
    lcd.setCursor(3,1);
    lcd.print("Thrones");
    delay(10);
    queueGoT();
  }
  else if (songNum == 4) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("4. Pirates of");
    lcd.setCursor(2,1);
    lcd.print("the Caribbean");
    delay(10);
    queuePirates();
  }
  else if (songNum == 5) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("5. O Canada");
    delay(10);
    queueOCanada();
  }
  
}

//Checks analog value from potentiometer and returns number of song based on a set analog range 
int analogCheck() {
  
  //Read value from A0 analog pin(connected to the potentiometer) 
  analogValue = analogRead(A0);

  if (analogValue > 0 && analogValue <= 205) {
    return 1;
  }
  else if (analogValue > 205 && analogValue <= 410) {
    return 2; 
  }
  else if (analogValue > 410 && analogValue <= 615) {
    return 3;
  }
  else if (analogValue > 615 && analogValue <= 820) {
    return 4;
  }
  else if (analogValue > 820 && analogValue <= 1024) {
    return 5; 
  }
}


