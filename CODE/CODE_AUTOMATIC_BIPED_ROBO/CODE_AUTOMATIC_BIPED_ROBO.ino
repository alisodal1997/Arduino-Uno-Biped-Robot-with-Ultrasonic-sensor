#include <NewPing.h>           //FOR the Ultrasonic sensor
#include <Servo.h>            //FOR the Servo Motors

#define TRIG_PIN A0           //For Ultrasonic sensors if you change the place of the  pin u have to change them as well
#define ECHO_PIN A1          //For Ultrasonic sensors if you change the place of the  pin u have to change them as well
#define MAX_DISTANCE 200    // the max value is fixed

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE); 


Servo leftAnkle;        //Creating servo objects 
Servo rightAnkle;      //Creating servo objects 
Servo leftHip;        //Creating servo objects  
Servo rightHip;      //Creating servo objects 
Servo leftknee;     //Creating servo objects 
Servo rightknee;   //Creating servo objects 

// setting initial position values for each motor   

int distance = 100;    //FOR Ultrasonic sensor

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


    
  delay(200);                             // Time delay for the ultrasonic can recive the Data from the outside environment 200 = two second
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);
}
                    /// void loop will keep doing the same order until infinite. 
                    // here ultrasonic sensor will do scan every two second
void loop() {
 
 delay(40);
 
 if(distance<=35)
 {

Serial.print(distance);
  //////////////////////////////////////// the action required for avoiding the obstacle ////////////////////////////////////////////
  
 lowerCenter();                           //lower body back to normal
 delay(1000);
 Backward();
 Backward();
 Backward();
 delay(200);
 lowerCenter();                           //lower body back to normal
 delay(2000);
 turnLeft();
 delay(200);
 lowerCenter();                           //lower body back to normal
 delay(1000);
}
else
{
  forward();
  
 }
 distance = readPing();
 return distance;
}


int readPing() { 
  delay(70);
  int cm = sonar.ping_cm();
  if(cm==0)
  {
    cm = 250;
  }
  return cm;
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


//////////////////ANKLES FUNCTIONS////////////////////

////////////////First Time////////////////////////////
void leftAnkleOut ()
{
 for (int i = 0; i < 13 ; i++ )
    { leftAnkle.write(leftAnklePos-i);   // left ankle out   
    delay(forDelay);} 
}


void rightAnkleOut()
{for (int i = 0; i < 12 ; i++ )
    {rightAnkle.write(rightAnklePos-i);   //right ankle out 
     delay(forDelay);}
}
void leftAnkleOut2 ()
{
 for (int i = 0; i < 9 ; i++ )
    { leftAnkle.write(leftAnklePos+i);   // left ankle out   
    delay(forDelay);
    } 
}


void rightAnkleOut2()
{for (int i = 0; i < 10  ; i++ )
    {rightAnkle.write(rightAnklePos+i);   //right ankle out 
     delay(forDelay);}
}
void leftAnkleOut3 ()
{
 for (int i = 0; i < 10 ; i++ )
    { leftAnkle.write(leftAnklePos-i);   // left ankle out   
    delay(forDelay);} 
}


void rightAnkleOut3()
{for (int i = 0; i < 7 ; i++ )
    {rightAnkle.write(rightAnklePos-i);   //right ankle out 
     delay(forDelay);}
}

void leftAnkleOut4 ()
{
 for (int i = 0; i < 10 ; i++ )
    { leftAnkle.write(leftAnklePos+i);   // left ankle out   
 //   delay(forDelay);
    } 
}


void rightAnkleOut4()
{for (int i = 0; i < 12 ; i++ )
    {rightAnkle.write(rightAnklePos+i);   //right ankle out 
   //  delay(forDelay);
     
     }
}


void ankleOutFirst()
{
  leftAnkleOut();
   delay(delayOne);
   rightAnkleOut();
   delay(delayOne);
}

void ankleOutFirst2()
{
  leftAnkleOut2();
  delay(delayOne);
  rightAnkleOut2();
  delay(delayOne);

 
}
void ankleOutFirst3()
{
 
//  leftAnkleOut4();
//  delay(delayOne);
//  rightAnkleOut4();
//  delay(delayOne);
// delay(delayOne);
// delay(delayOne);
  
  rightAnkleOut3();
  delay(delayOne);
  leftAnkleOut3();
  delay(delayOne);
}

void ankleOutFirst4()
{

  leftAnkleOut4();
 delay(delayOne);
  rightAnkleOut4();
 delay(delayOne);
}



//////////////////////////LOOP/////////////////////////////////////
void ankleInLoop()
{
  for (int i = 0; i <25 ; i++)
{
  leftAnkle.write((leftAnklePos -5)+i);   
  delay(forDelay);
}

for (int i = 0; i <25 ; i++)
{
  rightAnkle.write((rightAnklePos-0)+i);
  delay(forDelay);
  }
  
}

void ankleOutLoop()
{
for (int i = 0; i <25 ; i++ )
{
  rightAnkle.write(rightAnklePos-i);   //right foot 
  leftAnkle.write(leftAnklePos-i);
   delay(forDelay);  } 

}


////////////////////HIP FUNCTIONs////////////////////////////////////

/////////////////First Time//////////////////////////////////////////
void leftForwardFirst()
{
  for (int i = 0; i < 15 ; i++ ) // 
   { 
     leftHip.write(leftHipPos+i); // left hip up
     leftknee.write((leftkneePos+5)+i);
     rightHip.write(rightHipPos+i);  //right hip down
     rightknee.write((rightkneePos+10)+i);
      delay(forDelay);}
  }

//////////////////////LOOP///////////////////////////////

void leftForwardLoop()
{
for (int i = 0; i < 30 ; i++ )  
 {
  leftHip.write((leftHipPos-18)+i); //left hip up
  leftknee.write((leftkneePos-20)+i);
  rightHip.write((rightHipPos-18)+i);  //right up down
  rightknee.write((rightkneePos-25)+i);
  delay(forDelay);}
}


void rightForwardLoop()
{
for (int i = 0; i < 30 ; i++ )
{
  leftHip.write((leftHipPos+15)-i); // left hip up
  leftknee.write((leftkneePos+15)-i);
  rightHip.write((rightHipPos+15)-i); // right hip up
  rightknee.write((rightkneePos+15)-i);
  delay(forDelay);
}
}


/////////////////////////WALKING FORWARD FUNCTION /////////////////////////////////////////////

//Fuction to walk forward
void forward()
{    
 
  if(firstTime)
 {   
   ankleOutFirst(); // left leg forward 
  leftForwardFirst();
 
 }

else
{
  //ankleOutFirst2();
 leftForwardLoop(); //left leg forward
 
}

ankleOutFirst2();
delay(delayOne);
//
//
//
////Right Leg Forward
rightForwardLoop();
delay(delayOne);
//



if(secondTime)
{
 

ankleOutFirst4();
delay(delayOne);

for(int  i=0; i<17; i++)
{
rightAnkle.write(rightAnklePos-i);
delay(delayOne);
}
//rightAnkle.write(80);
//delay(delayforme);
for(int  i=0; i<15 ;i++)
{
leftAnkle.write(leftAnklePos-i);
delay(delayOne);
}
//leftAnkle.write(leftAnklePos);
//delay(delayforme);
// leftAnkle.write(78);
// delay(delayforme);
}

else{

ankleOutFirst3();
delay(delayOne);
}
firstTime = false;
secondTime = false;


}//end forward()






  
////////////////////// BACKWARD FUNCTION/////////////////////////////////////

void Backward() 
{
   
   
  if (ThirdTime)
  {
    for (int i = 0; i < 10 ; i++ )
    { leftAnkle.write(leftAnklePos+i);   //left foot 
      delay(forDelay);}

    delay(delayOne);

    for (int i = 0; i < 10 ; i++ )
    {rightAnkle.write(rightAnklePos+i);   //right foot   
      delay(forDelay);}

    for (int i = 0; i < 10 ; i++ )
    {
      rightHip.write(rightHipPos+i);
      rightknee.write((rightkneePos+5)+i);
      
      leftHip.write(leftHipPos+i);
      leftknee.write((leftkneePos+5)+i);
      
      delay(forDelay);}

    delay(delayOne);
  }

  else
  {
    for (int i = 0; i < 25 ; i++ ) 
    {
      rightHip.write((rightHipPos-10)+i); 
      rightknee.write((rightkneePos-20)+i);
      
      leftHip.write((leftHipPos-10)+i);
      leftknee.write((leftkneePos-15)+i);
      delay(forDelay);}
  }

  delay(delayOne);

  for (int i = 0; i <25 ; i++)
  {
    leftAnkle.write((leftAnklePos +15)-i);   
    rightAnkle.write((rightAnklePos+15)-i);
    delay(forDelay);
  }

  delay(delayOne);

  //Right Leg Forward

  for (int i = 0; i < 25 ; i++ )
  {
    leftHip.write((leftHipPos+10)-i);
    leftknee.write((leftkneePos+10)-i);
    
    
    rightHip.write((rightHipPos+10)-i);
    rightknee.write((rightkneePos+10)-i);
    
    delay(forDelay);
  }

  delay(delayOne);

  for (int i = 0; i <25 ; i++ )
  {
    rightAnkle.write((rightAnklePos-15)+i);   //right foot
    leftAnkle.write((leftAnklePos-15)+i);

//    if (i <= 20)
//    {leftAnkle.write((leftAnklePos+10)-i);}

    delay(forDelay); 
  }

  delay(delayOne);

  ThirdTime = false;


     
 
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
