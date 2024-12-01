#ifndef ARMS_H_
#define ARMS_H_

#include <Servo.h>
/**
 * @brief Class used for easier handling of the robot's arms 
 * This is way simplier than Legs because the way we use arms are simplier by itself
 * We just need to punch and let other places in the program use write to do stuff like dancing
 **/
enum ArmsPositions{ ARMLEFT, ARMRIGHT };

class Arms {
    private:
        Servo leftArm, rightArm;
    public:
        Arms();
        /**
         * @brief Initializer of arms class
         *
         * It attaches the corresponding pins to Servo objects
         *
         * @param lArm pin of the Left Arm
         * @param rArm pin of the Right Arm
         */
        void attach(int lArm, int rArm);

        /**
         * @brief Macro action for act as Stance intention 
         *
         * @param speed A double value used for the percentage of speed we want to use for the action. It
         * should be bounded to [0,1] with 1 being the maximum stable speed for the intended action.
         */
        void punch();

	/*
	 * @brief Bring back the default arms position after punching for a while
	 *
	 * no params
	 */
	void bringBack();

        /**
         * @brief Wrapper method for Servo.write
         *
         * It uses a unified degree system for both sides of the robot so we could set n degrees to both sides
         * and keep the robot arms in the same position (as a mirror)
         *
         * A priori this shouldn't be used frequently. It is only included as a manual way for setting the degrees
         * in the servos but all the other methods should suffice for the intended motive of this class.
         *
         * @param p The side we want to write
         * @param deg The degree we want to write
         */
        void write(ArmsPositions p, int deg);
};


#endif // ARMS_H_
