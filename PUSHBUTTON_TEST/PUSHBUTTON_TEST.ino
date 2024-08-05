// Define the pushbutton pin
const int buttonPin = 2;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the pushbutton pin as an input with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(buttonPin);

  // Print the state to the Serial Monitor
  Serial.println(buttonState);

  // Small delay to debounce the button
  delay(50);
}
