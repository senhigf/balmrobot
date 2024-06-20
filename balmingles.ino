// definição da ponte h
#define FontRightWheel_Foward  26 // branco
#define FrontRightWheel_Backwards  22 // marrom 
#define FrontLeftwheel_Foward 30 //azul
#define FrontLeftWheel_Backwards 24 // roxo
#define BackRightWheel_Foward 46 // vermelho
#define BackRightWheel_Backwards 48 // laranja
#define BackLeftWheel_Foward 50 // amarelo 
#define BackLeftWheel_Backwards 52 // verde
#define ENA 12 //frente esquerdo                           
#define ENB 11 //frente direito 
#define ENC 10 //tras esquerdo (ENB)
#define END 9 //tras direito (ENA) 

// definição dos sensores
#define sensorD A2 // roxo
#define sensorCD A1 // azul 
#define sensorCE A3 // cinza
#define sensorE A0 // verde
// the setup function runs once when you press reset or power the board

int sleft, scenterleft, scenterright, sright;
 int white = 200;
 int black = 850;


int propA = 0;
int propB = 0;
int propC = 0;
int propD = 0;



void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(FontRightWheel_Foward, OUTPUT);
  pinMode(FrontRightWheel_Backwards, OUTPUT);
  pinMode(FrontLeftwheel_Foward, OUTPUT);
  pinMode(FrontLeftWheel_Backwards, OUTPUT);
  pinMode(BackRightWheel_Foward, OUTPUT);
  pinMode(BackRightWheel_Backwards, OUTPUT);
  pinMode(BackLeftWheel_Foward, OUTPUT);
  pinMode(BackLeftWheel_Backwards, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ENC, OUTPUT);
  pinMode(END, OUTPUT);

  pinMode(sensorD, INPUT);
  pinMode(sensorCD, INPUT);
  pinMode(sensorCE, INPUT);
  pinMode(sensorE, INPUT);
  
}



 
void loop() {
  linha();
  lerSensores();
 mostrarSensores();
    
delay(500);
}
 /*
 void loop() {
// lerSensores();
// mostrarSensores();*/
// HIGH + HIGH = quando os dois forem pretos o robo continua a andar 
// LOW + LOW = quando os dois forem brancos o robo continua a andar 
