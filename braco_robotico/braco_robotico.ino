#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

int potenc01 = A0;
int val01;

int potenc02 = A1;
int val02;

int potenc03 = A2;
int val03;

void setup()
{
myservo1.attach(2);
myservo2.attach(3);
myservo3.attach(4);

}
void loop()
{
val01 = analogRead (potenc01);
val01 = map(val01,0,1023,0,180);
myservo1.write(val01);
//delay(10);
  
val02 = analogRead (potenc02);
val02 = map(val02,0,1023,0,180);
myservo2.write(val02);
//delay(10);
  
val03 = analogRead (potenc03);
val03 = map(val03,0,1023,0,180);
myservo3.write(val03);
//delay(10);
  

}
