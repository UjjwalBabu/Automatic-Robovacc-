// Before Uploading this code download (Servo.h) library, if not preinstalled.
// Include the Servo library
#include <Servo.h>
// Declare the Servo pin
int servoPin = 3;
// Create a servo object
Servo Servo1;
void setup() {
// We need to attach the servo to the used pin number
Servo1.attach(servoPin);
}
void loop() {
//Make servo go to 0 degrees
Servo1.write(0);
delay(1000);// Make servo go to 45 degrees
Servo1.write(45);
delay(1000);
// Make servo go to 90 degrees
Servo1.write(90);
delay(1000);
// Make servo go to 135 degrees
Servo1.write(135);
delay(1000);
// Make servo go to 180 degrees
Servo1.write(180);
delay(1000);
} // End of the code
