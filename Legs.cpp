#include "Legs.h"
#include <Servo.h>
#include <Arduino.h>

/**
 * Maximum safer speeds for the robot movements. This are intended as a safeguard so we can't move the robot faster than it is stable
 * to move.
 */
double static MAXWALKINGSPEED = 100;
double static MAXROTATINGSPEED = 100;
double static MAXBACKWALKINGSPEED = 100;

/**
 * Default leg angles for the specified Stances
 */
int static ATTACKANGLE = 135;
int static NORMALANGLE = 90;

Legs::Legs(){
}

void Legs::write(Positions p, int deg){
    switch (p){
        case LEFT: leftLeg.write(deg); break;
        case RIGHT: rightLeg.write(180-deg); break;
        case CENTER:
            if(centerLeg)
                centerLeg.write(deg)
            break;
    }
}
void Legs::stance(Stances stance){
   this->stance = stance;
}

void Legs::stance(){
    switch (this->stance){
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
   this->stance(NORMAL);
   this->stance();
}

void Legs::attach(int lLeg, int rLeg, int cLeg){
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   centerLeg.attach(cLeg);
   this->stance(NORMAL);
   this->stance();
}
void Legs::walk(double speed){
    //initial position
    this->stance();
    //action
    this->write(LEFT, 135);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEFT, 90);
    this->write(RIGHT, 135);
    delay(MAXWALKINGSPEED / speed);
    this->write(RIGHT, 90);
}

void Legs::rotateLeft(double speed){
    //initial position
    this->stance();
    //action
    this->write(LEFT, 70);
    delay(MAXROTATINGSPEED/ speed);
    this->write(LEFT, 90);
}

void Legs::rotateRight(double speed){
    //initial position
    this->stance();
    //action
    this->write(RIGHT, 70);
    delay(MAXROTATINGSPEED/ speed);
    this->write(RIGHT, 90);
}

void Legs::walkBackwards(double speed){
    //initial position
    this->stance();
    //action
    this->write(LEFT, 135);
    delay(MAXBACKWALKINGSPEED / speed);
    this->write(LEFT, 90);
}
