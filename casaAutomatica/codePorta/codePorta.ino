
#include <Servo.h>
#include <Ultrasonic.h>

#define TRIGGER_PIN  6
#define ECHO_PIN     7

Servo myservo;
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

int pos = 0;
int bips = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(3);   // Servo Motor.
  pinMode(11, OUTPUT); // LED Vermelho.
  pinMode(12, OUTPUT); // LED Verde.
  pinMode(13, OUTPUT); // Piezo.
}

void loop() {
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  Serial.print("MS: ");
  Serial.print(microsec);
  Serial.print(", CM: ");
  Serial.print(cmMsec);
  Serial.print(", IN: ");
  Serial.println(inMsec);
  //delay(1000);
  
  if (cmMsec <= 10) {
    if (pos == 0) {
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        delay(15);
      }
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      delay(1000);
      bips += 1;
      pos = 180;
      if (bips == 1) {
        tone(13, 500, 500);
        delay(500);
      } else {
        digitalWrite(13, LOW);
      }
    }
  } else {
    if (pos == 180) {
      delay(500);
      for (pos = 180; pos >= 0; pos -= 1) {
        myservo.write(pos);
        delay(15);
      }
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      delay(500);
      bips += 1;
      pos = 0;
      if (bips == 2) {
        tone(13, 500, 300);
        delay(700); 
      } else {
        digitalWrite(13, LOW);
      }
      bips = 0;
    }
    digitalWrite(11, HIGH);
  }
}
