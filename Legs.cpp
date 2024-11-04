#include "Legs.h"
#include <Servo.h>
#include <Arduino.h>

/**
 * Maximum safer speeds for the robot movements. This are intended as a safeguard so we can't move the robot faster than it is stable
 * to move.
 * TO BE CALIBRATED
 */
double static const MAXWALKINGSPEED = 100;
double static const MAXROTATINGSPEED = 100;
double static const MAXBACKWALKINGSPEED = 100;

/**
 * Default leg angles for the specified Stances
 * CALIBRATED
 */
int static const ATTACKANGLE = 5;
int static const NORMALANGLE = 50;

/**
 * Standard "step" values for macro actions. This is the size in degrees that'll be taken in each macro action for servo movements.
 * TO BE CALIBRATED
 */
int static const walkingStepSize = 35;
int static const rotatingStepSize = 35;

Legs::Legs(){
}

void Legs::write(Positions p, int deg){
    if(deg > 180){
        return;
    }
    switch (p){
        case LEFT: leftLeg.write(180-deg); break;
        case RIGHT: rightLeg.write(deg); break;
        case CENTER:
            //Following the hack used for not setting up a center leg
            if(&centerLeg != &rightLeg)
                centerLeg.write(deg);
            break;
    }
}
void Legs::stance(Stances stance){
   this->currentStance = stance;
   this->stance();
}

void Legs::stance(){
    switch (this->currentStance){
        case NORMAL:
            this->write(LEFT, NORMALANGLE);
            this->write(RIGHT, NORMALANGLE);
            this->write(CENTER, NORMALANGLE);
            break;
        case ATTACK:
            this->write(LEFT, ATTACKANGLE);
            this->write(RIGHT, ATTACKANGLE);
            this->write(CENTER, ATTACKANGLE);
            break;
    }
}
void Legs::attach(int lLeg, int rLeg){
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   // Hack for avoiding setting up a center leg in two legged mode
   centerLeg = rightLeg;
   this->stance(NORMAL);
}

void Legs::attach(int lLeg, int rLeg, int cLeg){
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   centerLeg.attach(cLeg);
   this->stance(NORMAL);
}
void Legs::walk(double speed){
    if(speed > 1) return;

    //initial position
    this->stance();

    delay(MAXWALKINGSPEED / speed);
    //action
    this->write(LEFT, leftLeg.read() - walkingStepSize);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEFT, leftLeg.read() - walkingStepSize);
    this->write(RIGHT, rightLeg.read() + walkingStepSize);
    delay(MAXWALKINGSPEED / speed);
    this->write(RIGHT, rightLeg.read() + walkingStepSize);
}

void Legs::rotateLeft(double speed){
    if(speed > 1) return;
    //initial position
    this->stance();
    //action
    this->write(RIGHT, rightLeg.read() + rotatingStepSize);
    delay(MAXROTATINGSPEED/ speed);
    this->write(RIGHT, rightLeg.read() - rotatingStepSize);
}

void Legs::rotateRight(double speed){
    if(speed > 1) return;
    //initial position
    this->stance();
    //action
    this->write(LEFT, leftLeg.read() + rotatingStepSize);
    delay(MAXROTATINGSPEED/ speed);
    this->write(LEFT, leftLeg.read() - rotatingStepSize);
}

void Legs::walkBackwards(double speed){
    if(speed > 1) return;
    //initial position
    this->stance();
    //action
    this->write(LEFT, leftLeg.read() - walkingStepSize);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEFT, leftLeg.read() + walkingStepSize);
    this->write(RIGHT, rightLeg.read() - walkingStepSize);
    delay(MAXWALKINGSPEED / speed);
    this->write(RIGHT, rightLeg.read() + walkingStepSize);
}
