/*
  This is a very basic Arduino Program to show you how to structure your code.
  Use it for reference when writing your own programs!f
*/

// This is how you declare a variable. These store which pins we will access.
int button_pin = 5;
int light_pin  = 6;

// The setup function runs once every time you restart the Arduino. Use it to
// Set up all of your variables
void setup() {               
  pinMode(button_pin, INPUT); // This is how we set a pin to an input we can "read"
  pinMode(light_pin, OUTPUT); // You can probably guess what this line does!
}

// The loop function runs over and over again forever. This is where most of your 
// code will go! You can also declare your own functions like below.
void loop() {
  // Store if the button is pressed or not.
  int is_button_pressed = digitalRead(button_pin);

  if(is_button_pressed == 1){
    digitalWrite(light_pin, HIGH); // if it is pressed turn the light on.
  }
  else {
    digitalWrite(light_pin, LOW); // Otherwise turn it off!
  }
}
