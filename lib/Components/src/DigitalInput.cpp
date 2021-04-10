#include <Arduino.h>
#include <Component.h>
#include <DigitalInput.h>
DigitalInput::DigitalInput(int pin) : Component{pin} {
    pinMode(this->getPin(), INPUT);
}
bool DigitalInput::getState() {
    return digitalRead(this->getPin());
}


Button::Button(int pin) : DigitalInput{pin} {
    pinMode(this->getPin(), INPUT_PULLDOWN); //This seems to be Teensy specific, ATMega needs PULLUP
}
