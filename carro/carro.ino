
enum estado {ligado, desligado, re};

// clase para os motores
class motor{
  public:
    estado estado_motor = desligado;
    int pino_1;
    int pino_2;
// metodo para o motor ir para frente
  void seguir(){
    digitalWrite(pino_1,HIGH);
    digitalWrite(pino_2,LOW);
    }
// metodo para o motor parar
  void parar(){
    digitalWrite(pino_1,LOW);
    digitalWrite(pino_2,LOW);
    }
// metodo para o motor ir para tras
  void voltar(){
    digitalWrite(pino_1,LOW);
    digitalWrite(pino_2,HIGH);
    }
// ligar?
  void ligar(){
    switch(estado_motor){
      case estado::ligado:
        seguir();
      case estado::desligado:
        parar();
      case estado::re:
        voltar();
      }
    }
  };


class censor{
  
  public:
    int pino_sensor;
    int valor_do_sensor;
    
  int olhar(){
    return analogRead(pino_sensor);
    }
  };
void setup() {
  Serial.begin(9600);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);


    
}

void loop() {
  delay(1000);
  
  // instanciando os motores
  motor motor_E; motor_E.pino_1 = 2; motor_E.pino_2 = 3;
  motor motor_D; motor_D.pino_1 = 4; motor_D.pino_2 = 5;
    
    // instanciando os censores
  censor sensor_E; sensor_E.pino_sensor = A0;
  censor sensor_C; sensor_C.pino_sensor = A1;
  censor sensor_D; sensor_D.pino_sensor = A2;
}
