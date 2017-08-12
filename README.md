# Arduino Jukebox 

## How it Works 
A potentiometer is used to shift through the songs. 
A button is used to play the song when it is pressed. 
To change the song, simply move the potentiometer, and it will stop the current song and go to the new one. 

The code for each song is not written by me, I have gathered them from different sources and mode some modifications to each one 
so it only plays the songs when the potentiometer range is correct and the button is pressed. 
I then also added a block of code to restart the program if the potentiometer range changes in between notes, essentially stopping the current song from playing.

## Songs
1. Star Wars Main Theme 
2. Mario Main Theme 
2. Game of Thrones Main Theme 
4. Pirates of the Caribbean Main Theme 
5. O Canada (Canadian National Anthem)

## Circuit Drawing: 

![circuit drawing](https://user-images.githubusercontent.com/29009445/29200997-2b7ee5f4-7e28-11e7-8d6e-a9bf3de054d5.png)



Demonstration of the JukeBox in action: https://www.youtube.com/watch?v=ge897hgvxpQ 

Note: JukeBox.ino is the main file and contains the setup() and loop() functions





