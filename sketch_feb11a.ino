// Created by Aimar Fernandez
// Created on Feb 2026
// This program turns the light on and off


void setup() {
  // initiate pins
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // wait one second, turn on/off
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
