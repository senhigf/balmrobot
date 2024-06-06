void teste_movimentos(){
  foward();
  delay(1000);
  backwards();
  delay(1000);
  RightTurning();
  delay(1000);
  LeftTurning();
  delay(1000);
}

void CrabWalk(){
  foward();
  delay(1000);
  LeftCrabWalk();
  delay(1000);
  backwards();
  delay(1000);
  RightCrabWalk();
}

void mostrarSensores(){
  Serial.print(sleft);
  Serial.print(" - ");
  Serial.print(scenterleft);
  Serial.print(" - ");
  Serial.print(scenterright);
  Serial.print(" - ");
  Serial.println(sright);
}

