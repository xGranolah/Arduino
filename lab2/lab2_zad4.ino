//Należy napisać program, który będzie zmieniał stan LED na przeciwny za każdym razem,
//gdy przycisk zostanie puszczony. Dodatkowo drugi LED ma migać co 2s. Wykorzystać EXTI
//i przerwania timera.


#include <TimerOne.h>
#include <PinChangeInterrupt.h>

int led1 = 13;
int led2 = 12;

int S1 = A1;

void setup() {
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(S1, INPUT);
	Timer1.initialize(2000000);
	Timer1.attachInterrupt(miganie);
	attachPCINT(digitalPinToPCINT(S1), on_led, RISING);
}

void miganie()
{
	digitalWrite(led1, !digitalRead(led1));
}

void on_led()
{
	digitalWrite(led2, !digitalRead(led2));
}

void loop() {


}
