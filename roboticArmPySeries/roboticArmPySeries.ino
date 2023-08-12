#include <Servo.h>

Servo servo1, servo2, servo3, servo4;
int pos1 = 0, pos2 = 34, pos3 = 23, pos4 = 0;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int servoNum = Serial.parseInt(); // Read the servo number (1-4)
    int servoValue = Serial.parseInt(); // Read the servo value (0-100)

    // Map the received value (0-100) to servo angle (0-180)
    int servoAngle = map(servoValue, 0, 180, 0, 180);

    if (servoNum == 1) {
      servo1.write(servoAngle);
      pos1 = servoAngle;
    } else if (servoNum == 2) {
      servo2.write(servoAngle);
      pos2 = servoAngle;
    } else if (servoNum == 3) {
      servo3.write(servoAngle);
      pos3 = servoAngle;
    } else if (servoNum == 4) {
      servo4.write(servoAngle);
      pos4 = servoAngle;
    }

    Serial.print("Servo ");
    Serial.print(servoNum);
    Serial.print(" position: ");
    Serial.println(servoAngle);
  }
}
