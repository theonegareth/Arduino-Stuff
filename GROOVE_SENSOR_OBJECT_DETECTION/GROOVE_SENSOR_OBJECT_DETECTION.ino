const int sensorPin = A0;
const int threshold = 100; // Adjust this threshold value as needed

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if (sensorValue < threshold) {
    // Object detected
    Serial.println("Object detected");
  } else {
    // No object detected
    Serial.println("No object detected");
  }
  
  delay(100);
}
