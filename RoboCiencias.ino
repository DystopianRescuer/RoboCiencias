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
const int bluethoothPin = 11;

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
static int state = 'z';

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
    functionMode();
}


void dev() {
}


void autonomous() {
}


void remote() {
   if(Serial.available()) {
       state = Serial.read();
   }
   remoteAction();
}


/*
 * Does action received by the bluethoth controller
*/
void remoteAction() {
    switch(state) {
        // Caminar hacia adelante
        case 'a':
	    legs.walk(0.5);
	    break;
        // Caminar hacia atras
	case 'b':
	    legs.walkBackwards(0.5);
	    break;
        // Girar hacia la izquierda
	case 'c':
	    legs.rotateLeft(0.5);
	    break;
        // Girar hacia la derecha
	case 'd':
	    legs.rotateRight(0.5);
	    break;
        // Golpear
	case 'e':
	    arms.punch();
	    break;
	case 'f':
	    dancer.dance(MEPORTOBONITO);
	    break;
	case 'g':
	    break;
	case 'h':
	    break;
    }
    state = '\0';
}
