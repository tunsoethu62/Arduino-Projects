int first = 8;
int second = 9;
int third = 10;
int fourth = 11;
int delay1 = 2000;


void setup() {
  // put your setup code here, to run once:
  pinMode (first,OUTPUT);
  pinMode (second, OUTPUT);
  pinMode (third, OUTPUT);
  pinMode (fourth, OUTPUT);

}

void loop() {
  //1
  digitalWrite(first, HIGH);
  digitalWrite(second, LOW);
  digitalWrite(third,LOW);
  digitalWrite(fourth,LOW);

  delay (delay1);

  // 2
  digitalWrite(first, LOW);
  digitalWrite(second, HIGH);
  digitalWrite(third,LOW);
  digitalWrite(fourth,LOW);

  delay (delay1);

  //3
  digitalWrite(first, HIGH);
  digitalWrite(second, HIGH);
  digitalWrite(third,LOW);
  digitalWrite(fourth,LOW);

  delay (delay1);

  //4
  digitalWrite(first, LOW);
  digitalWrite(second, LOW);
  digitalWrite(third,HIGH);
  digitalWrite(fourth,LOW);

  delay (delay1);

  //5
  digitalWrite(first, HIGH);
  digitalWrite(second, LOW);
  digitalWrite(third,HIGH);
  digitalWrite(fourth,LOW);

  delay (delay1);

  //6
  digitalWrite(first, LOW);
  digitalWrite(second, HIGH);
  digitalWrite(third,HIGH);
  digitalWrite(fourth,LOW);

  delay (delay1);

  //7
  digitalWrite(first, HIGH);
  digitalWrite(second, HIGH);
  digitalWrite(third,HIGH);
  digitalWrite(fourth,LOW);

  delay (delay1);

  //8
  digitalWrite(first, LOW);
  digitalWrite(second, LOW);
  digitalWrite(third,LOW);
  digitalWrite(fourth,HIGH);

  delay (delay1);

  //9
  digitalWrite(first, HIGH);
  digitalWrite(second, LOW);
  digitalWrite(third,LOW);
  digitalWrite(fourth,HIGH);

  delay (delay1);

  //10
  digitalWrite(first, LOW);
  digitalWrite(second, HIGH);
  digitalWrite(third,LOW);
  digitalWrite(fourth,HIGH);

  delay (delay1);
}
