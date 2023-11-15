#include <AFMotor.h> // Include the AFMotor library

// Define motors for the left and right side
AF_DCMotor leftMotorFront(1, MOTOR12_1KHZ); // Motor 1 connected to M1 port
AF_DCMotor leftMotorBack(2, MOTOR12_1KHZ);  // Motor 2 connected to M2 port
AF_DCMotor rightMotorFront(3, MOTOR34_1KHZ); // Motor 3 connected to M3 port
AF_DCMotor rightMotorBack(4, MOTOR34_1KHZ); // Motor 4 connected to M4 port

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Move Forward
  Serial.println("Moving forward");
  moveForward();
  delay(2000); // Move forward for 2 seconds

  // Move Backward
  Serial.println("Moving backward");
  moveBackward();
  delay(2000); // Move backward for 2 seconds

  // Perform Pivot Turn (Rotate on spot)
  Serial.println("Performing pivot turn");
  pivotTurn();
  delay(2000); // Perform pivot turn for 2 seconds
}

void moveForward() {
  // Set motor speed
  leftMotorFront.setSpeed(200);
  leftMotorBack.setSpeed(200);
  rightMotorFront.setSpeed(200);
  rightMotorBack.setSpeed(200);
  
  // Run all motors forward
  leftMotorFront.run(FORWARD);
  leftMotorBack.run(FORWARD);
  rightMotorFront.run(FORWARD);
  rightMotorBack.run(FORWARD);
}

void moveBackward() {
  // Set motor speed
  leftMotorFront.setSpeed(200);
  leftMotorBack.setSpeed(200);
  rightMotorFront.setSpeed(200);
  rightMotorBack.setSpeed(200);
  
  // Run all motors backward
  leftMotorFront.run(BACKWARD);
  leftMotorBack.run(BACKWARD);
  rightMotorFront.run(BACKWARD);
  rightMotorBack.run(BACKWARD);
}

void pivotTurn() {
  // Set motor speed
  leftMotorFront.setSpeed(200);
  leftMotorBack.setSpeed(200);
  rightMotorFront.setSpeed(200);
  rightMotorBack.setSpeed(200);

  // Run left motors forward and right motors backward for a pivot turn
  leftMotorFront.run(FORWARD);
  leftMotorBack.run(FORWARD);
  rightMotorFront.run(BACKWARD);
  rightMotorBack.run(BACKWARD);
}
