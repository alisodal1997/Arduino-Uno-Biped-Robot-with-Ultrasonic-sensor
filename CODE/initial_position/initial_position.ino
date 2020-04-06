#include <Servo.h>
Servo RightHip;
Servo RightKnee;
Servo RightAnkgle;
Servo LeftHip;
Servo LeftKnee;
Servo LeftAnkgle;  
void setup() {
RightHip.attach(6);
RightKnee.attach(5);
RightAnkgle.attach(4);
LeftHip.attach(11);
LeftKnee.attach(10);
LeftAnkgle.attach(9); 
}
void loop() {
RightHip.attach(6);RightHip.write(85);
RightKnee.attach(5);RightKnee.write(95);
RightAnkgle.attach(4);RightAnkgle.write(80);
LeftHip.attach(11);LeftHip.write(85);
LeftKnee.attach(10);LeftKnee.write(95);
LeftAnkgle.attach(9);LeftAnkgle.write(90);

}
