#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(5, 4);  

void setup () {
    Serial.begin(9600);  
}

void loop () {
  Serial.println(distanceSensor.measureDistanceCm());
  delay(50);
}
