 /*void teste_movimentos(){
   foward();
   delay(1000);
   backwards();
   delay(1000);
   LeftDiagonal();
   delay(1000);
   RightDiagonal();
   delay(1000);
 }*/

// void CrabWalk(){
//   foward();
//   delay(1000);
//   LeftCrabWalk();
//   delay(1000);
//   backwards();
//   delay(1000);
//   RightCrabWalk();
// }

 void mostrarSensores(){
   Serial.print(sleft);
   Serial.print(" - ");
   Serial.print(scenterleft);
   Serial.print(" - ");
   Serial.print(scenterright);
   Serial.print(" - ");
   Serial.println(sright);
 }
   void lerSensores(){
   sleft = analogRead(sensorE);
   delay(10);
   scenterleft = analogRead(sensorCE);
   delay(10);
   scenterright  = analogRead(sensorCD);
   delay(10);
   sright = analogRead(sensorD);
   delay(10);
 }
