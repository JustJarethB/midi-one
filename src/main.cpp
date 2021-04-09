#include <Arduino.h>
#include <DigitalOutput.h>
#include <DigitalInput.h>


DigitalOutput internalLED(13,false);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  internalLED.toggleState();
  internalLED.getPin();
  delay(1000);
}