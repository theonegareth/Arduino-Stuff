// Define pin numbers
const int sensorPin = 3;     // Digital input pin of Arduino Mega connected to sensor output pin
const int analogOutPin = A0; // Analog output pin of Arduino Mega for converted analog signal

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize the sensor pin as an input
  pinMode(sensorPin, INPUT);
}

void loop() {
  // Read the state of the sensor
  int sensorState = digitalRead(sensorPin);
  
  // Convert the digital signal to an analog voltage using PWM
  int analogValue = map(sensorState, LOW, HIGH, 0, 255); // Map the digital value to 0-255 for PWM
  
  // Output the converted analog signal
  analogWrite(analogOutPin, analogValue);
  
  // Print the digital and converted analog values to Serial Monitor
  Serial.print("Digital Value: ");
  Serial.print(sensorState);
  Serial.print(", Analog Value: ");
  Serial.println(analogValue);
  
  delay(100); // Delay for stability
}
