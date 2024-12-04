#include "Arms.h"
#include <Servo.h>
#include <Arduino.h>


/**
 * Default angle to be set when just restarted
 * TBD
*/
int static const DEFAULTANGLE = 90;
int static const MAXPUNCHANGLE = 180;
int static const MINPUNCHANGLE = 90;

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
   int delayTime = 400;
   // Punch routine
   this->write(ARMLEFT, MAXPUNCHANGLE);
   this->write(ARMRIGHT, MAXPUNCHANGLE);
   delay(delayTime);
   this->bringBack();
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
