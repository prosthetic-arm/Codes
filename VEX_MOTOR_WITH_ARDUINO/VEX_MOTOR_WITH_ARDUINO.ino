#include <Servo.h>
Servo myServo;

void setup(){
myServo.attach(10);
}
void loop(){
myServo.write(120); //60 is CCW
}
