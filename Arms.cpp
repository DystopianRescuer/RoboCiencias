#include "Arms.h"
#include <Servo.h>
#include <Arduino.h>


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
   this->write(ARMLEFT, DEFAULTANGLE);
   this->write(ARMRIGHT, DEFAULTANGLE);

   attached = true;
}


void Arms::punch() {
   if(!attached) {
      return;
   }
   // Just a placeholder
   int delayTime = 100;
   // Punch routine
   // First: Set the LEFT arm
   this->write(ARMLEFT, MINPUNCHANGLE);
   delay(delayTime);
   // Second: Punch with that arm
   this->write(ARMLEFT, MAXPUNCHANGLE);
   delay(delayTime);
   // Return it to Min angle
   this->write(ARMLEFT, MINPUNCHANGLE);
   delay(delayTime);
   // Third: Set the RIGHT arm
   this->write(ARMRIGHT, MINPUNCHANGLE);
   // Fourth: Punch with that arm
   delay(delayTime);
   this->write(ARMRIGHT, MAXPUNCHANGLE);
   delay(delayTime);
}


void Arms::bringBack(){
    this->write(ARMLEFT, DEFAULTANGLE);
    this->write(ARMRIGHT, DEFAULTANGLE);
}


void Arms::write(ArmsPositions p, int deg) {
    if(deg > 180) {
	return;
    }

    switch(p) {
	case ARMLEFT:
	    leftArm.write(180-deg);
	    break;
	case ARMRIGHT:
	    rightArm.write(180-deg);
	    break;
    }
}
