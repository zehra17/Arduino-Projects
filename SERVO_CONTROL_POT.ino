#include <Servo.h>

Servo myServo; 

int potPin = A0;  
int potValue = 0;  
int angle = 0; 

void setup() {

  myServo.attach(9);

}

void loop() {

  potValue = analogRead(potPin); 
  angle = map(potValue, 0, 1023, 0, 180);  
  myServo.write(angle); 
  delay(15);  
  
}
