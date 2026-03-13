// Created by Aimar Fernandez
// Created on Mar 2026
// This program rotates a servo

#include <Servo.h>

Servo servo;

// initiate servo
void setup() {
    servo.attach(2);
    servo.write(0);
}

// wait one second, rotate 90 degrees
void loop() {
    servo.write(90);
    delay(1000);
    servo.write(0);
    delay(1000);
}
