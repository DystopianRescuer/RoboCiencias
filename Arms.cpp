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

Arms::Arms() {
}

void Legs::attach(int lArm, int rArm) {
   leftArm.attach(lArm);
   rightArm.attach(rArm);
}

void punch(double speed) {
   // Punch routine
}

void write(Positions p, int deg) {
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
