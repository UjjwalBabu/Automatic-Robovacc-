#include <Servo.h>

Servo S1;  //Pin 13 Base Rotation
Servo S2;  //Pin 12 Arm Rotation
Servo S3;  //Pin 11 Pick and Place

#define vaccume 10

#define R1 9  // Right wheel Control
#define R2 8

#define L1 7  // Left wheel Control
#define L2 6


#define trigPin 3  // Ultrasonic Sensor Control
#define echoPin 2



void ultrasonic();   // Ultrasonic sensor
void pick_object();  // Object pick and place action by servo



long duration;
int distance;

void setup() {
  Serial.begin(9600);

  pinMode(vaccume, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
 

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  

  S1.attach(13);
  S2.attach(12);
  S3.attach(11);

  S2.write(50);
  delay(10);
  S1.write(50);
  delay(10);
  S3.write(0);
  delay(10);
}

void loop() {
   digitalWrite(vaccume,HIGH);

    turn_left();
    forward();

   
  ultrasonic();

   if ( distance<= 5) {
    digitalWrite(R1, LOW);  // Stop
    digitalWrite(R2, LOW);
    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    delay(1000);
    
    pick_object();
   
  }
  else {
    turn_left();
    forward();
  }
}


void ultrasonic()

{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}

void pick_object()

{
  S2.write(50);
  delay(1000);
  S1.write(180);
  delay(1000);
  S2.write(180);
  delay(1000);
  S3.write(90);
  delay(1000);

  S2.write(50);
  delay(1000);
  S1.write(50);
  delay(1000);

  S2.write(120);
  delay(1000);
  S3.write(0);
  delay(1000);
}

void turn_left()
{
   digitalWrite(R1, HIGH);  // Turn Left
    digitalWrite(R2, LOW);
    digitalWrite(L1, LOW);
    digitalWrite(L2, HIGH);
    delay(2000);
}

void forward()
{
   digitalWrite(R1, LOW);  // forward
    digitalWrite(R2, HIGH);
    digitalWrite(L1, LOW);
    digitalWrite(L2, HIGH);
    delay(2000);
}
