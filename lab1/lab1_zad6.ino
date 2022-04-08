int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

int S1 = A1;

unsigned long czas = 0;
unsigned long czas1 = 0;
unsigned long czas2 = 0;
int T1 = 100;

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
		czas1 = czas;
		if (C1 == 0)
		{
			digitalWrite(led1, HIGH);
			digitalWrite(led2, HIGH);
			digitalWrite(led3, HIGH);
			digitalWrite(led4, HIGH);
		}
		if (C1 == 1)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, HIGH);
			digitalWrite(led3, HIGH);
			digitalWrite(led4, HIGH);
		}
		if (C1 == 2)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, LOW);
			digitalWrite(led3, HIGH);
			digitalWrite(led4, HIGH);
		}
		if (C1 == 3)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, LOW);
			digitalWrite(led3, LOW);
			digitalWrite(led4, HIGH);
		}
		if (C1 == 4)
		{
			digitalWrite(led1, LOW);
			digitalWrite(led2, LOW);
			digitalWrite(led3, LOW);
			digitalWrite(led4, LOW);
		}
	}

	if (czas - czas2 >= 150)
	{
		if (digitalRead(S1) == LOW)
		{
			C1++;
		}
		if (C1 > 4)
		{
			C1 = 0;
		}
		czas2 = czas;
		Serial.println(C1);
	}
}