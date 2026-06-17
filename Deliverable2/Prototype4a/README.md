# Prototype 4(a): Sunflower Monitoring System (ESP32 IoT Simulation)

## Overview
This prototype demonstrates an ESP32-based IoT system designed to monitor environmental conditions relevant to sunflower growth. The system uses virtual sensors in the Wokwi simulation environment to collect and display real-time data such as temperature and humidity.

The goal is to simulate a smart agricultural monitoring system that can support precision farming by providing environmental insights.

## Components Used
- ESP32 Development Board
- DHT22 Temperature and Humidity Sensor
- (Optional depending on your build) MQ gas sensor / LDR / OLED display
- Wokwi Simulation Platform

## System Description
The ESP32 microcontroller reads data from connected sensors and processes it in real time. The data is displayed on the Serial Monitor and/or an OLED screen (if included). The system continuously monitors environmental conditions and can be expanded for IoT-based alerts in future prototypes.

## Wokwi Simulation Link
https://wokwi.com/projects/467051259618482177

## Source Code
The main program logic is implemented in:
