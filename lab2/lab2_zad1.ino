#include <TimerOne.h>

int led1 = 13;

void setup() 
{
	Timer1.initialize(500000);
	Timer1.attachInterrupt(przerwanie);
	pinMode(led1, OUTPUT);

}

void przerwanie()
{
	digitalWrite(led1, !digitalRead(led1));
}

void loop() 
{


}
