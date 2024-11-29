#include "Arms.h"
#include <Servo.h>
#include <Arduino.h>

/**
 * Some magic numbers to be calibrated
 */
double static const MAXMOVINGSPEED = 100;

/**
 * Default angle to be set when just restarted
 * TBD
*/
int static const DEFAULTANGLE = 50;
int static const MAXPUNCHANGLE = 100;
int static const MINPUNCHANGLE = 0;

// Used to check if arms already attached
bool static attached = false;

Arms::Arms() {
}

void Arms::attach(int lArm, int rArm) {
   leftArm.attach(lArm);
   rightArm.attach(rArm);

   // Set them in default angle
   this->write(LEFT, DEFAULTANGLE);
   this->write(RIGHT, DEFAULTANGLE);

   attached = true;
}

void Arms::punch(double speed) {
   if(!attached) {
      return;
   }

   // Punch routine
   // First: Set the LEFT arm
   this->write(LEFT, MINPUNCHANGLE);
   // Second: Punch with that arm
   this->write(LEFT, MAXPUNCHANGLE);
   // Return it to Min angle
   this->write(LEFT, MINPUNCHANGLE);
   // Third: Set the RIGHT arm
   this->write(RIGHT, MINPUNCHANGLE);
   // Fourth: Punch with that arm
   this->write(RIGHT, MAXPUNCHANGLE);
}

void Arms::write(Positions p, int deg) {
    if(deg > 180) {
	return;
    }

    switch(p) {
	case LEFT:
	    leftArm.write(180-deg);
	    break;
	case RIGHT:
	    rightArm.write(180-deg);
	    break;
    }
}
