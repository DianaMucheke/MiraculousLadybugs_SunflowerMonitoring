# Prototype 4(b): Dual ESP32 Interfaced Monitoring System

## Overview

This prototype demonstrates a distributed IoT architecture consisting of two ESP32 development boards communicating with one another. One ESP32 is interfaced with an MQ-5 gas sensor, while the second ESP32 is connected to a DHT22 temperature and humidity sensor. The objective of this architecture is to demonstrate how multiple microcontrollers can cooperate to monitor different environmental parameters within a smart agricultural system.

Although the original architecture specified the use of two ESP32 boards, the laboratory technician confirmed that the required functionality could be successfully implemented using a single ESP32. To optimize the available hardware resources, our group adopted a single-board implementation while preserving the intended system functionality.

## Components Used

* ESP32 Development Board(s)
* MQ-5 Gas Sensor
* DHT22 Temperature and Humidity Sensor
* Jumper Wires
* Breadboard
* USB Power Supply

## System Description

The monitoring system collects real-time environmental measurements from the connected sensors. The DHT22 sensor measures ambient temperature and relative humidity, while the MQ-5 sensor detects the presence of combustible gases such as LPG, methane, propane, and butane.

Sensor readings are processed by the ESP32 and displayed through the serial terminal. During testing, all sensors operated correctly and produced valid real-time readings. The relay module remained in the **OFF** state because the measured environmental conditions did not exceed the predefined threshold values required to trigger activation. This confirmed that the relay control logic was functioning correctly.

## Physical Demonstration

The physical implementation successfully demonstrated sensor integration, real-time data acquisition, and system functionality. Despite using a single ESP32 instead of two, the prototype met the intended objectives and validated the proposed architecture.
