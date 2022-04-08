//Napisać program, który po wciśnięciu przycisku co 200ms zacznie zapalać diody. Jeśli
//przycisk zostanie przyciśnięty na czas mniejszy niż 200ms powinna palić się jedna dioda. Jeśli
//czas będzie większy od 200ms, ale mniejszy od 400ms zapalone mają być dwie diody itd.
//Wykorzystać EXTI i przerwania timera.



#include <TimerOne.h>
#include <PinChangeInterruptSettings.h>
#include <PinChangeInterruptPins.h>
#include <PinChangeInterruptBoards.h>
#include <PinChangeInterrupt.h>

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

int S1 = A1;

int C1 = 0;

void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);

	Timer1.initialize(100000);
	Timer1.attachInterrupt(sprawdzenie);

	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	digitalWrite(led3, HIGH);
	digitalWrite(led4, HIGH);

}


void sprawdzenie()
{
	if (digitalRead(S1) == LOW)
	{
		C1++;
		if (C1 < 2)
		{
			digitalWrite(led1, LOW);
		}
		if (C1 > 2 && C1 < 4)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, LOW);
		}
		if (C1 > 4 && C1 < 6)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, LOW);
			digitalWrite(led3, LOW);
		}
		if (C1 > 6 && C1 < 8)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, LOW);
			digitalWrite(led3, LOW);
			digitalWrite(led4, LOW);
		}
	}
	else
	{
		C1 = 0;
		digitalWrite(led1, HIGH);
		digitalWrite(led2, HIGH);
		digitalWrite(led3, HIGH);
		digitalWrite(led4, HIGH);
	}
}


void loop()
{
	
}
