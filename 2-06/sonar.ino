// Created by Aimar Fernandez
// Created on Mar 2026
// This program measures distance detected from sonar

int trigPin = 7;
int echoPin = 6;
float duration;
float distance;

void setup() {
    // initiate pins
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    // flash trig pin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    // calculate distance
    duration = pulseIn(echoPin, HIGH);
    distance = (duration * 0.0343) / 2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(100);
}
