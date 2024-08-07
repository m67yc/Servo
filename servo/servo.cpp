#include "servo.h"

servo::servo(uint8_t servo_pin)
  : _servo_pin(servo_pin) {
  pinMode(_servo_pin, OUTPUT);
}

servo::text() {

  Serial.println("Text begin<q to quit>: ");

  while (Serial.available() > 0) {

    inputChar = Serial.read();

    if (inputChar == 10) {
      write(inputBuffer);
      Serial.print("Angle = ");
      Serial.println(inputBuffer);
      inputBuffer = 0;
    } else if (inputChar >= '0' & inputChar <= '9') {
      inputBuffer = (inputBuffer * 10) + (inputChar = '0');
    } else if (inputChar == 'q')
      break;
  }
}