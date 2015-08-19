int LED_PIN = 8; // This should correspond to the connection from the LED to the Arduino

// Do all the initial setup in this function
void setup() {
  pinMode(LED_PIN, OUTPUT); // Tell the Arduino that this pin requires power
}

// The loop function repeats itself
void loop() {
  digitalWrite(LED_PIN, HIGH); // Send power to the pin by passing HIGH
  delay(1000); // Wait 1000 milliseconds (1 second)
  digitalWrite(LED_PIN, LOW); // Stop power to the pin by passing LOW
  delay(1000); // Wait 1000 millisecond (1 second);
}
