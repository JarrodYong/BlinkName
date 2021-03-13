int led1 = D6;
int led2 = D7;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
//Letter J

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);


//Letter A

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);

// Letter R

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);

//Letter R

digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);

//Letter O

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);

//Letter D

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(650);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(350);

}