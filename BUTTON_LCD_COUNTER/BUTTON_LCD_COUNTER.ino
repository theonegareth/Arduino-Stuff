#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the library with the I2C address (usually 0x27 or 0x3F for most I2C LCDs)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int buttonPin = 2; // Pin connected to the button
int buttonState = 0; // Variable to hold the current button state
int lastButtonState = 0; // Variable to hold the last button state
int counter = 0; // Variable to hold the counter value

void setup() {
  Serial.println("Initializing LCD...");
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  
  Serial.println("LCD initialized!");
  // Print the initial counter value
  lcd.print("Counter: 0");
  
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the current state of the button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (buttonState is HIGH) and was previously not pressed (lastButtonState was LOW)
  if (buttonState == HIGH && lastButtonState == LOW) {
    // Debounce delay
    delay(50);
    // Increment the counter
    counter++;
    // Clear the previous value and print the new counter value
    lcd.clear();
    lcd.print("Counter: ");
    lcd.print(counter);
  }
  // Save the current state as the last state for the next loop iteration
  lastButtonState = buttonState;
}
