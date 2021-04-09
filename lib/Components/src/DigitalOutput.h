#ifndef DIGITAL_OUTPUT_H
#define DIGITAL_OUTPUT_H
#include <Component.h>

class DigitalOutput : public Component {
  protected:
  bool state;
  public:
  DigitalOutput(int pin, bool initialState);
  void setState(bool state);
  bool getState();
  bool toggleState();
  void on();
  void off();
  protected:
  void updateHardware();
};
#endif