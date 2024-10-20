#include "UltrasonicSensor.h"
#include <Arduino.h>

UltraSonicSensor::UltraSonicSensor(){
}

void UltraSonicSensor::initialize(int triggerPin, int echoPin){
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

  return (int)d;

}
