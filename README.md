# Question 4: ESP32-Based Smart Sunflower Monitoring System

## Overview

This deliverable presents the complete development of an ESP32-based IoT monitoring system for sunflower farming. The project consists of simulation, physical implementation, and validation of the monitoring system.

---

## Prototype 4(a): ESP32 IoT Simulation

Prototype 4(a) demonstrates the initial simulation of the monitoring system using the Wokwi platform.

**Documentation:** [Prototype4A.md](Prototype4A.md)

**Simulation Link**

https://wokwi.com/projects/467051259618482177

---

## Prototype 4(b): Interfaced ESP32 Monitoring System

Prototype 4(b) demonstrates the interfaced ESP32 architecture incorporating the MQ-5 gas sensor and DHT22 temperature and humidity sensor.

**Documentation:** [Prototype4B.md](Prototype4B.md)

**Simulation Link**

https://wokwi.com/projects/467063095225347073

---

## Prototype 4(c): Physical Implementation and Demonstration

Prototype 4(c) demonstrates the successful physical implementation of the proposed monitoring system.

The completed setup verified:

- Successful ESP32 operation
- Temperature and humidity sensing
- Gas sensing
- Relay control logic
- Real-time sensor monitoring

Although the LCD did not display the readings during testing, the system functionality was successfully verified through the serial terminal, where all sensor readings were displayed correctly. The relay remained **OFF** because the environmental conditions did not exceed the configured threshold values required to activate it, confirming that the control logic was functioning correctly.

Although the original design specified two ESP32 development boards, the laboratory technician confirmed that a single ESP32 could support the required functionality. The group therefore adopted the single-board implementation to optimize the available hardware resources while successfully meeting all project objectives.


- Collaborative documentation prepared by all group members
