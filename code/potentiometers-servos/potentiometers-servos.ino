#include "servo.h" // We need this line to use the servo!

Servo my_servo; // We will use this variable to control the servo

// The setup function runs once every time you restart the Arduino. Use it to
// Set up all of your variables
void setup() {               
   my_servo.attach(<servo pin>); // Associate the pin with our servo variable
}

void loop() {
  int pot_1 = analogRead(A0); // Read and store analogue input zero.
  // For more info on the "map" function, look at the arduino reference page.
  int toWrite = map(pot_1, 0, 1023, 0, 180);
  my_servo.write(toWrite);         // Move the servo arm!
  analogWrite(<LED pin>, toWrite); // Set the brightness of the LED
}
