# Automatic Pet Feeder using Arduino Uno

This project utilizes an Arduino Uno microcontroller along with a servo motor and IR sensor to create an automatic pet feeder. When a pet approaches the feeder, the IR sensor detects its presence and triggers the servo motor to open the feeder's cap, allowing the pet access to food for a set period of time. The cap automatically closes after the feeding duration has elapsed.

## Components Used:

- Arduino Uno microcontroller
- Servo motor
- IR sensor
- Jumper wires
- Power source (USB or external power supply)

## Setup:

1. Connect the servo motor signal pin to digital pin 9 of Arduino Uno.
2. Connect the IR sensor signal pin to digital pin 2 of Arduino Uno.
3. Connect the VCC to 5v and GND to GND of Arduino Uno.
4. Upload the provided Arduino sketch (`app.ino`) to the Arduino Uno.
5. Adjust the feeding duration and schedule in the code if necessary.
6. Assemble the feeder and position it in a suitable location.
7. Test the feeder by approaching it with a pet or any object that can trigger the IR sensor.

## Usage:

1. Ensure the feeder is powered and connected to the Arduino Uno.
2. Position the feeder in a suitable location accessible to the pet.
3. The feeder will automatically dispense food when the pet approaches within the range of the IR sensor.
4. Monitor the feeding schedule and adjust settings as needed.