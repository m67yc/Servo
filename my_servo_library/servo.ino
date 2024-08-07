#include "servo.h"

servo myservo(9);

void setup() {
  
  Serial.begin(9600);
  myservo.servo();
  myservo.text();

}

void loop() {
  

  
}
