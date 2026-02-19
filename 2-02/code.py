"""
Created by Aimar Fernandez
Created on Feb 2026
This program turns the light on and off, while making a longer delay
"""

import board
import digitalio
import time

led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT
timer = 1

while True:
    led.value = True
    time.sleep(timer)
    led.value = False
    time.sleep(timer)

    timer += 0.5
