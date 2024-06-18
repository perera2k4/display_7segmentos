//Codificador Binário Decimal 7 segmentos
bool A=0;
bool B=0;
bool C=0;
bool D=0;

void setup() {
 pinMode(13,OUTPUT);//Sa
 pinMode(12,OUTPUT);//Sb
 pinMode(11,OUTPUT);//Sc
 pinMode(10,OUTPUT);//Sd
 pinMode(9,OUTPUT);//Se
 pinMode(8,OUTPUT);//Sf
 pinMode(7,OUTPUT);//Sg
 pinMode(3,INPUT);//entrada D
 pinMode(4,INPUT);//entrada C
 pinMode(5,INPUT);//entrada B
 pinMode(6,INPUT);//entrada A
}

void loop() {
  A=digitalRead(6);
  B=digitalRead(5);
  C=digitalRead(4);
  D=digitalRead(3);
  
  // Modulo ZERO
  if (!A*!B*!C*!D == 1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,1);
    digitalWrite(8,1);
    digitalWrite(7,0);
  }
  //MODULO um
  if (!A*!B*!C*D == 1){
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);
    digitalWrite(9,0);
    digitalWrite(8,0);
    digitalWrite(7,0);
  }
  //modulo dois
  if (!A*!B*C*!D == 1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,0);
    digitalWrite(10,1);
    digitalWrite(9,1);
    digitalWrite(8,0);
    digitalWrite(7,1);
  }
  //modulo tres
  if (!A*!B*C*D == 1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,0);
    digitalWrite(8,0);
    digitalWrite(7,1);
  }
  //modulo quatro
  if (!A*B*!C*!D == 1){
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);
    digitalWrite(9,0);
    digitalWrite(8,1);
    digitalWrite(7,1);
  }
  //modulo cinco
  if (!A*B*!C*D == 1){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,0);
    digitalWrite(8,1);
    digitalWrite(7,1);
  }
  //modulo seis
  if (!A*B*C*!D == 1){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,1);
    digitalWrite(8,1);
    digitalWrite(7,1);
  }
  //modulo sete
  if (!A*B*C*D == 1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);
    digitalWrite(9,0);
    digitalWrite(8,0);
    digitalWrite(7,0);
  }
  //modulo oito
  if (A*!B*!C*!D == 1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,1);
    digitalWrite(8,1);
    digitalWrite(7,1);
  }
  //modulo nove
  if (A*!B*!C*D == 1){
    digitalWrite(13,1);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,1);
    digitalWrite(9,0);
    digitalWrite(8,1);
    digitalWrite(7,1);
  }
  //demais casos A,B,C,D,E,F
  else{
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
    digitalWrite(9,0);
    digitalWrite(8,0);
    digitalWrite(8,0);
    digitalWrite(7,0);
  }
}
