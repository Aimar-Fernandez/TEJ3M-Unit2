"""
Created by Aimar Fernandez
Created on Mar 2026
This program outputs the distance measured from sonar
"""

import board
import digitalio
import time
import adafruit_hcsr04

# setup
sonar = adafruit_hcsr04.HCSR04(trigger_pin = board.GP2, echo_pin = board.GP3)

# infinte loop
while True:
    try:
        print(sonar.distance)
    except RuntimeError:
        print("retrying")
    time.sleep(0.1)
