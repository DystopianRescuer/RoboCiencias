#include <Servo.h>

//Indicaciones de pines
const int Trigger = 7;
const int Echo = 6;
const int pinRightLeg = 3;
const int pinLeftLeg = 2;
const int pinRightArm = 4;
const int pinLeftArm = 5;

// Representaciones simbolicas de Servos
Servo rightArm;
Servo leftArm;
Servo rightLeg;
Servo leftLeg;


long duration;
int distance;

void setup() {
  //Configuraciones iniciales
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);

  rightLeg.attach(pinRightLeg);
  leftLeg.attach(pinLeftLeg);
  rightArm.attach(pinRightArm);
  leftArm.attach(pinLeftArm);

  leftLeg.write(0);
  rightLeg.write(0);
  rightArm.write(0);
  leftArm.write(0);

  //Debug
  //Serial.begin(9600);
}

void loop() {

//    //-------------------------FORMULA-----------
//   long t;
//   long d;

//   digitalWrite(Trigger, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(Trigger, LOW);

//   t = pulseIn(Echo, HIGH);
//   d = t/59;

//   Serial.print("Distancia: ");
//   Serial.print(d);
//   Serial.print("cm");
//   Serial.println();
//   distance = d;
//   delay(100);

//   //Acciones
//   if(distancia == 0){

//   }else{
//     buscarYMover(distance);
//   }


 }

// void buscarYMover(int distance){
//   if (distance > 0 && distance <= 50) {
//     digitalWrite(miled, HIGH), patarriba.write(105), patabajo.write(75);
//      delay (200);
//    digitalWrite(miled, LOW), patarriba.write(75), patabajo.write(105);
//      delay (200);
//   }

//   if (distance > 51) {


//       digitalWrite(miled, HIGH), patarriba.write(75),  patabajo.write(90);
//      delay (200);
//       digitalWrite(miled, HIGH), patarriba.write(105),  patabajo.write(90);
//      delay (200);
//   }
// }

// void madrearObjetoCercano(){

//   while(distancia ==0){
//     punioizq.write(75), delay(100), punioizq.write(105);
//     punioder.write(75), delay(100), punioder.write(105);
//   }

// }
