# Question 4: ESP32-Based Smart Sunflower Monitoring System

## Project Overview

This project presents the design, simulation, implementation, and validation of an ESP32-based IoT monitoring system for sunflower farming. The objective is to continuously monitor environmental conditions affecting sunflower growth, including temperature, humidity, gas concentration, soil moisture, soil pH, and sunlight exposure. The system demonstrates how Internet of Things (IoT) technologies can support precision agriculture through real-time environmental monitoring.

---

# 4(a): Prototype Simulation

## Overview

Prototype 4(a) demonstrates an ESP32-based IoT monitoring system developed using the Wokwi simulation platform. The simulation validates the interaction between the ESP32 microcontroller and virtual sensors before physical implementation.

## Components Used

* ESP32 Development Board
* DHT22 Temperature and Humidity Sensor
* MQ-5 Gas Sensor
* OLED Display (optional)
* Wokwi Simulation Platform

## System Description

The ESP32 continuously acquires sensor data and processes the readings in real time. The collected data is displayed on the serial terminal and may also be displayed on an OLED screen where applicable. This prototype establishes the foundation for the physical implementation.

### Wokwi Simulation

https://wokwi.com/projects/467051259618482177

---

# 4(b): Physical Implementation

## Overview

Prototype 4(b) demonstrates the physical implementation of the sunflower monitoring system. The original architecture proposed two ESP32 development boards communicating together, with one connected to an MQ-5 gas sensor and the other connected to a DHT22 temperature and humidity sensor.

Following consultation with the laboratory technician, our group implemented the system using a single ESP32 development board, as the required functionality could be achieved without affecting system performance. This approach also enabled efficient sharing of hardware resources among different project groups.

## Components Used

* ESP32 Development Board
* DHT22 Temperature and Humidity Sensor
* MQ-5 Gas Sensor
* Relay Module
* Breadboard
* Jumper Wires
* USB Power Supply

## System Description

The ESP32 successfully collected and processed real-time environmental measurements from the connected sensors. During testing, the system correctly displayed temperature, humidity, and gas concentration values through the serial terminal.

The relay module remained in the **OFF** state because the measured environmental conditions did not exceed the configured activation thresholds. This was expected behavior and confirmed that the relay control logic operated correctly.

---

# 4(c): System Demonstration

## Demonstration Summary

The completed prototype was successfully demonstrated under normal operating conditions. All connected components functioned correctly, including the ESP32, DHT22 sensor, MQ-5 gas sensor, and relay module.

Although the LCD display experienced a display issue during testing, the system functionality was successfully verified through the serial terminal, where real-time sensor readings were continuously displayed. The demonstration confirmed successful sensor integration, accurate environmental monitoring, and correct execution of the embedded control logic.

The completed implementation validated the successful integration of both the hardware and software components and demonstrated the feasibility of the proposed IoT-based sunflower monitoring system.
