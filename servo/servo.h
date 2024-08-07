#pragma once
#include <Arduino.h>
#include <Servo.h>

class servo:public Servo {

private:

  uint8_t _servo_pin
  byte inputBuffer;
  char inputChar;
  

public:
  
  servo(uint8_t servo_pin);
  void text();

};