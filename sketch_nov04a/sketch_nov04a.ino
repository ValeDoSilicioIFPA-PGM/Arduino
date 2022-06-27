void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);
delay(5000);

digitalWrite(7, LOW);
delay(2000);

digitalWrite(8, HIGH);
delay(5000);

digitalWrite(8, LOW);
delay(2000);

digitalWrite(9, HIGH);
delay(5000);

digitalWrite(9, LOW);
delay(2000);

digitalWrite(10, HIGH);
delay(5000);

digitalWrite(10, LOW);
delay(2000);
}
