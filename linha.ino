
/*
if (scenterleft <white  && scenterright <white && sleft <white  && sright <white ) {
       foward();
        Serial.println("tudo branco");
   }
   else if (scenterleft >black && scenterright >black && sleft >black && sright >black) {
       foward();
     Serial.println("tudo preto");

   }
   else if (scenterleft >black && scenterright >black && sleft <white && sright <white) {
       foward(); 
    Serial.println("preto no meio");

   }
   else if (scenterleft >black&& scenterright >black && sleft <white && sright <white ) {
       RightDiagonal();
     Serial.println("preto esquerda");
   }
   
   else if (scenterleft >black && scenterright <white && sleft <white  && sright <white ) {
       LeftDiagonal();
      Serial.println("preto direita");

   }
   else if (scenterleft >black && scenterright >black && sleft <white && sright >black ){ 
      RightSpinningSlow();
   Serial.println("preto centro direita");

   }
   else if (scenterleft >black && scenterright >black && sleft >black && sright <white ) {
      LeftSpinningSlow();
  Serial.println("direita branco");

   }
   else if (scenterleft <white && scenterright >black && sleft <white && sright >black ) {
      RightDiagonal();
   Serial.println("esquerda esquerda branco");

   }
   else if (scenterleft <white && scenterright >black && sleft <white && sright >black ) {
      LeftDiagonal();        
     Serial.println("direita branco todos");

   }
   else{
    foward();
     Serial.println("else");
   }*/

   void linha(){
    lerSensores();
    if (sleft <=white && scenterleft <=white && scenterright <=white && sright <=white){
      foward();
      Serial.println ("tudo branco");
    }
      else if (sleft >=black && scenterleft >=black && scenterright >=black && sright >=black){

        foward();
        Serial.println ("tudo preto");
      }
      else if (sleft <=white && scenterleft >=black && scenterright >=black && sright <=white){
        int distanciaSensorEsquerdo = scenterleft - black;
        int distanciaSensorDireito = scenterright - black;
        int ajusteEsquerdo = map(distanciaSensorEsquerdo,100,0,white,black);
        int ajusteDireito = map(distanciaSensorDireito,100,0,white,black);
        propA = ajusteDireito/10;
        propB = ajusteEsquerdo/10;
        propC = ajusteEsquerdo/10;
        propD = ajusteDireito/10;


        Serial.print("AjustEsquerdo: ");
        Serial.print(ajusteEsquerdo);
        Serial.print(" - AjustDireito: ");
        Serial.println(ajusteDireito);
        foward();
        Serial.println ("preto no centro");
      }
      else if (sleft <=white && scenterleft <=white && scenterright >=black && sright <=white){
        RightDiagonal();
        Serial.println ("preto centro direita");
      }
      else if (sleft <=white && scenterleft >=black && scenterright <=white && sright <=white){
        LeftDiagonal();
        Serial.println ("preto centro esquerda");
      }
      else if (sleft <=white && scenterleft >=black && scenterright >=black && sright >=black){
        RightSpinningSlow();
        Serial.println ("branco esquerda");
      }
      else if (sleft >=black && scenterleft >=black && scenterright >=black && sright <=white){
        LeftSpinningSlow();
        Serial.println ("branco direita");
      }
      else if (sleft <=white && scenterleft <=white && scenterright >=black && sright >=black){
        RightDiagonal();
        Serial.println ("preto centrodireita & direita");
      }
      else if (sleft >=black && scenterleft >=black && scenterright <=white && sright <=white){
        LeftDiagonal();
        Serial.println ("preto centroesquerda esquerda");
      }
        else {    
       foward();
       Serial.println ("else");

}
   }

