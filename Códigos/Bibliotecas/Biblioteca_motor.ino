#ifndef motorbiblioteca
#define motorbiblioteca

#include "arduino.h"

class motor{
  public:
  //declaração de objeto
  motor(byte latch, byte shift, byte data);
  //declaração de métodos
  void frente();
  void re();
  void direita();
  void esquerda();

  private:
  //declaração de variavéis privadas
  int bin;
  byte latchpriv;
  byte shiftpriv;
  byte datapriv;
  void shifto(byte dataPin, byte clockPin, byte bitOrder, byte val);
}

//função construtiva
motor::motor(latch,shift,eo) {

  //declaração de variavéis encapsulamento equivalentes as variáveis do objeto
  latchpriv = latch;
  shiftpriv = shift;
  datapriv = data;

  //declaração de pinos
  pinMode(latchpriv,OUTPUT);
  pinMode(shiftpriv,OUTPUT);
  pinMode(datapriv,OUTPUT);
}

motor::frente(){
  bin;//binario
  digitalWrite(latchpriv,HIGH);

  for (i = 0; i < 8; i++)  {
  if (bitOrder == LSBFIRST) {
    digitalWrite(datapriv, bin & 1);
    bin >>= 1;
  } else {  
    digitalWrite(datapriv, (bin & 128) != 0);
    bin <<= 1;
  }
  digitalWrite(clockPin, HIGH);
  digitalWrite(clockPin, LOW);    
  }



 
  digitalWrite(latchpriv,LOW);
}


motor::re(){
  digitalWrite(latchpriv,HIGH);
  for (i = 0; i < 8; i++)  {
  if (bitOrder == LSBFIRST) {
    digitalWrite(datapriv, bin & 1);
    bin >>= 1;
  } else {  
    digitalWrite(datapriv, (bin & 128) != 0);
    bin <<= 1;
  }
  digitalWrite(clockPin, HIGH);
  digitalWrite(clockPin, LOW);    
  }
  digitalWrite(latchpriv,LOW);
}

motor::direita(){
  digitalWrite(latchpriv,HIGH);
  for (i = 0; i < 8; i++)  {
  if (bitOrder == LSBFIRST) {
    digitalWrite(datapriv, bin & 1);
    bin >>= 1;
  } else {  
    digitalWrite(datapriv, (bin & 128) != 0);
    bin <<= 1;
  }
  digitalWrite(latchpriv,LOW);
  digitalWrite(clockPin, HIGH);
  digitalWrite(clockPin, LOW);    
  }
  digitalWrite(latchpriv,LOW);
}
motor::esquerda(){
  digitalWrite(latchpriv,HIGH);
  for (i = 0; i < 8; i++)  {
  if (bitOrder == LSBFIRST) {
    digitalWrite(datapriv, bin & 1);
    bin >>= 1;
  } else {  
    digitalWrite(datapriv, (bin & 128) != 0);
    bin <<= 1;
  }
  digitalWrite(latchpriv,LOW);
  digitalWrite(clockPin, HIGH);
  digitalWrite(clockPin, LOW);    
  }
  digitalWrite(latchpriv,LOW);
}
motor::shifto( dataPin,  clockPin,  bitOrder,  val){
  uint8_t i;

 
}
}




#endif

void setup() {
 

}

void loop() {
  // put your main code here, to run repeatedly:

}
