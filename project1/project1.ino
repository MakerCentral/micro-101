int led_pin = 12;
int button_pin = 8;

int val1;
int val2;

void setup() {
  // Turn on the serial output
  Serial.begin(9600);
  
  // Make the LED pin (12) an output
  pinMode(led_pin, OUTPUT);
  
  // Make the Button pin (8) an input
  pinMode(button_pin, INPUT);
  
  // Turn off the LED to start
  digitalWrite(led_pin, LOW);
}

void loop() {
  // Read the button state (HIGH = On, LOW = Off)
  val1 = digitalRead(button_pin);
  
  // Wait 10 miliseconds
  delay(10);

  // Read the button state again  
  val2 = digitalRead(button_pin);
  
  // Output the readings
  Serial.print("Value 1: ");
  Serial.print(val1);
  Serial.print(" Value 2: ");
  Serial.println(val2);
  
  // If the two readings are the same, and HIGH (On)
  if(val1 == val2 && val1 == HIGH) {
    // Turn the LED on
    digitalWrite(led_pin, HIGH);
  // Otherwise,
  } else {
    // Turn the LED off
    digitalWrite(led_pin, LOW);
  }
}


