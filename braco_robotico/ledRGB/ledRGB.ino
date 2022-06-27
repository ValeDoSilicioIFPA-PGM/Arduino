#define ledVermelho 6;
#define ledVerde 10;
#define ledAzul 9;

#define potVermelho A0;
#define potVerde A1;
#define potAzul A2;

int valorPot0;
int valorPot1;
int valorPot2;

//float divisionVerm;
//float divisionVerd;
//float divisionAzul;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  
//  Serial.begin(9600);
}
void loop() {
  v
   
  //float Constante = (float) 255/1023;
  
  //valorsensor0 = analogRead(potVermelho);
  //valorsensor1 = analogRead(potVerde);
  //valorsensor2 = analogRead(potAzul);
   
  //divisionVerm = Constante *  valorsensor0;
  //divisionVerd = Constante *  valorsensor1;
  //divisionAzul = Constante *  valorsensor2;

  //color(divisionVerm, divisionVerd, divisionAzul);

  //valorsensor0 = map(valorsensor0, 0, 1023, 0, 255);
//  valorsensor1 = map(valorsensor1, 0, 1023, 0, 255);
  //valorsensor2 = map(valorsensor2, 0, 1023, 0, 255);

  //analogWrite(ledVermelho, valorsensor0);
  //analogWrite(ledVerde, valorsensor1);
  //analogWrite(ledAzul, valorsensor2);
}

//void color(int vermelho, int verde, int azul) {
  //analogWrite(ledVermelho, 255-vermelho);
  //analogWrite(ledVerde, 255-verde);
  //analogWrite(ledAzul, 255-azul);
//}
