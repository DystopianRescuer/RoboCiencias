#include "Legs.h"
#include <Servo.h>
#include <Arduino.h>

double static MAXWALKINGSPEED = 100;
double static MAXROTATINGSPEED = 100;
double static MAXBACKWALKINGSPEED = 100;

Legs::Legs(){
}

void Legs::write(Positions p, int deg){
    switch (p){
        case LEFT: leftLeg.write(deg); break;
        case RIGHT: rightLeg.write(180-deg); break;
        case CENTER: centerLeg.write(deg); break;
    }
}
void Legs::attach(int lLeg, int rLeg){
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   this->write(LEFT, 0);
   this->write(RIGHT, 0);
}

void Legs::attach(int lLeg, int rLeg, int cLeg){
   leftLeg.attach(lLeg);
   rightLeg.attach(rLeg);
   centerLeg.attachi(cLeg);
   this->write(LEFT, 0);
   this->write(RIGHT, 0);
   this->write(CENTER, 0);
}
void Legs::walk(double speed){
    this->write(LEFT, 135);
    delay(MAXWALKINGSPEED / speed);
    this->write(LEFT, 90);
    this->write(RIGHT, 135);
    delay(MAXWALKINGSPEED / speed);
    delay
}
