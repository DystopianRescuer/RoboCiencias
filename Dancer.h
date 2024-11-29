#ifndef LEGS_H_
#define LEGS_H_

#include <Servo.h>
#include  "Buzzer.cpp"

/**
 * @brief Class used to bring together the arms and legs reference to use em'
 * with a buzzer to make dance movements and play music
 *
 **/

enum Dance { BebecitaBebelin, AguaPapa }

class Dancer {
    private:
	Legs legs;
	Arms arms;
	Buzzer buzzer;
    public:
	Dancer();

	void attach(Legs legs, Arms arms, Buzzer buzzer);

	void dance(Dance dance);
}


#endif LEGS_H_
