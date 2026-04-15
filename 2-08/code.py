"""
Created by Aimar Fernandez
Created on Apr 2026
This program rotates a servo 180 and back when sonar detects something nearby
"""

import board
import digitalio
import time
import pwmio
from adafruit_motor import servo
from analogio import AnalogIn

# constants
POTENTIOMETER_TO_SERVO_RATIO = 180 / 65535

# servo setup
data_wire = pwmio.PWMOut(board.GP2, duty_cycle= 2 ** 15, frequency = 50)
my_servo = servo.Servo(data_wire)
my_servo.angle = 0

# potentiometer setup
potentiometer = AnalogIn(board.A0)

# infinte loop
while True:
    angle = potentiometer.value * POTENTIOMETER_TO_SERVO_RATIO
    my_servo.angle = angle
    time.sleep(0.05)
