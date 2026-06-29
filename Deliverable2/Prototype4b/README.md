# Prototype 4(b): Interfaced ESP32 Monitoring System

## Overview

This prototype demonstrates an interfaced ESP32-based monitoring system for sunflower farming. The original architecture consisted of two ESP32 development boards, where one ESP32 interfaced with an MQ-5 gas sensor while the second ESP32 interfaced with a DHT22 temperature and humidity sensor.

Following consultation with the laboratory technician, our group implemented the system using a single ESP32, as it was confirmed that the required functionality could be achieved without compromising the project objectives. This approach also enabled efficient sharing of the available hardware resources among the project groups.

## Components Used

- ESP32 Development Board
- DHT22 Temperature and Humidity Sensor
- MQ-5 Gas Sensor
- Breadboard
- Jumper Wires
- USB Cable

## System Description

The ESP32 continuously collects temperature, humidity, and gas concentration readings from the connected sensors. The sensor values are processed in real time and displayed through the serial terminal.

This prototype validates the communication between the ESP32 and multiple sensors and demonstrates successful environmental monitoring for smart agriculture applications.

## Wokwi Simulation

https://wokwi.com/projects/467063095225347073

## Source Code

The source code is available in the `Code` directory.

## Images

![Prototype 4B](Prototype4b/4b.png)
