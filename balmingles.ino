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
#define sensorD 2 // roxo
#define sensorCD 1 // azul 
#define sensorCE 3 // cinza
#define sensorE 0 // verde
// the setup function runs once when you press reset or power the board
int sleft, scenterleft, scenterright, sright;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(115200);
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

 int white = 150;
 int black = 250;

 
void loop() {
 lerSensores();
/*
 Serial.print(sleft);
  Serial.print(" - ");
  Serial.print(scenterleft);
  Serial.print(" - ");
  Serial.print(scenterright);
  Serial.print(" - ");
  Serial.println(sright);
*/

  if (scenterleft <white  && scenterright <white && sleft <white  && sright <white ) {
      foward();
  }
  if (scenterleft >black && scenterright <black && sleft >black && sright >black) {
      foward();
  }
  if (scenterleft >black && scenterright <white && sleft <white  && sright <white ) {
      LeftCrabWalk();
  }
  if (scenterleft <white && scenterright >black && sleft <white  && sright <white ) {
      RightCrabWalk();
  }
  /*if (scenterleft >black && sleft >black && sright <white ) {
    LeftSpinningFast();
  }
  if (scenterleft <white  && sleft <white  && sright >black) {
    RightSpinningFast();
  }*/
  else {
    foward();
    }

}

void lerSensores(){
  sleft = analogRead(sensorE);
 // delay(10);
  scenterleft = analogRead(sensorCE);
 /// delay(10);
  scenterright  = analogRead(sensorCD);
 ///// delay(10);
  sright = analogRead(sensorD);
 ///////// delay(10);
}
/*
void loop() {
lerSensores();
mostrarSensores();*/
// HIGH + HIGH = quando os dois forem pretos o robo continua a andar 
// LOW + LOW = quando os dois forem brancos o robo continua a andar 

