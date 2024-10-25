#include "Legs.h"
#include <Servo.h>
#include <Arduino.h>

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

void Legs::walk(){
    this->write(LEFT, 135);
    delay(100);

}
