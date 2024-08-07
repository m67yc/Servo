#include <Servo.h>
Servo myservo;

#define servopin 9

int a[100] ={0},i = 0;
int b = 0, c = 0;

void setup() {

  Serial.begin(9600);
  myservo.attach(servopin);
}

void loop() {

  if(Serial.available() > 0){
    a[i] = Serial.read();
    if(a[i] != 'a'){
      a[i] -= 48;
      Serial.print(a[i]);
      Serial.println("..");
      i++;
    }
    else{
      for(int p = 0;p < i;p++){
        for(int k = p;k < i;k++){
          a[p] *= 10;
        }
        c += a[p];
      }
      Serial.println(c/10);
      myservo.write(c/10);
      i = 0;
      c = 0;
    }
  }

}
