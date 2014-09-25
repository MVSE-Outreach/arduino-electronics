// Controlling Pins.

void setup(){
   // Set the modes of pins in the setup function
   pinMode(<pin number>, INPUT); 
   pinMode(<pin number>, OUTPUT);
}

void loop(){
  // Read the value of a digital input
  int pin_value = digitalRead(<pin_number>);
  // Write the value of a digital output
  digitalWrite(<pin_number>, HIGH); // ON
  digitalWrite(<pin_number>, LOW);  // OFF
  
  // Read the value of an analog input. This will
  // be between 0 and 1023. Do you know why?
  int analog_val = analogRead(A0);
  
  // The MAP function. It scales the value of a
  // variable from one range of numbers to another.
  // We use this alot for analog outputs!
  int mapped = map(analog_val, from_min, from_max,
                    to_min, to_max);
  
  // Write to an analog output. You can only write
  // analog values between 0 and 255. So we use "map"
  analogWrite(<pin_number>, analog_val);
}
