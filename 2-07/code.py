"""
Created by Aimar Fernandez
Created on Apr 2026
This program rotates a servo 180 and back when sonar detects something nearby
"""

import board
import digitalio
import time
import adafruit_hcsr04
import pwmio
from adafruit_motor import servo

# logic setup
addition = 2

# sonar setup
sonar = adafruit_hcsr04.HCSR04(trigger_pin = board.GP2, echo_pin = board.GP3)

# servo setup
data_wire = pwmio.PWMOut(board.GP4, duty_cycle= 2 ** 15, frequency = 50)
my_servo = servo.Servo(data_wire)
my_servo.angle = 0

# infinite loop
while True:
    try:
        print(sonar.distance)
        distance = sonar.distance
    except RuntimeError:
        print("retrying")
    else:
        if distance < 50:
            if my_servo.angle > 178:
                addition = -2
            elif my_servo.angle < 2:
                addition = 2
            my_servo.angle = my_servo.angle + addition
    time.sleep(0.02)
