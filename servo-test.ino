#include <Servo.h>
 
Servo myservo;//Servoオブジェクトの宣言

int pos = 0;    // variable to store the servo position
int posMin = 100;
int posMax = 145;
 
void setup() {
  myservo.attach(9);//servo変数をピンに割り当てる、ここでは9番ピン
  myservo.write(90);//角度を指定、ここでは90度
 
}
 
void loop() {
  for (pos = posMin; pos <= posMax; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
  }
  for (pos = posMax; pos >= posMin; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }
 
}
