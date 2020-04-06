
#include <Servo.h>            //FOR the Servo Motors




Servo leftAnkle;        //Creating servo objects 
Servo rightAnkle;      //Creating servo objects 
Servo leftHip;        //Creating servo objects  
Servo rightHip;      //Creating servo objects 
Servo leftknee;     //Creating servo objects 
Servo rightknee;   //Creating servo objects 

// setting initial position values for each motor   


int leftAnklePos = 89;     // for initial position u have to adjest you servo motors according to my numbers or u have can change them to your numbers
int rightAnklePos = 92;   // usually you servo motors should in 90 degree posotion in noraml times
int leftHipPos = 88;
int rightHipPos = 85;
int leftkneePos = 95;
int rightkneePos = 95;

int DelayForTurn = 20;        // this part for the time delay if u want to increase the speed u have to decrease the numbers
int DelayForTurn2 = 10;      // IF u want to change the names track them down so u won't have error
int forDelay = 50;
int delayOne = 40;
int delayforme = 100;
int delayforAnkle=20;


boolean firstTime = true; 
boolean(secondTime) = true;
boolean(ThirdTime) = true;

////FUNCTION DEFINITION////////////////////////////////////////////////////////////////////

void setup() {

  leftAnkle.attach(9);    // attaches the servo on pin 9 to the servo object
  rightAnkle.attach(4);   // attaches the servo on pin 4 to the servo object
  leftHip.attach(11);     // attaches the servo on pin 11 to the servo object
  rightHip.attach(6);     // attaches the servo on pin 6 to the servo object
  leftknee.attach(10);    // attaches the servo on pin 10 to the servo object
  rightknee.attach(5);    // attaches the servo on pin 5 to the servo object

 lowerCenter();                           // When the Robot turn on the lower body back to normal by using the initial position 
    delay(1000);

  for (int i = 0; i <6 ; i++)              //turnRight 6 times
  {(turnRight);} 
  delay(500);

    for (int i = 0; i <6 ; i++)              //turnLeft 6 times
  {(turnLeft);} 
  delay(500);

}
                    /// void loop will keep doing the same order until infinite. 
                  
void loop() {
 
}



 ////////// STOP FUNCTION///////////////////
void moveStop() 
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos);
  leftHip.write(leftHipPos);
  rightHip.write(rightHipPos); 
  leftknee.write(leftkneePos);
  rightknee.write(rightkneePos);
  } 

/////////////////// FIRST VERSION TURN RIGHT FUNCTION///////////////////////

void turnRight()
{
for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos-i); // left hip up
     leftknee.write((leftkneePos-5)-i);
     rightHip.write(rightHipPos-i);  //right hip down
     rightknee.write((rightkneePos-10)-i);
      delay(forDelay);
      }
}


/////////////////// FIRST VERSION TURN LEFT FUNCTION  ////////////////////////
void turnLeft()

{
 for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
      for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
       for (int i = 0; i < 20 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);
      }
  }

  ////////////////////LOWER CENTER FUNCTION/////////////////////////

void lowerCenter()                                                                               //equilibrium for lower body motors
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos);
  leftHip.write(leftHipPos);
  rightHip.write(rightHipPos); 
  leftknee.write(leftkneePos);
  rightknee.write(rightkneePos);
}
