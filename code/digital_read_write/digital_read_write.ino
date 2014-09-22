void setup() {
  // put your setup code here, to run once:

}

void loop() {  
  // Declare a variable to store the button press
  int button_pressed;
  // Read the value of the pin with the button
  button_pressed = digitalRead(<pin number>);
  // Turn on an output pint
  digitalWrite(<pin number>, HIGH);
  // Or turn off an output pin
  digitalWrite(<pin number>, LOW);
  // if statement
  if(<my variable> == <some value>){
     // DO something! 
  }
  else {
     // DO something ELSE!
  }
}
