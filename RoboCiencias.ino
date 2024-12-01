#include <Servo.h>
#include "UltrasonicSensor.h"
#include "Legs.h"
#include "Arms.h"
#include "Buzzer.h"
#include "Dancer.h"

//Indicaciones de pines
const int trigger = 7;
const int echo = 6;
const int pinRightLeg = 2;
const int pinLeftLeg = 3;
const int pinRightArm = 4;
const int pinLeftArm = 5;
// TBD
const int buzzerPin = 8;

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
  buzzer.attach(buzzerPin, 97);
  dancer.attach(legs, arms, buzzer);

  // for debugging
  Serial.begin(9600);
}

void loop() {
  switch(currentMode) {
      //For development
      case DEV:
          // Legs development
          legs.rotateRight(0.25);

	  // Ultrasonic sensors dev
	  //distance = sensor1.measureDistance();
  	  ////////////////////////////////
	  //Serial.print("Distancia: "); //
	  //Serial.print(distance);      //
	  //Serial.print("cm");          //
 	  //Serial.println();            //
  	  //////////////////////////////////

  	  //Acciones
	  //if(distance == 0){

 	  //} else {

  	  //}
      break;
      //For autonomous mode. We need a fancy algorithm
      case AUTONOMOUS:
          break;
      //Remote mode, establish connections with bluetooth master
      case REMOTE:
      	  // Checks for updates on Serial
          if (Serial.available() > 0) {
	  	state = Serial.read();
	  }
	  remoteAction(state);
          break;
  }
}

/*
 * Does action received by the bluethoth controller
*/
void remoteAction(int signal) {

    // Caminar hacia adelante
    if(signal == 'a') {
        
    }
    
    // Caminar hacia atras
    if(signal == 'b') {
        
    }

    // Girar hacia la izquierda
    if(signal == 'c') {

    }

    // Girar hacia la derecha
    if(signal == 'd') {
       
    }

    // Golpear
    if(signal == 'e') {
        
    }

    // Baile 1
    if(signal == 'f') {
     
    }

    // Baile 2
    if(signal == 'g') {
     
    }

    // Baile 3
    if(signal == 'h') {
     
    }
}
