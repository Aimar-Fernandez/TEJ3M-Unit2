// Created by Aimar Fernandez
// Created on Mar 2026
// This program turns the RGB lights on and off

int pin5 = 5;
int pin6 = 6;
int pin7 = 7;

void setup() {
  // initiate pins
  pinMode(pin5, OUTPUT); // red
  pinMode(pin6, OUTPUT); // blue
  pinMode(pin7, OUTPUT); // green
}

void loop() {
  // wait one second, turn on/off

  // red
  digitalWrite(pin5, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);

  // green
  digitalWrite(pin7, HIGH);
  delay(1000);
  digitalWrite(pin7, LOW);

  // blue
  digitalWrite(pin6, HIGH);
  delay(1000);
  digitalWrite(pin6, LOW);

  // yellow
  digitalWrite(pin5, HIGH);
  digitalWrite(pin7, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);

  // cyan
  digitalWrite(pin6, HIGH);
  delay(1000);
  digitalWrite(pin7, LOW);

  // purple
  digitalWrite(pin5, HIGH);
  delay(1000);

  // white
  digitalWrite(pin6, HIGH);
  digitalWrite(pin7, HIGH);
  delay(1000);
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
}
