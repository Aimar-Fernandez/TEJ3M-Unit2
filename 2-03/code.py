"""
Created by Aimar Fernandez
Created on Feb 2026
This program turns an LED on and off
"""

import board
import digitalio
import time

pin5 = digitalio.DigitalInOut(board.GP5)
pin5.direction = digitalio.Direction.OUTPUT

while True:
    pin5.value = True
    time.sleep(1)
    pin5.value = False
    time.sleep(1)
