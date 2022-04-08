
#include <PinChangeInterruptSettings.h>
#include <PinChangeInterruptPins.h>
#include <PinChangeInterruptBoards.h>
#include <PinChangeInterrupt.h>
int led1 = 13;
int led2 = 12;

int S1 = A1;

bool stan = HIGH;

int C1 = 0;

unsigned long czas = 0;
unsigned long czas1 = 0;
unsigned long czas2 = 0;

void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(S1, INPUT);

	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
}



void loop()
{

	czas = millis();
	if (czas - czas1 >= 1000)
	{
		digitalWrite(led2, stan);
		stan = !stan;
		czas1 = czas;
	}

	if (czas - czas2 >= 100)
	{
		if (digitalRead(S1) == LOW && C1 == 0)
		{
			digitalWrite(led1, LOW);
			C1 = 1;
		}
		else if(digitalRead(S1) == LOW && C1 == 1)
		{
			digitalWrite(led1, HIGH);
			C1 = 0;
		}

		czas2 = czas;
	}
}


