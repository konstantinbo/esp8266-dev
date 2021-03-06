const short int BUILTIN_LED1 = 2; //GPIO2
const short int BUILTIN_LED2 = 16;//GPIO16
const short int custom_led = 5; //D1 output

void setup() {
  pinMode(BUILTIN_LED1, OUTPUT); // Initialize the BUILTIN_LED1 pin as an output (RED LED) 
  pinMode(BUILTIN_LED2, OUTPUT); // Initialize the BUILTIN_LED2 pin as an output (Blue LED)
  pinMode(custom_led, OUTPUT);
}

void loop() {
  digitalWrite(custom_led, HIGH);
  digitalWrite(BUILTIN_LED1, LOW); // Turn the LED ON by making the voltage LOW 
  digitalWrite(BUILTIN_LED2, HIGH); // Turn the LED off by making the voltage HIGH
  delay(1000); // Wait for a second 
  digitalWrite(BUILTIN_LED1, HIGH); // Turn the LED off by making the voltage HIGH 
  digitalWrite(BUILTIN_LED2, LOW); // Turn the LED ON by making the voltage LOW 
  delay(2000); // Wait for two seconds
}
