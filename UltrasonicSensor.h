#ifndef ULTRASONICSENSOR_H_
#define ULTRASONICSENSOR_H_
#endif // ULTRASONICSENSOR_H_

/*
 * @brief Class used for easier handling of the
 * ultrasonic sensor.
 *
 * It has all the necessary methods for
 * declaration and use of this kind of sensors. We should use
 * it for anything related to the using of those.
 *
 * */
class UltraSonicSensor{
public:
    /*
     * @brief Construct a new UltraSonicSensor object
     *
     * @param triggerPin The pin number for the Trigger Pin
     * @param echoPin    The pin number for the Echo Pin
     * */
    UltraSonicSensor(int triggerPin, int echoPin);
    /**
     * @brief The begin function. Sets the pins as they need
     * to be
     *
     * */
    void initialize();
    /**
     * @brief Gets the distance (cm) to the nearest object
     *
     * It sends a pulse to the trigger pin that then expects
     * from the echo pin. Based on the info collected from this
     * pulse it gives the distance in centimeters to the nearest
     * object from the sensor.
     *
     * @return The distance in centimeters for the nearest object
     * detected by the sensor.
     *
     * */
    int measureDistance();
private:
    int triggerPin;
    int echoPin;
};
