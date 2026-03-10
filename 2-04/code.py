"""
Created by Aimar Fernandez
Created on Feb 2026
This program turns the rbg lights on and off
"""

import board
import digitalio
import time

# function turns on specified pins, then turns them off
def rgb(red, green, blue):
    if red == 1:
        pin2.value = True
    if green == 1:
        pin3.value = True
    if blue == 1:
        pin4.value = True
    time.sleep(1)
    pin2.value = False
    pin3.value = False
    pin4.value = False

# setup

# red
pin2 = digitalio.DigitalInOut(board.GP2)
pin2.direction = digitalio.Direction.OUTPUT

# green
pin3 = digitalio.DigitalInOut(board.GP3) 
pin3.direction = digitalio.Direction.OUTPUT

# blue
pin4 = digitalio.DigitalInOut(board.GP4) 
pin4.direction = digitalio.Direction.OUTPUT

# infinte loop
while True:
    rgb(1, 0, 0)
    rgb(0, 1, 0)
    rgb(0, 0, 1)
    rgb(1, 1, 0)
    rgb(0, 1, 1)
    rgb(1, 0, 1)
    rgb(1, 1, 1)
