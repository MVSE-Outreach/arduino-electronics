// We need this line to use the servo!
#include "Servo.h"

// We will use this variable to control the servo
Servo my_servo;

void setup() {               
   // Associate the pin with our servo variable
   my_servo.attach(<servo pin>);
}

void loop() {
  // Read and store analogue input zero.
  int pot_1 = analogRead(A0);
  // For more info on the "map" function, look at the arduino reference page.
  int toWrite = map(pot_1, 0, 1023, 0, 180);
  // Move the servo arm!
  my_servo.write(toWrite);
  // Set the brightness of the LED
  analogWrite(<LED pin>, toWrite);
}


