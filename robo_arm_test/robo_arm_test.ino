#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
Servo myservo3;  // create servo object to control a servo



int potpin = A0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int potpin1 = A1;  // analog pin used to connect the potentiometer
int val1;    // variable to read the value from the analog pin
int potpin2 = A2;  // analog pin used to connect the potentiometer
int val2;    // variable to read the value from the analog pin
int potpin3 = A3;  // analog pin used to connect the potentiometer
int val3;    // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(5);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(6);  // attaches the servo on pin 9 to the servo object
  myservo3.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value 

  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo1.write(val1);                  // sets the servo position according to the scaled value

  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo2.write(val2);                  // sets the servo position according to the scaled value 

  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  val3 = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  myservo3.write(val3);                  // sets the servo position according to the scaled value

  Serial.print("Servo:");
  Serial.print("\t"); // Insert a tab
  Serial.print(val);

  Serial.print("\t\t"); // Insert two tabs
  Serial.print("Servo1:");
  Serial.print("\t"); // Insert a tab
  Serial.print(val1);

   Serial.print("\t\t"); // Insert two tabs
  Serial.print("Servo2:");
  Serial.print("\t"); // Insert a tab
  Serial.print(val2);

   Serial.print("\t\t"); // Insert two tabs
  Serial.print("Servo3:");
  Serial.print("\t"); // Insert a tab
  Serial.print(val3);

  Serial.println(); // Move to the next line

  delay(15); // Wait for a second

}
