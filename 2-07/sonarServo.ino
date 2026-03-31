// Created by Aimar Fernandez
// Created on Mar 2026
// This program rotates a servo when a sonar detects distance of 50 or under

# include <Servo.h>

int trigPin = 7;
int echoPin = 6;
int servoActivation = 0;
int angle = 0;
int addition = 1;

float duration;
float distance;

Servo servo;

void setup() {
    // initiate sonar pins
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
    // initiate servo pin
    servo.attach(5);
    servo.write(0);
}

void loop() {
    // move servo
    if (distance < 50) {
        
        if (angle == 180) {
          addition  = -1;
        } else if (angle == 0) {
          addition = 1;
        }
        angle = angle + addition;
      servo.write(angle);
      
    }
    // sonar scan
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
  
    duration = pulseIn(echoPin, HIGH);
    distance = (duration * 0.0343) / 2;
    Serial.print("Distance: ");
    Serial.println(distance);
}
