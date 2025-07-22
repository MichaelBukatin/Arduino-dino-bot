#include <Servo.h>

Servo servo;  // Connecting the library for servo

const int photoPin = A0;  // Photoresistor pin
const int servoPin = 9;   // Pin servo
int threshold = 500;      // Illumination threshold value (select experimentally)

void setup() {
  servo.attach(servoPin);     // Servo initialization
  servo.write(90);            // Set the initial position (e.g. 90°)
  Serial.begin(9600);         // For debugging
}

void loop() {
  int lightValue = analogRead(photoPin);  // Reading the value from the photoresistor
  Serial.println(lightValue);             // To check values

  if (lightValue < threshold) {           // If the value is below the threshold (cactus detected)
    servo.write(0);                       // Press "space" (move the servo)
    delay(100);                           // Delay for holding the button
    servo.write(90);                      // Return to the starting position
    delay(500);                           // A short pause to avoid double triggering
  }
}
