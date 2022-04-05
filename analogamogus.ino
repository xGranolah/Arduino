
/*
 * Jak dojedziesz potencjometrem do 600 bedzie muzyczka i napis AMOGUS
 * Przycisk S1-A1 uruchamia muzyke i jest git
                       * ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣤⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀
                      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⠟⠉⠉⠉⠉⠉⠉⠉⠙⠻⢶⣄⠀⠀⠀⠀⠀
                      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣷⡀⠀⠀⠀
                      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡟⠀⣠⣶⠛⠛⠛⠛⠛⠛⠳⣦⡀⠀⠘⣿⡄⠀⠀
                      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠁⠀⢹⣿⣦⣀⣀⣀⣀⣀⣠⣼⡇⠀⠀⠸⣷⠀⠀
                      ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡏⠀⠀⠀⠉⠛⠿⠿⠿⠿⠛⠋⠁⠀⠀⠀⠀⣿⡄⣠
                      ⠀⠀⢀⣀⣀⣀⠀⠀⢠⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡇⠀
                      ⠿⠿⠟⠛⠛⠉⠀⠀⣸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀
                      ⠀⠀⠀⠀⠀⠀⠀⠀⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⠀
                      ⠀⠀⠀⠀⠀⠀⠀⢸⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⠀
                      ⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀
                      ⠀⠀⠀⠀⠀⠀⠀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀
                      ⠀⠀⠀⠀⠀⠀⢰⣿⠀⠀⠀⠀⣠⡶⠶⠿⠿⠿⠿⢷⣦⠀⠀⠀⠀⠀⠀⠀⣿⠀
                      ⠀⠀⣀⣀⣀⠀⣸⡇⠀⠀⠀⠀⣿⡀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⣿⠀
                      ⣠⡿⠛⠛⠛⠛⠻⠀⠀⠀⠀⠀⢸⣇⠀⠀⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⠀⠀⣿⠀
                      ⢻⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⡟⠀⠀⢀⣤⣤⣴⣿⠀⠀⠀⠀⠀⠀⠀⣿⠀
                      ⠈⠙⢷⣶⣦⣤⣤⣤⣴⣶⣾⠿⠛⠁⢀⣶⡟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡟⠀
                      ⢷⣶⣤⣀⠉⠉⠉⠉⠉⠄⠀⠀⠀⠀⠈⣿⣆⡀⠀⠀⠀⠀⠀⠀⢀⣠⣴⡾⠃⠀
                      ⠀⠈⠉⠛⠿⣶⣦⣄⣀⠀⠀⠀⠀⠀⠀⠈⠛⠻⢿⣿⣾⣿⡿⠿⠟⠋⠁⠀⠀⠀
 */





#include <TimerOne.h>
#include <Timers.h>
#include <Wire.h>
#include <MultiFuncShield.h>


float sygAn= A0;
float sygB;
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
const int buzzer = 3; 
int S1 = 15;
int S2 = 16;





void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(S1, INPUT);
pinMode(S2, INPUT);



Timer1.initialize();
MFS.initialize(&Timer1);    // initialize multi-function shield library
}



void loop() {
  // put your main code here, to run repeatedly:

  sygB=analogRead(sygAn);

  MFS.write(sygB);
  delay(100);
  if(sygB <100.0){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
  if(sygB >= 100.0){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
  if(sygB >= 200.0){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  }
  if(sygB >= 300.0){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
  }
  if(sygB >= 400.0){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
  if(sygB >= 600.0){
  tone(buzzer, 1046); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  MFS.write("amog");
  delay(250);
  tone(buzzer, 1244);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW); 
  MFS.write("  us");
  delay(250); 
  tone(buzzer, 1400); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  MFS.write("amog");
  delay(250); 
  tone(buzzer, 1510);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH); 
  MFS.write("  us");
  delay(250);
  tone(buzzer, 1400);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW); 
  MFS.write("amog");
  delay(250);
  tone(buzzer, 1244);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH); 
  MFS.write("  us");
  delay(250); 
  tone(buzzer, 1046);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW); 
 MFS.write("  us");
  delay(250); 
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 932);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW); 
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1174);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW); 
  MFS.write("  us");
  delay(125); 
  tone(buzzer, 1046);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH); 
  MFS.write("amog");
  delay(250);
  // end of first
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 780);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH); 
  MFS.write("  us");
  delay(250); 
  tone(buzzer, 525);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH); 
  MFS.write("amog");
  delay(250); 
  noTone(buzzer); 
  delay(250);
  //secont part
  tone(buzzer, 1046);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW); 
  MFS.write("  us");
  delay(250);
  tone(buzzer, 1244);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH); 
  MFS.write("amog");
  delay(250); 
  tone(buzzer, 1400); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(250); 
  tone(buzzer, 1510);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH); 
  MFS.write("amog");
  delay(250);
  tone(buzzer, 1400); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(250);
  tone(buzzer, 1244); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  MFS.write("amog");
  delay(250);
  tone(buzzer, 1400); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(250);
  noTone(buzzer); 
  delay(750);
  //fast part
  tone(buzzer, 1510); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1400); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(125);
  tone(buzzer, 1244); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1510); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(125);
  tone(buzzer, 1400);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH); 
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1244); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(125);
  tone(buzzer, 1510); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1400); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(125);
  tone(buzzer, 1244); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1510); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  MFS.write("  us");
  delay(125);
  tone(buzzer, 1400); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  MFS.write("amog");
  delay(125);
  tone(buzzer, 1244); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  MFS.write("  us");
  delay(125);
   tone(buzzer, 1510); 
   digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  MFS.write("amog");
  delay(125);
  noTone(buzzer); 
  delay(500);
  }
while(digitalRead(S1) == LOW){
  tone(buzzer, 1046); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250); 
  tone(buzzer, 1400); 
  delay(250); 
  tone(buzzer, 1510); 
  delay(250);
  tone(buzzer, 1400); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250); 
  tone(buzzer, 1046); 
  delay(250); 
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 932); 
  delay(125);
  tone(buzzer, 1174); 
  delay(125); 
  tone(buzzer, 1046); 
  delay(250);
  // end of first
  noTone(buzzer); 
  delay(500); 
  tone(buzzer, 780); 
  delay(250); 
  tone(buzzer, 525); 
  delay(250); 
  noTone(buzzer); 
  delay(250);
  //secont part
  tone(buzzer, 1046); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250); 
  tone(buzzer, 1400); 
  delay(250); 
  tone(buzzer, 1510); 
  delay(250);
  tone(buzzer, 1400); 
  delay(250);
  tone(buzzer, 1244); 
  delay(250);
  tone(buzzer, 1400); 
  delay(250);
  noTone(buzzer); 
  delay(750);
  //fast part
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
  tone(buzzer, 1510); 
  delay(125);
  tone(buzzer, 1400); 
  delay(125);
  tone(buzzer, 1244); 
  delay(125);
   tone(buzzer, 1510); 
  delay(125);
  noTone(buzzer); 
  delay(500);

 }
}
