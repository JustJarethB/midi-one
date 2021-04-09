#include <Arduino.h>
#include <DigitalOutput.h>

  DigitalOutput::DigitalOutput(int pin, bool initialState) : Component{pin} {
    pinMode(getPin(), OUTPUT);
    state = initialState;
    updateHardware();
  }
  void DigitalOutput::setState(bool state) {
    this->state = state;
    updateHardware();
  }
  bool DigitalOutput::getState() {
    return state;
  }
  bool DigitalOutput::toggleState() {
    setState(!state);
    return this->state;
  }
  void DigitalOutput::on(){
    setState(true);
  }
  void DigitalOutput::off(){
    setState(false);
  }
  void DigitalOutput::updateHardware() {
    digitalWrite(getPin(), state);
  }
