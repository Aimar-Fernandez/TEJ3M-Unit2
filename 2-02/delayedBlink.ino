// Created by Aimar Fernandez
// Created on Feb 2026
// This program delays the arduino blink time longer

int blinkTime = 1000;

void setup() {
    // the setup function runs once when you press reset or power the board
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    // the loop function runs over and over again forever
    digitalWrite(LED_BUILTIN, HIGH);
    delay(blinkTime);
    digitalWrite(LED_BUILTIN, LOW);
    delay(blinkTime);                 

    blinkTime = blinkTime + 500;
}
