int myPin = A2;
int readVal;
float V2;
int del = 500;
int redPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myPin);
  V2 = (5./1023.) * readVal;
  Serial.print ("Potentiometer voltage is ");
  Serial.println (V2);
  if (V2==5.0){
    digitalWrite(redPin, HIGH);
  } else {
    digitalWrite (redPin, LOW);
  }
  delay(del);
}
