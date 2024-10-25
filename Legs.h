#ifndef LEGS_H_
#define LEGS_H_
#endif // LEGS_H_

#include <Servo.h>;
/**
 *@brief Class used for easier handling of the robot's legs
 *
 *It has two modes depending on the quantity of legs:
 *1) Two legged mode: */

enum Positions{ LEFT, RIGHT, CENTER};
class Legs{
    private:
        Servo leftLeg;
        Servo rightLeg;
        Servo centerLeg;
    public:
        Legs();
        /**
         * @brief Initializer of the class for the two legged
         * mode
         *
         * It attaches the corresponding pins to Servo objects,
         * in preparation to posterior manipulation of the legs.
         *
         * @param lLeg pin of the Left Leg
         * @param rLeg pin of the Right Leg
         */
        void attach(int lLeg, int rLeg);
        /**
         * @brief Initializer of the class for the three legged
         * mode
         *
         * Attaches the corresponding pins to the Servo objects.
         *
         * @param lLeg pin of the Left Leg
         * @param rLeg pin of the Right Leg
         * @param cLeg pin of the Center Leg
         */
        void attach(int lLeg,  int rLeg, int cLeg);
        /**
         * @brief Macro action for front start walking
         */
        void walk();
        void rotateLeft();
        void rotateRight();
        void walkBackwards();
        void write(Positions p, int deg);
};

