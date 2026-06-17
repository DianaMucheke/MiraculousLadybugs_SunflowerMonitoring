# Prototype 4(c): ESP32 Relay-Controlled Environmental and Gas Monitoring System

## Overview

This prototype demonstrates an ESP32-based monitoring system that integrates environmental sensing and gas detection using a relay-controlled architecture. The system uses a DHT22 sensor to monitor temperature and humidity conditions and an MQ-5 gas sensor to monitor LPG gas levels within the Wokwi simulation environment.

The goal is to simulate an intelligent monitoring system where environmental conditions can trigger the activation of a secondary monitoring process for gas detection.

## Components Used

* ESP32 Development Board
* DHT22 Temperature and Humidity Sensor
* MQ-5 LPG Gas Sensor
* 5V Relay Module
* 10kΩ Pull-up Resistor
* Wokwi Simulation Platform

## System Description

The ESP32 continuously reads temperature and humidity data from the DHT22 sensor. The readings are compared against predefined threshold values. When either the temperature or humidity exceeds the specified threshold, the relay is activated, simulating the enabling of a secondary monitoring subsystem.

Once activated, the system reads LPG gas levels from the MQ-5 sensor and displays the information through the Serial Monitor. The simulation demonstrates how multiple sensing functions can be coordinated within an embedded IoT monitoring system.

## Wokwi Simulation Link

https://wokwi.com/projects/467065745098944513

## Source Code

The main program logic is implemented in:

* `sketch.ino`

Additional project files include:

* `diagram.json` – Circuit design and component connections
* `libraries.txt` – Required libraries for the simulation

## Sample Outputs

### Normal Conditions

* Temperature: 24°C
* Humidity: 40%
* Relay Status: OFF
* Gas Monitoring: Idle

### Alert Conditions

* Temperature: 35°C
* Humidity: 80%
* Relay Status: ON
* Gas Monitoring: Active
* LPG Gas Level Displayed

## Learning Outcomes

This prototype demonstrates:

* Environmental monitoring using the DHT22 sensor
* Relay-based control logic
* LPG gas detection using the MQ-5 sensor
* Real-time sensor data processing
* Embedded systems prototyping using the Wokwi simulation platform
