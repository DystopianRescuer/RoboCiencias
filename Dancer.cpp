#include "Dancer.h"

//Dancing methods
void Dancer::BebecitaBebelin(){

}
void Dancer::MePortoBonito(){

}
void Dancer::AguaPapa(){

}

//Empty method
Dancer::Dancer(){

}

void Dancer::attach(Legs legs, Arms arms, Buzzer buzzer){
    this->legs = legs;
    this->arms = arms;
    this->buzzer = buzzer;
}

void Dancer::dance(Dance dance){
    switch(dance){
        case MEPORTOBONITO:
           this->MePortoBonito();
           break;
        case AGUAPAPA:
            this->AguaPapa();
            break;
        case BEBECITABEBELIN:
            this->BebecitaBebelin();
            break;
    }
}
