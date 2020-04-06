#include <Servo.h>       //include servo library

//Creating servo objects    
Servo leftAnkle;
Servo rightAnkle;
Servo leftHip;
Servo rightHip;
Servo leftknee;
Servo rightknee;


// setting initial position values for each motor   
   
int leftAnklePos = 89;  
int rightAnklePos = 92;            // for initial position u have to adjest you servo motors according to my numbers or u have can change them to your numbers
int leftHipPos = 88;               // usually you servo motors should in 90 degree posotion in noraml times
int rightHipPos = 85;
int leftkneePos = 95;
int rightkneePos = 95;

                                 // this part for the time delay if u want to increase the speed u have to decrease the numbers
int forDelay = 40;
int delayOne = 30;
int DelayForTurn = 20;
int DelayForTurn2 = 10;



boolean firstTime = true;           

////FUNCTION DEFINITION////////////////////////////////////////////////////////////////////

void centerPosition()                                  //equilibrium position for all motors
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos);  // attaches the servo on pin X to the servo object
  leftHip.write(leftHipPos);  // attaches the servo on pin X to the servo object
  rightHip.write(rightHipPos);  // attaches the servo on pin X to the servo object
  leftknee.write(leftkneePos);  // attaches the servo on pin X to the servo object
  rightknee.write(rightkneePos);  // attaches the servo on pin X to the servo object
  delay(1000);
}

void lowerCenter()                                                                               //equilibrium for lower body motors
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos);
  leftHip.write(leftHipPos);
  rightHip.write(rightHipPos); 
  leftknee.write(leftkneePos);
  rightknee.write(rightkneePos);
}


////BACKWARD////////////////////////////////////////////////////////////////////////
void Backward()
{   
  if (firstTime)
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

  firstTime = false;

}



///// SET UP ////////////////////////////////////////////////////////////////////////

void setup()
{
  

  //setting output for motors
  leftAnkle.attach(9);  // attaches the servo on pin 9 to the servo object
  rightAnkle.attach(4);  // attaches the servo on pin 4 to the servo object
  leftHip.attach(11);  // attaches the servo on pin 11 to the servo object
  rightHip.attach(6);  // attaches the servo on pin 6 to the servo object
  leftknee.attach(10);  // attaches the servo on pin 10 to the servo object
 rightknee.attach(5);  // attaches the servo on pin 5 to the servo object



  centerPosition();                        //equilibrium position
  delay(4000);                             //delay 4 seconds

 
 


  for (int i = 0; i <8 ; i++)              //Walks forward 3 times
  {(Backward);} 
  delay(500);

  

 lowerCenter();                           //lower body back to normal
    delay(1000);
  

  
}


////LOOP FUNCTION /////////////////////////////////////////////////////////////////////////////////
void loop()
{
 
  
  }
