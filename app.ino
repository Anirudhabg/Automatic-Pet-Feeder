#include <Servo.h>

Servo servoMotor;
int irSensorPin = 2;
int servoPin = 9;
bool feedingInProgress = false;

void setup()
{
    servoMotor.attach(servoPin);
    pinMode(irSensorPin, INPUT);
}

void loop()
{
    if (!feedingInProgress && digitalRead(irSensorPin) == HIGH)
    {
        feedPet();
        feedingInProgress = true;
        delay(10000); // Change time like day afternoon and evening
        feedingInProgress = false;
    }
}

void feedPet()
{
    servoMotor.write(0); //close at first
    delay(1000);
    servoMotor.write(180); //opens after 1 second
    delay(3000);
    servoMotor.write(0); // closes after 3 second
}
