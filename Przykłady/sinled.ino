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

int S1 = A4; // przycisk
int pot = A5; // potencjometr 10-200k

int C1 = 0;
int C2 = 0;
int tryb = 0;
int y = 0;
int y1 = 0;
int y2 = 0;
int y3 = 0;
int y4 = 0;
int y5 = 0;


float predkosc = 0.00;
int poziom = 255; //poziom światła max 255

unsigned long czas = 0;
unsigned long czas1 = 0;
unsigned long czas2 = 0;
unsigned long czas3 = 0;
unsigned long czas4 = 0;
unsigned long czas5 = 0;
int T1 = 5;
int T2 = 150;
int T3 = 150;


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
	y3 = poziom * sin(predkosc * C1 - 2);
	y4 = poziom * sin(predkosc * C1 - 1);
	y5 = poziom * sin(predkosc * C1 );
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
void blink1()
{

	y = poziom * sin(predkosc * C1 - 2);
	y1 = poziom * sin(predkosc * C1 - 1);
	y2 = poziom * sin(predkosc * C1);
	y3 = poziom * sin(predkosc * C1);
	y4 = poziom * sin(predkosc * C1 - 1);
	y5 = poziom * sin(predkosc * C1 - 2);
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
void blink2()
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
void blink3()
{

	y = poziom * sin(predkosc * C1);
	y1 = poziom * sin(predkosc * C1 - 3);
	y2 = poziom * sin(predkosc * C1 - 5);
	y3 = poziom * sin(predkosc * C1 - 7);
	y4 = poziom * sin(predkosc * C1 - 9);
	y5 = poziom * sin(predkosc * C1 - 12);
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
void blink4()
{

	y = poziom * sin(predkosc * C1);
	y1 = poziom * sin(predkosc * C1 - 2);
	y2 = poziom * sin(predkosc * C1 - 4);
	y3 = poziom * sin(predkosc * C1 - 6);
	y4 = poziom * sin(predkosc * C1 - 8);
	y5 = poziom * sin(predkosc * C1 - 10);
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
void blink5()
{

	y = poziom * sin(predkosc * C1);
	y1 = poziom * sin(predkosc * C1);
	y2 = poziom * sin(predkosc * C1);
	y3 = poziom * sin(predkosc * C1);
	y4 = poziom * sin(predkosc * C1);
	y5 = poziom * sin(predkosc * C1);
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
void blink6()
{

	y = poziom * sin(predkosc * 0.01 * C1 * C1);
	y1 = poziom * sin(predkosc * 0.01 * C1 * C1 - 1);
	y2 = poziom * sin(predkosc * 0.01 * C1 * C1 - 2);
	y3 = poziom * sin(predkosc * 0.01 * C1 * C1 - 3);
	y4 = poziom * sin(predkosc * 0.01 * C1 * C1 - 4);
	y5 = poziom * sin(predkosc * 0.01 * C1 * C1 - 5);
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
void blink7()
{

	y = poziom * sin(predkosc * 0.0001 * C1 * C1 * C1);
	y1 = poziom * sin(predkosc * 0.0001 * C1 * C1 * C1 - 1);
	y2 = poziom * sin(predkosc * 0.0001 * C1 * C1 * C1 - 2);
	y3 = poziom * sin(predkosc * 0.0001 * C1 * C1 * C1 - 3);
	y4 = poziom * sin(predkosc * 0.0001 * C1 * C1 * C1 - 4);
	y5 = poziom * sin(predkosc * 0.0001 * C1 * C1 * C1 - 5);
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

	if (czas - czas4 >= T3)
	{
		if (digitalRead(S1) == HIGH)
		{
			C2++;
		}
		czas4 = czas;

	}
}

void menu()
{
	if (C2 >= 4)
	{
		C2 = 0;
	}
	if (C2 == 1)
	{
		poziom = map(analogRead(pot), 0, 1023, 0, 255);
	}
	if (C2 == 2)
	{
		tryb = map(analogRead(pot), 0, 1023, 0, 8);
	}
	if (czas - czas3 >= 150)
	{
		czas3 = czas;
		if (C2 == 0)
		{
			predkosc = map(analogRead(pot), 0, 1023, 0, 10) * 0.01;
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
		Serial.print("Wartosc: ");
		Serial.print(y);
		Serial.println();
		Serial.print("Tryb: ");
		Serial.print(tryb);
		Serial.println();
	}


	sinT();
	menu();
	if (tryb == 1)
	{
		blinksin();
	}
	if (tryb == 2)
	{
		blink1();
	}
	if (tryb == 3)
	{
		blink2();
	}
	if (tryb == 4)
	{
		blink3();
	}
	if (tryb == 5)
	{
		blink4();
	}
	if (tryb == 6)
	{
		blink5();
	}
	if (tryb == 7)
	{
		blink6();
	}
	if (tryb == 8)
	{
		blink7();
	}
	if (tryb == 0)
	{
		
	}

	


}
