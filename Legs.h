#ifndef LEGS_H_
#define LEGS_H_
#endif // LEGS_H_

#include <Servo.h>;
/**
 *@brief Class used for easier handling of the robot's legs
 *
 *It has two modes depending on the quantity of legs:
 *1) Two legged mode:
 *2) Three legged mode:
 *
 *The stances of combat are predefined positions for the legs that are used for specific cases. Also, they
 *are the way of stopping the movement of the robot.
 *
 *ATTACK stance: Inclined to the back and with a lower center of mass. The ideal stance for offensive actions
 *NORMAL stance: With normal degrees and leg position. The ideal stance for walking actions
 **/
enum Positions{ LEFT, RIGHT, CENTER};
enum Stances {ATTACK, NORMAL};
class Legs{
    private:
        Servo leftLeg;
        Servo rightLeg;
        Servo centerLeg;
        Stance stance;
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
         *
         * @param speed A double value used for the percentage of speed we want to use for the action. It
         * should be bounded to [0,1] with 1 being the maximum stable speed for the intended action.
         */
        void walk(double speed);
        /**
         * @brief Macro action for left rotation
         *
         * @param speed A double value used for the percentage of speed we want to use for the action. It
         * should be bounded to [0,1] with 1 being the maximum stable speed for the intended action.
         */
        void rotateLeft(double speed);
         /**
         * @brief Macro action for right rotation
         *
         * @param speed A double value used for the percentage of speed we want to use for the action. It
         * should be bounded to [0,1] with 1 being the maximum stable speed for the intended action.
         */
        void rotateRight(double speed);
         /**
         * @brief Macro action for walk backwards rotation
         *
         * @param speed A double value used for the percentage of speed we want to use for the action. It
         * should be bounded to [0,1] with 1 being the maximum stable speed for the intended action.
         */
        void walkBackwards(double speed);
        /**
         * @brief For setting the stance of the legs
         *
         * The stance sets the default position of the legs, information that'll be used by other methods for the movement dynamics
         *
         * @param stance The stance to be setted.
         */
        void stance(Stances stance);
        /**
         * @brief For getting the legs at stance
         *
         * If no stance is declared, this method works as a setter for the position of the legs in the current stance. This is
         * the method that should be used for this action and no other should be needed or used for it.
         */
        void stance();
        /**
         * @brief Wrapper method for Servo.write
         *
         * It uses a unified degree system for both sides of the robot so we could set n degrees to both sides
         * and keep the robot legs in the same position (as a mirror)
         *
         * A priori this shouldn't be used frequently. It is only included as a manual way for setting the degrees
         * in the servos but all the other methods should suffice for the intended motive of this class.
         *
         * @param p The side we want to write
         * @param deg The degree we want to write
         */
        void write(Positions p, int deg);
};

