// HOW TO STRUCTURE YOUR PROGRAMS

// include statements always go first!
#include "Servo.h"

// declare all of your "global" variables at the top.
// Things like pin numbers for components or Servo's
int output_pin_1 = 3;
int output_pin_2 = 4;
int input_pin_1 = 5;
int servo_pin = 13;
Servo my_servo;

// Anything in this function will only happen once.
// Set up your input and output pins here.
void setup() {
  pinMode(output_pin_1, OUTPUT);
  pinMode(output_pin_2, OUTPUT);
  pinMode(input_pin_1,  INPUT);
  my_servo.attach(servo_pin);
}

// This code will run again and again. Here is the
// "main" part of the program.
void loop(){
  // You can work out what this bit should do
  // for yourself ;)
  // It is your program after all!
}
