#include <PinChangeInterrupt.h>

int led1 = 13;

int S1 = A1;

void setup() 
{
	pinMode(led1, OUTPUT);
	pinMode(S1, INPUT);

	attachPCINT(digitalPinToPCINT(S1), on_led, CHANGE);
	digitalWrite(led1, HIGH);
}

void on_led() 
{
	digitalWrite(led1, !digitalRead(led1));
}

void loop() 
{


}
