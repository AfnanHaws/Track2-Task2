#include <Servo.h>

int sensorValue = 0;

int outputValue = 0;

int sensorValue2 = 0;

int outputValue2 = 0;

Servo servo_9;

Servo servo_10;

void setup()
{
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  servo_9.attach(9);

  servo_10.attach(10);

}

void loop()
{
  sensorValue = analogRead(A1);
  outputValue = map(sensorValue, 0, 1023, 0, 180);
  sensorValue2 = analogRead(A0);
  outputValue2 = map(sensorValue2, 0, 1023, 0, 180);
  servo_9.write(outputValue);
  servo_10.write(outputValue2);
  delay(10); // Delay a little bit to improve simulation performance
}