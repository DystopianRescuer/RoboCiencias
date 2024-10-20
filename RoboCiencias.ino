#include <Servo.h>
#include "UltrasonicSensor.h"

//Indicaciones de pines
const int trigger = 7;
const int echo = 6;
const int pinRightLeg = 3;
const int pinLeftLeg = 2;
const int pinRightArm = 4;
const int pinLeftArm = 5;

// Representaciones simbolicas de Servos
Servo rightArm;
Servo leftArm;
Servo rightLeg;
Servo leftLeg;

// Representacion simbolica de sensor/es sonico/s
UltraSonicSensor sensor1;

long duration;
int distance;

void setup() {
  //Configuraciones iniciales
  sensor1.initialize(trigger, echo);
  rightLeg.attach(pinRightLeg);
  leftLeg.attach(pinLeftLeg);
  rightArm.attach(pinRightArm);
  leftArm.attach(pinLeftArm);

  leftLeg.write(0);
  rightLeg.write(0);
  rightArm.write(0);
  leftArm.write(0);

  //Debug
  //Serial.begin(9600);
}

void loop() {

  distance = sensor1.measureDistance();
  //////////////////////////////////
  // Serial.print("Distancia: "); //
  // Serial.print(distance);      //
  // Serial.print("cm");          //
  // Serial.println();            //
  //////////////////////////////////
  delay(100);

  //Acciones
  if(distance == 0){
  }else{
  }


 }

