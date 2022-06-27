int valorx = 0;
int valory = 0;
int valorsw = 0;
int ledesq = 3;
int ledsup = 6;
int leddir = 5;
int ledinf = 4;
int ledcentro = 8;

 void setup() 
 {  
 pinMode(2, INPUT);
 Serial.begin(9600);  
 pinMode(ledesq, OUTPUT);  
 pinMode(ledsup, OUTPUT);  
 pinMode(leddir, OUTPUT);  
 pinMode(ledinf, OUTPUT);  
 pinMode(ledcentro, OUTPUT);  
 }  
   
 void loop() 
 {   
 digitalWrite(ledesq, LOW);  
 digitalWrite(ledsup, LOW);  
 digitalWrite(leddir, LOW);  
 digitalWrite(ledinf, LOW);  
 digitalWrite(ledcentro, LOW);  
   
 
 valorx = analogRead(0);   
   

 Serial.print("X:");  
 Serial.print(valorx, DEC);  
   

 if (valorx > -1 & valorx <200)  
 {  
  digitalWrite(ledinf, HIGH);   
 }  
 if (valorx > 700 & valorx <1025)  
 {  
  digitalWrite(ledsup, HIGH);  
 }  
     
 valory= analogRead(1);  
  
 Serial.print(" | Y:");  
 Serial.print(valory, DEC);  
     
 if (valory > -1 & valory <200)  
 {  
  digitalWrite(leddir, HIGH);   
 }  
 if (valory > 700 & valory <1025)  
 {  
  digitalWrite(ledesq, HIGH); 
 }  
    
 valorz = digitalRead(2);  
    
 Serial.print(" | Z: ");  
 Serial.println(valorz, DEC);  
    
 if (valorz != 1 )  
 {  
  digitalWrite(ledcentro, HIGH);  
 }  
  }
