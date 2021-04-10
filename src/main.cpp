#include <Arduino.h>
#include <DigitalOutput.h>
#include <DigitalInput.h>

// INPUTS
Button button(12);
// OUTPUTS
DigitalOutput internalLED(13,false);

bool prevButtonState;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
  prevButtonState = button.getState();
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
  bool buttonState = button.getState();
  if (buttonState != prevButtonState)
  {
    prevButtonState = buttonState;
    switch (buttonState)
    {
    case HIGH:
      usbMIDI.sendControlChange(1,127,1);
      break;
    case LOW:
      usbMIDI.sendControlChange(1,0,1);
      break;
    
    default:
      break;
    }
  }
  
  internalLED.setState(buttonState);
  delay(1);
}