#include <Servo.h>
#include "UltrasonicSensor.h"
#include "Legs.h"

//Indicaciones de pines
const int trigger = 7;
const int echo = 6;
const int pinRightLeg = 2;
const int pinLeftLeg = 3;
const int pinRightArm = 4;
const int pinLeftArm = 5;

// Representaciones simbolicas de Servos
Legs legs;

// Representacion simbolica de sensor/es sonico/s
UltraSonicSensor sensor1;

long duration;
int distance;

void setup() {
  //Configuraciones iniciales
  sensor1.initialize(trigger, echo);
  legs.attach(pinLeftLeg, pinRightLeg);

  //Debug
  Serial.begin(9600);
}

void loop() {
     legs.walk(1);
//  distance = sensor1.measureDistance();
  //////////////////////////////////
  // Serial.print("Distancia: "); //
  // Serial.print(distance);      //
  // Serial.print("cm");          //
  // Serial.println();            //
  //////////////////////////////////

  //Acciones
 // if(distance == 0){
  //}else{
  //}


 }
