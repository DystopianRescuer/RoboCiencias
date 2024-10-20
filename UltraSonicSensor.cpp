#include "UltrasonicSensor.h"
#include <Arduino.h>

UltraSonicSensor::UltraSonicSensor(int triggerPin, int echoPin){
    triggerPin = triggerPin;
    echoPin = echoPin;
}

void UltraSonicSensor::initialize(){
   pinMode(triggerPin, OUTPUT);
   pinMode(echoPin, INPUT);
}

int UltraSonicSensor::measureDistance(){
  long t;
  long d;

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  t = pulseIn(echoPin, HIGH);
  d = t/59;

  return d;

}
