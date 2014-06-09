#include <Servo.h>

//Create a new servo
Servo the_servo;

// The value of the pot
int value;

// The analog pin attached to the pot
int pot_pin = 0;

void setup() {
  //Turn on the serial output
  Serial.begin(9600);
  
  // Define which pin the servo is attached to
  the_servo.attach(9);
}

void loop() {
  // Read the value of the pot (0-1023)
  value = analogRead(pot_pin);
  
  // Output the value
  Serial.print("Value: ");
  Serial.println(value);
  
  // Scale the value to the range 0-180
  value = map(value, 0, 1023, 0, 179);
  
  // Update the servo position
  the_servo.write(value);
  
  // Wait for the servo to move
  delay(15);
}

