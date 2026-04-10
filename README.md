# Dual Axis Solar Tracking Drying System

A dual-axis automatic solar tracking drying system designed to improve agricultural drying efficiency by tracking sunlight in both horizontal and vertical directions.

This system extends the single-axis solar tracking dryer by incorporating four LDR sensors and two independent control axes.

The platform dynamically aligns with maximum sunlight using threshold-based comparison logic.

---

## Features

Dual-axis solar tracking  
Four LDR sensor feedback  
Horizontal and vertical alignment  
Threshold-based movement control  
Microcontroller-based logic  
Improved solar exposure  
Energy-efficient drying  

---

## System Architecture

Sensor Layer  
Four LDR sensors placed in cross configuration

Processing Layer  
Microcontroller calculates X-axis and Y-axis difference

Control Layer  
Two motors control horizontal and vertical movement

---

## Sensor Layout

        TOP

LEFT   CENTER   RIGHT

       BOTTOM

---

## Working Principle

Horizontal Axis:

differenceX = left − right

Vertical Axis:

differenceY = top − bottom

Decision Logic:

If |differenceX| > threshold → move horizontal motor  
If |differenceY| > threshold → move vertical motor  

The system continuously aligns with maximum sunlight.

---

## Hardware Components

Microcontroller  
4 × LDR sensors  
Motor driver module  
2 × DC motors / Servo motors  
Drying platform  
Power supply  

---

## Applications

Solar drying  
Agricultural dehydration  
Solar food preservation  
Smart agritech dryer  
