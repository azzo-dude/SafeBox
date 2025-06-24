#ifndef COMPONENTS_H
#define COMPONENTS_H

class Led {
  private:
    uint8_t  _pin;

  public:
    Led(uint8_t pin) : _pin(pin) {
      pinMode(_pin, OUTPUT);
      digitalWrite(_pin, LOW);
    }
}

class Keypad3x4 {
}

class Buzzer {

}

class Lcd16x2I2C {

}

class Nfc {

}

class FingerprintSensor {

}

class

#endif
