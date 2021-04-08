#include <Arduino.h>

#define INTERNAL_LED 13
bool ledState = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
  pinMode(INTERNAL_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(INTERNAL_LED, ledState);
  ledState = !ledState;
  delay(1000);
}