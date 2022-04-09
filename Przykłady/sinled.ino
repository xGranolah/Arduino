#include <PinChangeInterruptSettings.h>
#include <PinChangeInterruptPins.h>
#include <PinChangeInterruptBoards.h>
#include <PinChangeInterrupt.h>
int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 6;
int led5 = 5;
int led6 = 3;

int S1 = A4;
int pot = A5;

int C1 = 0;
int C2 = 0;
int y = 0;
int y1 = 0;
int y2 = 0;
int y3 = 0;
int y4 = 0;
int y5 = 0;

float predkosc = 0.02;
int poziom = 255; //poziom światła max 255

unsigned long czas = 0;
unsigned long czas1 = 0;
unsigned long czas2 = 0;
unsigned long czas3 = 0;
int T1 = 10;
int T2 = 150;


void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
	pinMode(led5, OUTPUT);
	pinMode(led6, OUTPUT);
	pinMode(pot, INPUT);

	

	pinMode(S1, INPUT);

	attachPCINT(digitalPinToPCINT(A4), stan, RISING);

	Serial.begin(9600);

}

void sinT()
{
	czas = millis();
	if (czas - czas1 >= T1)
	{
		C1++;
		czas1 = czas;

	}
}

void blinksin()
{

	y = poziom * sin(predkosc * C1);
	y1 = poziom * sin(predkosc * C1 - 1);
	y2 = poziom * sin(predkosc * C1 - 2);
	y3 = poziom * sin(predkosc * C1 - 3);
	y4 = poziom * sin(predkosc * C1 - 4);
	y5 = poziom * sin(predkosc * C1 - 5);
	if (y < 0)
	{
		y = 0;
	}
	if (y1 < 0)
	{
		y1 = 0;
	}
	if (y2 < 0)
	{
		y2 = 0;
	}
	if (y3 < 0)
	{
		y3 = 0;
	}
	if (y4 < 0)
	{
		y4 = 0;
	}
	if (y5 < 0)
	{
		y5 = 0;
	}

	
	analogWrite(led1, y);
	analogWrite(led2, y1);
	analogWrite(led3, y2);
	analogWrite(led4, y3);
	analogWrite(led5, y4);
	analogWrite(led6, y5);
}

void stan()
{
	if (digitalRead(S1) == HIGH)
	{
		C2++;
	}
}

void predkoscled()
{
	if (C2 >= 3)
	{
		C2 = 0;
	}
	if (C2 == 1)
	{
		poziom = map(analogRead(pot), 0, 1023, 0, 255);
	}
	if (czas - czas3 >= 150)
	{
		czas3 = czas;
		if (C2 == 0)
		{
			predkosc = (analogRead(pot) / 1023.000) * 0.500;
		}
	}
	
}


void loop()
{
	if (czas - czas2 >= 1000)
	{
		czas2 = czas;
		Serial.print("Poziom swiatla: ");
		Serial.print(poziom);
		Serial.println();
		Serial.print("Predkosc: ");
		Serial.print(predkosc);
		Serial.println();
		Serial.print("Kanal: ");
		Serial.print(C2);
		Serial.println();
	}


	sinT();
	predkoscled();
	blinksin();
}
