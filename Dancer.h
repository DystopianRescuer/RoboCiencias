#ifndef LEGS_H_
#define LEGS_H_

#include <Servo.h>


/**
 * @brief Class used to bring together the arms and legs reference to use em'
 * with a buzzer to make dance movements
 *
 **/

enum Dance { BebecitaBebelin, AguaPapa }

class Dancer {
    private:
	Legs legs;
	Arms arms;
	// Buzzer
    public:
	Dancer();

	/*
	 * 
	*/
	void attach(Legs legs, Arms arms, /* Buzzer */);

	void dance(Dance dance);
}
