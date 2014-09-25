
//  Here you can see how to do basic programming tasks like loops, functions and 
//  printing messages from the arduino back to your computer.

int button_pin = 5;
int light_pin  = 6;
int press_count = 0;
int is_button_pressed = 0;

void setup() {               
  pinMode(button_pin, INPUT);
  pinMode(light_pin, OUTPUT);
  // Open a "Serial connection" to your computer. More on this later!
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  is_button_pressed = digitalRead(button_pin);

  while(is_button_pressed == 1){
    is_button_pressed = digitalRead(button_pin); // Update this with every loop!
    // How is this different to how we turned it on before?
    digitalWrite(button_pin, is_button_pressed);
  }
  
  press_count += 1; // Add 1 to the button press counter.
  send_message(press_count);
}

void send_message(int button_count) { // Here we declare our own function.
  Serial.println("Button Pressed %d times", button_count);
}
