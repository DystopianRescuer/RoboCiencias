#include <Servo.h>
#include "UltrasonicSensor.h"
#include "Legs.h"
#include "Arms.h"
#include "Buzzer.h"
#include "Dancer.h"
#include <SoftwareSerial.h>

#define functionMode remote 

//Indicaciones de pines
const int trigger = 7;
const int echo = 6;
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
}


void remote() {
   if(bluetooth.available() > 0) {
       state = bluetooth.read();
       buzzer.note(F, Corchea);
       remoteAction();
   }
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
	    legs.rotateLeft(0.5);
	    break;
        // Girar hacia la izquierda
	case 'c':
	    arms.punch();
	    break;
        // Girar hacia la derecha
	case 'd':
	    legs.rotateRight(0.5);
	    break;
        // Golpear
	case 'e':
	    legs.walkBackwards(0.5);
	    break;
	case 'f':
	    dancer.dance(MEPORTOBONITO);
	    break;
	case 'g':
      dancer.dance(AGUAPAPA);
	    break;
	case 'h':
	    break;
    }
}
