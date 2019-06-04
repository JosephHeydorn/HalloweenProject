#include <Servo.h>

Servo servo_13;

void setup()
{
  pinMode(11, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  servo_13.attach(13);

}


void loop()
{
  if (digitalRead(11) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    servo_13.write(180);
    delay(1000);
    servo_13.write(90);
    delay(1000);
    servo_13.write(180);
    delay(1000);
    servo_13.write(90);
    delay(1000);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);

  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);

  }

}