#include "CytronMotorDriver.h"
CytronMD motorLeft(PWM_DIR, 11, 10);  
CytronMD motorRight(PWM_DIR, 9, 3);

#include <HCSR04.h>
UltraSonicDistanceSensor distanceSensor(5, 4);  

#define BUTTON  2

void robotStop()
{ motorLeft.setSpeed(0);   
  motorRight.setSpeed(0);
}
void robotMove(int speedL, int speedR)
{ motorLeft.setSpeed(speedL);   
  motorRight.setSpeed(speedR);
}

void setup() 
{ Serial.begin(9600);  
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() 
{ 
  if(digitalRead(BUTTON)==LOW)
  {
    while(1)
    {
      if(distanceSensor.measureDistanceCm()>10)
        robotMove(128, 128);
      else
        robotStop();
    }
  }
}
