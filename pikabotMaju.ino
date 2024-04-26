#include "CytronMotorDriver.h"
CytronMD motorLeft(PWM_DIR, 11, 10);  
CytronMD motorRight(PWM_DIR, 9, 3);

void setup() {

}

void loop() {
  motorLeft.setSpeed(128);   
  motorRight.setSpeed(128);
}
