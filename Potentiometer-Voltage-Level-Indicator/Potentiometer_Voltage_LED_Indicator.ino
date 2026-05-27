int greenPin=3;
int yellowPin=5;
int redPin=6;
int potPin=A3;
int readVal;
float Volt;
int waitTime=300;

void setup() {
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(redPin,OUTPUT),
  pinMode(potPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  readVal=analogRead(potPin);
  Volt=(5./1023.)*readVal;
  Serial.println(Volt);
  if (Volt < 3.) {
    digitalWrite(greenPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
  }
  if (Volt >= 3. && Volt <= 4.) {
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
  }
  if (Volt > 4.) {
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,HIGH);
  }
  delay(waitTime);
}