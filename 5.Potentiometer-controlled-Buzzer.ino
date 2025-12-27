int buzzPin = 8;
int potPin = A3;
int potVal;

void setup() {
  // put your setup code here, to run once:
  pinMode (buzzPin,OUTPUT);
  pinMode (potPin, INPUT);
  Serial.begin (9600);
}

void loop() {
  potVal = analogRead (potPin);
  Serial.println (potVal);
  if (potVal > 1000){
    digitalWrite (buzzPin, HIGH);
    delay (300);
    digitalWrite (buzzPin, LOW);
  }
}
