int led_verde=10;
int led_amarelo=9;
int led_vermelho=8;
void setup() {
 pinMode(led_verde,OUTPUT);
 pinMode(led_amarelo,OUTPUT);
 pinMode(led_vermelho,OUTPUT);
}
void loop() 
{
  digitalWrite(led_verde,HIGH);
  delay(3000);
  digitalWrite(led_verde,LOW);
  delay(500);
  digitalWrite(led_amarelo,HIGH);
  delay(800);
  digitalWrite(led_amarelo,LOW);
  delay(800);
  digitalWrite(led_amarelo,HIGH);
  delay(800);
  digitalWrite(led_amarelo,LOW);
  delay(800);
  digitalWrite(led_amarelo,HIGH);
  delay(800);
  digitalWrite(led_amarelo,LOW);
  delay(200);
  digitalWrite(led_vermelho,HIGH);
  delay(3000);
  digitalWrite(led_vermelho,LOW);
 
}
