int potPin=A3;
int greenPin=10;
int potVal;
int LEDVal;
int waitTime=750;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potVal=analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(greenPin, LEDVal);
  delay(waitTime);
}