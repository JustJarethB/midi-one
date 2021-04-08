#include <Arduino.h>

class Component {
  int pin;
  public:
  Component(int pin) {
    this->pin = pin;
  }
  int getPin() {
    return pin;
  }
};

class DigitalOutput : Component {
  protected:
  bool value;
  public:
  DigitalOutput(int pin, bool initialValue) : Component{pin} {
    pinMode(getPin(), OUTPUT);
    value = initialValue;
    updateHardware();
  }
  void setValue(bool value) {
    this->value = value;
    updateHardware();
  }
  bool getValue() {
    return value;
  }

  protected:
  void updateHardware() {
    digitalWrite(getPin(), value);
  }
};

DigitalOutput internalLED(13,false);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  internalLED.setValue(!internalLED.getValue());
  delay(1000);
}