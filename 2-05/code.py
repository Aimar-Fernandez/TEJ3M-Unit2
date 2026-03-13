"""
Created by Aimar Fernandez
Created on Mar 2026
This program rotates a servo 180 and back over and over
"""

import board
import digitalio
import time
from adafruit_motor import servo

# setup
data_wire = pwmio.PWMOut(board.GP2, duty_cycle= 2 ** 15, frequency = 50)
my_servo = servo.Servo(data_wire)
my_servo.angle = 0

# infinte loop
while True:
    my_servo.angle = 0
    time.sleep(1)
    my_servo.angle = 180
    time.sleep(1)
