
int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 6;
int led5 = 5;
int led6 = 3;

int S1 = 2;

int C1 = 0;
int y = 0;
int y1 = 0;
int y2 = 0;
int y3 = 0;
int y4 = 0;
int y5 = 0;

double predkosc = 0.25;

unsigned long czas = 0;
unsigned long czas1 = 0;
int T1 = 10;


void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
	pinMode(led5, OUTPUT);
	pinMode(led6, OUTPUT);

	pinMode(S1, INPUT);

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
	y = 255 * sin(predkosc * C1);
	y1 = 255 * sin(predkosc * C1 - 1);
	y2 = 255 * sin(predkosc * C1 - 2);
	y3 = 255 * sin(predkosc * C1 - 3);
	y4 = 255 * sin(predkosc * C1 - 4);
	y5 = 255 * sin(predkosc * C1 - 5);
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

	Serial.println(y);
	analogWrite(led1, y);
	analogWrite(led2, y1);
	analogWrite(led3, y2);
	analogWrite(led4, y3);
	analogWrite(led5, y4);
	analogWrite(led6, y5);
}


void loop()
{
	sinT();
	blinksin();
}
