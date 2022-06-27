#include <Ultrasonic.h>

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
digitalWrite(13, LOW);
delay(100);

digitalWrite(13, LOW);
digitalWrite(13, HIGH);

}
