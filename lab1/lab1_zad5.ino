int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

int S1 = A1;

unsigned long czas = 0;
unsigned long czas1 = 0;
unsigned long czas2 = 0;
int T1 = 250;

int C1 = 0;

bool stan = HIGH;


void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);

	pinMode(S1, INPUT);

	Serial.begin(9600);

}


void loop()
{
	czas = millis();
	if (czas - czas1 >= T1)
	{
		digitalWrite(led1, stan);
		digitalWrite(led2, stan);
		digitalWrite(led3, stan);
		digitalWrite(led4, stan);
		stan = !stan;

		czas1 = czas;
	}

	if (czas - czas2 >= 150)
	{
		if (digitalRead(S1) == LOW)
		{
			T1 = T1 + 250;
		}
		if (T1 > 1000)
		{
			T1 = 250;
		}
		czas2 = czas;
		Serial.println(T1);
	}
}
