#include <Servo.h>
#include "UltrasonicSensor.h"
#include "Legs.h"
#include "Arms.h"
#include "Buzzer.h"
#include "Dancer.h"

#define functionMode dev

//Indicaciones de pines
const int trigger = 7;
const int echo = 6;
const int pinRightLeg = 5;
const int pinLeftLeg = 4;
const int pinRightArm = 3;
const int pinLeftArm = 6;
const int buzzerPin = 13;

// Representaciones simbolicas de Servos
Legs legs;

// Arms servos wrapper
Arms arms;

// Dancer is basically where all dancing logic lives
Buzzer buzzer;
Dancer dancer;

// Representacion simbolica de sensor/es sonico/s
UltraSonicSensor sensor;

long duration;
int distance;

// State for bluethoth controller
int state = 'z';

//Robot mode selection
enum Modes{ DEV,AUTONOMOUS,REMOTE };
const Modes currentMode = DEV;

void setup() {
  //Configuraciones iniciales
  sensor.initialize(trigger, echo);
  legs.attach(pinLeftLeg, pinRightLeg);
  arms.attach(pinLeftArm, pinRightArm);
  buzzer.attach(buzzerPin, 97);
  dancer.attach(legs, arms, buzzer);

  // for debugging
  Serial.begin(9600);
}


void loop() {
    legs.walk(0.5);
    arms.punch();
}


void dev() {
}


void autonomous() {
}


void remote() {
}


/*
 * Does action received by the bluethoth controller
*/
void remoteAction(int signal) {

    // Caminar hacia adelante
    // Caminar hacia atras
    // Girar hacia la izquierda
    // Girar hacia la derecha
    // Golpear
    // Baile 1
    // Baile 2
    // Baile 3
}
