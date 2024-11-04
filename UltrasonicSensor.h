#ifndef ULTRASONICSENSOR_H_
#define ULTRASONICSENSOR_H_

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
   UltraSonicSensor();
    /**
     * @brief Starts a UltraSonicSensor instance with the correspondent pins
     *
     * @param triggerPin The pin of the trigger for the ultrasonic sensor
     * @param echoPin    The pin of the echo for the ultrasonic sensor
     *
     * */
    void initialize(int triggerPin, int echoPin);
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

#endif // ULTRASONICSENSOR_H_
