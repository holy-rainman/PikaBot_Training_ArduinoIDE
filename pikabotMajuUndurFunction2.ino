#include "CytronMotorDriver.h"
CytronMD motorLeft(PWM_DIR, 11, 10);  
CytronMD motorRight(PWM_DIR, 9, 3);

void robotStop()
{ motorLeft.setSpeed(0);   
  motorRight.setSpeed(0);
}
void robotMove(int speedL, int speedR)
{ motorLeft.setSpeed(speedL);   
  motorRight.setSpeed(speedR);
}

void setup() 
{

}

void loop() 
{ robotMove(128, 128);    delay(1000);
  robotStop();            delay(1000);
  robotMove(-128, -128);  delay(1000);
  robotStop();            delay(1000);  
}
