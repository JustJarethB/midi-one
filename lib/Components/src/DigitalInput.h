#ifndef DIGITAL_INPUT_H
#define DIGITAL_INPUT_H
#include <Component.h>
class DigitalInput : public Component {
protected:
bool state;
public:
DigitalInput(int pin);
bool getState();
};

class Button : public DigitalInput {
  public:
  Button(int pin);
};

#endif