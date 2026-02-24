// Created by Aimar Fernandez
// Created on Feb 2026
// This program turns the LED light on and off

int pin5 = 5;

void setup() {
  // initiate pins
  pinMode(pin5, OUTPUT);
}

void loop() {
  // wait one second, turn on/off
  digitalWrite(pin5, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);
  delay(1000);
}
