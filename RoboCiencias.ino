#include <Servo.h>
#include "UltrasonicSensor.h"
#include "Legs.h"
#include "Arms.h"
#include "Buzzer.h"
#include "Dancer.h"
#include <SoftwareSerial.h>

#define functionMode autonomous

//Indicaciones de pines
const int trigger = 7;
const int echo = 8;
const int pinRightLeg = 4;
const int pinLeftLeg = 5;
const int pinRightArm = 3;
const int pinLeftArm = 6;
const int buzzerPin = 13;
const int bluetoothRX = 9;
const int bluetoothTX = 10;

// Serial for bluetooth
SoftwareSerial bluetooth(bluetoothRX, bluetoothTX);

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
int temp = 'z';

//Speed for remote controlling
double currentSpeed = 0.5;


void setup() {
  //Configuraciones iniciales
  sensor.initialize(trigger, echo);
  legs.attach(pinLeftLeg, pinRightLeg);
  arms.attach(pinLeftArm, pinRightArm);
  buzzer.attach(buzzerPin, 97);
  dancer.attach(legs, arms, buzzer);

  // for debugging
  Serial.begin(9600);

  // For bluetooth
  bluetooth.begin(9600);
}


void loop() {
    functionMode();
}


void dev() {
}


void autonomous() {
    static int walks = 0;
    int measureDist = sensor.measureDistance();
    if(measureDist < 10) {
        arms.punch();   
	delay(200);
    } else {
	legs.walk(0.7);
	if(walks++ == 10) {
	    for(int i = 0; i < 5; i++) {
	    legs.rotateLeft(0.7);
	    walks -= 2;
	    }
	}
    }
}


void remote() {
   if(bluetooth.available() > 0) {
       temp = state;
       state = bluetooth.read();
       buzzer.note(F, Corchea);
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
	    legs.walk(currentSpeed);
	    break;
        // Caminar hacia atras
	case 'b':
	    legs.rotateLeft(currentSpeed);
	    break;
        // Girar hacia la izquierda
	case 'c':
	    arms.punch();
      delay(300/currentSpeed);
	    break;
        // Girar hacia la derecha
	case 'd':
	    legs.rotateRight(currentSpeed);
	    break;
        // Golpear
	case 'e':
	    legs.walkBackwards(currentSpeed);
	    break;
	case 'f':
	    dancer.dance(MEPORTOBONITO);
	    break;
	case 'g':
      dancer.dance(AGUAPAPA);
	    break;
	case 'h':
	    break;
  case 'i':
    state = temp;
    currentSpeed = 0.25;
    break;
  case 'j':
    state = temp;
    currentSpeed = 0.5;
    break;
  case 'k':
    state = temp;
    currentSpeed = 1;
    break;
  case 'm':
    legs.stance();
    }
}
