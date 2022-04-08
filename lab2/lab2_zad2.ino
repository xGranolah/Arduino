//Napisać program zapalający 4 diody na 200ms co 1000ms. Do opóźnienia zastosować
//timer.


#include <TimerOne.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

volatile unsigned long C1 = 0;

void setup() {

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);

	Timer1.initialize(200000);
	Timer1.attachInterrupt(miganieLED);

}

void miganieLED()
{
	if (C1 == 5) {
		digitalWrite(led1, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		C1 = 0;
	}
	else {
		digitalWrite(led1, HIGH);
		digitalWrite(led2, HIGH);
		digitalWrite(led3, HIGH);
		digitalWrite(led4, HIGH);
		C1++;
	}
}

void loop() 
{


}
