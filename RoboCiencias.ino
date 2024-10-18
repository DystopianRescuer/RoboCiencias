#include <Servo.h>

Servo pataDerecha;
Servo pataIzquierda;

void setup() {
  Serial.begin(9600);
  pataDerecha.attach(7);
  pataIzquierda.attach(8);
}

void loop() {
  pataDerecha.write(90);
  delay(300);
  pataDerecha.write(0);
  delay(300);
}
