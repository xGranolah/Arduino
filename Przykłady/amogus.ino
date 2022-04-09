/*
#include <MultiFunctionShield.h>
*/
#include <MultiFunctionShield.h>
const int buzzer = 3; //buzzer to arduino pin 9
int S1 = 15;
int S2 = 16;
long randNumber;

void setup(){
  Serial.begin(9600);
  randomSeed(analogRead(0));
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);

  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250); 
  noTone(buzzer); 
  MFS.Display (randNumber);
  delay(500); 
  tone(buzzer, 932); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1174); 
  MFS.Display (randNumber);
  delay(125); 
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250);
  // end of first
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 780); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 525); 
  MFS.Display (randNumber);
  delay(250); 
  noTone(buzzer); 
  MFS.Display (randNumber);
  delay(250);
  //secont part
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250);
  noTone(buzzer); 
  MFS.Display (randNumber);
  delay(750);
  //fast part
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
   tone(buzzer, 1510); 
   MFS.Display (randNumber);
  delay(125);
  noTone(buzzer); 
  delay(500);
  
  
}

void loop(){
  randNumber = random(999);
  
 uint8_t i;
 MultiFunctionShield MFS;
 MFS.begin();
 MFS.Display (randNumber);
 delay(100);
 
 while(digitalRead(S1) == LOW){
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250); 
  noTone(buzzer); 
  MFS.Display (randNumber);
  delay(500); 
  tone(buzzer, 932); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1174); 
  MFS.Display (randNumber);
  delay(125); 
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250);
  // end of first
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 780); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 525); 
  MFS.Display (randNumber);
  delay(250); 
  noTone(buzzer); 
  MFS.Display (randNumber);
  delay(250);
  //secont part
  tone(buzzer, 1046); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250); 
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(250);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(250);
  noTone(buzzer); 
  MFS.Display (randNumber);
  delay(750);
  //fast part
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1510); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1400); 
  MFS.Display (randNumber);
  delay(125);
  tone(buzzer, 1244); 
  MFS.Display (randNumber);
  delay(125);
   tone(buzzer, 1510); 
   MFS.Display (randNumber);
  delay(125);
  noTone(buzzer); 
  delay(500);
  if(digitalRead(S2)==LOW){
    delay(350);
    break;
  }
 }
  
  
}
