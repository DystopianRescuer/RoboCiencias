#include <Servo.h>
#include "Legs.h"
#include "Arms.h"
#include "Buzzer.h"


#ifndef DANCER_H_
#define DANCER_H_


/**
 * @brief Class used to bring together the arms and legs reference to use em'
 * with a buzzer to make dance movements and play music
 *
 **/

enum Dance { BEBECITABEBELIN, AGUAPAPA, MEPORTOBONITO };

class Dancer {
    private:
        Legs legs;
        Arms arms;
        Buzzer buzzer;
        void BebecitaBebelin();
        void AguaPapa();
        void MePortoBonito();
    public:
        Dancer();

        void attach(Legs legs, Arms arms, Buzzer buzzer);

        void dance(Dance dance){
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
};


#endif // DANCER_H_
