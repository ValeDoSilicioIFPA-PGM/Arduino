#include <LiquidCrystal.h>
#include <Ultrasonic.h>
#define pinTrigger 14
#define pinEcho 15
Ultrasonic ultrassonic(pinTrigger, pinEcho);
LiquidCrystal lcd(2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
void setup() {
  // put your setup code here, to run once:
 /* pinMode (3, OUTPUT);
  pinMode(4, OUTPUT) ;
  pinMode (5, OUTPUT );
  */lcd.begin(16, 2);
}

void loop() {
  float cmMsec;
  long microsec = ultrassonic.timing();
  cmMsec = ultrassonic.convert(microsec, Ultrasonic::CM);

  lcd.print(cmMsec);
  delay(500);
  lcd.clear();
  /*if(cmMsec>20){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else if(cmMsec<=20 && cmMsec>10){
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
  }
  else{
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    
  }*/
   
}
