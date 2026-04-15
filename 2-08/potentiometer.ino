// Created by Aimar Fernandez
// Created on Apr 2026
// This program rotates a servo based on potentiometer reading

# include <Servo.h>

Servo servo;

// max potentiometer val divided by max servo val
const int ANGLE_TO_POTENTIOMETER_RATIO = 1023 / 180;

const int POTENTIOMETER_PIN = A0;
int potentiometerVal = 0;
int angle = 0;

void setup() {
    // initiate servo pins
    servo.attach(5);
    servo.write(0);
}

void loop() {
    // convert potentiometer value to angle
    potentiometerVal = analogRead(POTENTIOMETER_PIN);
    angle = potentiometerVal / ANGLE_TO_POTENTIOMETER_RATIO;
    servo.write(angle);
}
