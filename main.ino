#include <Servo.h>

Servo pataDerecha;
Servo pataIzquierda;

void setup() {
  Serial.begin(9600);
  pataDerecha.attach(7);
  pataIzquierda.attach(8);
}

void loop() {
  
}
