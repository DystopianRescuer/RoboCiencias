#include "Legs.h"
#include <Servo.h>
#include <Arduino.h>

/**
 * Maximum safer speeds for the robot movements. This are intended as a safeguard so we can't move the robot faster than it is stable
 * to move.
 * Front walking is calibrated
 */
double static const MAXWALKINGSPEED = 100;
double static const MAXROTATINGSPEED = 200;
double static const MAXBACKWALKINGSPEED = 100;

/**
 * Default leg angles for the specified Stances
 * CALIBRATED
 */
int static const ATTACKANGLE = 5;
int static const NORMALANGLE = 55;

/**
 * Standard "step" values for macro actions. This is the size in degrees that'll be taken in each macro action for servo movements.
 * Walking is calibrated.
 */
int static const walkingStepSize = 35;
int static const rotatingStepSize = 35;

Legs::Legs() {
}

void Legs::write(LegsPositions p, int deg){
    if(deg > 180){
        return;
    }
    switch (p){
        case LEGLEFT: leftLeg.write(deg); break;
        case LEGRIGHT: rightLeg.write(180-deg); break;
        case LEGCENTER:
            //Following the hack used for not setting up a center leg
            if(&centerLeg != &rightLeg)
           //     centerLeg.write(deg);
            break;
    }
}

int Legs::read(LegsPositions p){
    switch(p){
        case LEGLEFT: return leftLeg.read();
        case LEGRIGHT: return 180-rightLeg.read();
        case LEGCENTER:
            if(&centerLeg != &rightLeg)
                return centerLeg.read();
    }
}

void Legs::stance(Stances stance){
   this->currentStance = stance;
   this->stance();
}

void Legs::stance(){
    switch (this->currentStance){
        case NORMAL:
            this->write(LEGLEFT, NORMALANGLE);
            this->write(LEGRIGHT, NORMALANGLE);
            //this->write(LEGCENTER, NORMALANGLE);
            break;
        case ATTACK:
            this->write(LEGLEFT, ATTACKANGLE);
            this->write(LEGRIGHT, ATTACKANGLE);
            //this->write(LEGCENTER, ATTACKANGLE);
            break;
    }
}

void Legs::attach(int lLeg, int rLeg) {
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   // Hack for avoiding setting up a center leg in two legged mode
   //centerLeg = rightLeg;
   this->stance(NORMAL);
}

void Legs::attach(int lLeg, int rLeg, int cLeg) {
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   centerLeg.attach(cLeg);
   this->stance(NORMAL);
}

void Legs::walk(double speed) {
    if(speed > 1) return;

    //initial position
    this->stance();

    delay(MAXWALKINGSPEED / speed);
    //action
    this->write(LEGLEFT, this->read(LEGLEFT) + walkingStepSize);
    this->write(LEGRIGHT, this->read(LEGRIGHT) - 10);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEGLEFT, this->read(LEGLEFT) - walkingStepSize);
    this->write(LEGRIGHT, this->read(LEGRIGHT) + 10);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEGRIGHT, this->read(LEGRIGHT) + walkingStepSize);
    this->write(LEGLEFT, this->read(LEGLEFT) - 10);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEGLEFT, this->read(LEGRIGHT) + 10);
    this->write(LEGRIGHT, this->read(LEGRIGHT) - walkingStepSize);
}

void Legs::rotateLeft(double speed) {
    if(speed > 1) return;
    //initial position
    this->stance();
    delay(MAXROTATINGSPEED / speed);
    this->write(LEGRIGHT, this->read(LEGRIGHT) + rotatingStepSize);
    this->write(LEGLEFT, this->read(LEGLEFT) - rotatingStepSize);
    delay(MAXROTATINGSPEED / speed);
    this->write(LEGRIGHT, this->read(LEGRIGHT) - rotatingStepSize);
    this->write(LEGLEFT, this->read(LEGLEFT) + rotatingStepSize);
}

void Legs::rotateRight(double speed) {
    if(speed > 1) return;
    //initial position
    this->stance();
    delay(MAXROTATINGSPEED / speed);
    this->write(LEGLEFT, this->read(LEGLEFT) + rotatingStepSize);
    this->write(LEGRIGHT, this->read(LEGRIGHT) - rotatingStepSize);
    delay(MAXROTATINGSPEED / speed);
    this->write(LEGLEFT, this->read(LEGLEFT) - rotatingStepSize);
    this->write(LEGRIGHT, this->read(LEGRIGHT) + rotatingStepSize);
}

void Legs::walkBackwards(double speed) {
    if(speed > 1) return;
    //initial position
    this->stance();
    delay(MAXWALKINGSPEED / speed);
    //action
    this->write(LEGLEFT, this->read(LEGLEFT) - walkingStepSize);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEGLEFT, this->read(LEGLEFT) + walkingStepSize);
    this->write(LEGRIGHT, this->read(LEGRIGHT) - walkingStepSize);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEGRIGHT, this->read(LEGRIGHT) + walkingStepSize);
}
