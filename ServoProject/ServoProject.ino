#include <Servo.h> // Add the servo library to your code 


// Define the servo and potentiometer pins
const int servoPin = 0;  // You can use any digital pin but for this to work you will need to use Digital pin 0
const int potPin = A0;   // Connect the potentiometer to any pin, however, this code uses analog pin A1

Servo servo;  

void setup() {
  servo.attach(servoPin);  //  this code Attaches the servo to the servoPin you declared earlier
}

void loop() {
  // Read the value from the potentiometer
  int potValue = analogRead(potPin);

  // Map the potentiometer value (0-1023) to servo angle (0-180)
  int angle = map(potValue, 0, 1023, 0, 180);

  // Move the servo to the mapped angle
  servo.write(angle);

  // You can add a delay to make the movement smoother
  delay(1000);  // Adjust as needed, this code is set to 1 second note that the delay paramter is in Microseconds
}

