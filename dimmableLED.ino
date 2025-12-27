int potPin = A3;
int greenPin = 6;
int potVal;
float LEDVal;

void setup() {
  pinMode(potPin,INPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  potVal = analogRead (potPin);
  LEDVal = 255./1023. * potVal;
  analogWrite (greenPin,LEDVal);
  Serial.println (LEDVal);
}
