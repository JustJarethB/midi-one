#include <Arduino.h>
#include <DigitalOutput.h>
#include <DigitalInput.h>

// INPUTS
Button button(12);
// OUTPUTS
DigitalOutput internalLED(13,false);



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
  for (__int8_t i = 0; i < 5; i++)
  {
    internalLED.on();
    delay(100);
    internalLED.off();
    delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  internalLED.setState(button.getState());
  delay(1);
}