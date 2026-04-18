#include <Servo.h>

Servo gateServo;

const int sensor1 = 2;
const int sensor2 = 3;

const int gateOpen = 0;
const int gateClosed = 90;

void setup() {
  gateServo.attach(9);
  gateServo.write(gateOpen);

  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
}

void loop() {
  if (digitalRead(sensor1) == HIGH || digitalRead(sensor2) == HIGH) {
    gateServo.write(gateClosed);
  } else {
    gateServo.write(gateOpen);
  }
  delay(100);
}
