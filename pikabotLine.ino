#include "CytronMotorDriver.h"
CytronMD motorLeft(PWM_DIR, 11, 10);  
CytronMD motorRight(PWM_DIR, 9, 3);

#include <HCSR04.h>
UltraSonicDistanceSensor distanceSensor(5, 4);  

#define BUTTON  2
#define IR_LEFT   A0
#define IR_RIGHT  A1

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
  pinMode(IR_LEFT,INPUT);
  pinMode(IR_RIGHT,INPUT);
}

void loop() 
{ if(digitalRead(BUTTON)==LOW)
  {
    while(1)
    {
      if(digitalRead(IR_LEFT)==LOW && digitalRead(IR_RIGHT)==LOW)
        robotMove(128, 128);
      if(digitalRead(IR_LEFT)==HIGH)
        robotMove(-128, 128);
      if(digitalRead(IR_RIGHT)==HIGH)
        robotMove(128, -128);
    }
  }
}
