"""
Created by Aimar Fernandez
Created on Feb 2026
This program turns the light on and off
"""

import board
import digitalio
import time

led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(1)
    led.value = False
    time.sleep(1)
