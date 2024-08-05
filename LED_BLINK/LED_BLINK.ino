// Define the pin number for the external LED
const int ledPin = 13;

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(1000);                  // Wait for a second
  digitalWrite(ledPin, LOW);    // Turn the LED off by making the voltage LOW
  delay(1000);                  // Wait for a second
}
