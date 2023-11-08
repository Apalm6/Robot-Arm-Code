Here’s a simple example code snippet for Arduino to send data:

cpp
Copy code
void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Send data
  Serial.println("Hello from Arduino!");
  // Wait for a second
  delay(1000);
}
And a simple example code snippet for Arduino to receive data:

cpp
Copy code
void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming data
    String receivedData = Serial.readString();
    
    // Print the received data to the serial monitor
    Serial.print("Data received: ");
    Serial.println(receivedData);
  }
}
Make sure both Arduinos are programmed with the correct baud rate and that the Serial Monitor (if used) is set to the same baud rate to see the messages.
