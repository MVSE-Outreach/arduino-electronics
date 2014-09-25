// BASIC CODE CONSTRUCTS

if (variable_1 == variable_2){
  // Some Code.
} else if(variable_1 > variable_2) {
  // Some more code.
} else {
  // EVEN MORE CODE! :O
}

int counter;
for(counter = 0; counter <= 10; counter++) {
   Serial.println(counter); 
}

int counter = 10
while(counter >= 0) {
   Serial.println(counter);
   counter = counter - 1; 
}

int add_numbers(int num_1, int num_2) {
  return num_1 + num_2;
}

void print_text(String to_print){
   Serial.print("Arduino says: ");
   Serial.println(to_print); 
}
