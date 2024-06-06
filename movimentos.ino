#define speed 80
#define ajusteA 15
#define ajusteB 10
#define ajusteC 0
#define ajusteD 1


//Parar
void stop(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

}

//Frente
void foward() {

  digitalWrite(FontRightWheel_Foward, HIGH);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, HIGH);
  digitalWrite(BackRightWheel_Foward, HIGH);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, HIGH); 

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);  
}
//Trás
void backwards() {
  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards,HIGH );   
  digitalWrite(FrontLeftwheel_Foward, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, HIGH);   
  digitalWrite(BackLeftWheel_Foward, LOW);   
  digitalWrite(BackLeftWheel_Backwards, HIGH);   

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

//Lados
void RightTurning() {
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

void LeftTurning() {
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

//Lados diagonal
void LeftDiagonally(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);

}

void RightDiagonally(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);

}
// giro 360 rápido
void LeftSpinningFast(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
  
}

void RightSpinningFast(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
  
}
// giro 360 lento
void LeftSpinningSlow(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
  
}

void RightSpinningSlow(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

// caranguejo
void LeftCrabWalk(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed - ajusteA);
  analogWrite(ENC, speed);
  analogWrite(END, speed + ajusteD);
}

void RightCrabWalk(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage HIGH
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed - ajusteA);
  analogWrite(ENC, speed);
  analogWrite(END, speed + ajusteD);
}
