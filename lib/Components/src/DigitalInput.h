#ifndef DIGITAL_INPUT_H
#define DIGITAL_INPUT_H
#include <Component.h>
class DigitalInput : public Component {
protected:
bool state;
public:
bool getState();
};
#endif