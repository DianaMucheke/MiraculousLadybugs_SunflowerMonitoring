# Question 4: ESP32-Based Smart Sunflower Monitoring System

## Overview

This deliverable presents the design, simulation, implementation, and validation of an ESP32-based IoT monitoring system for monitoring environmental conditions suitable for sunflower cultivation. The project demonstrates the use of the ESP32 microcontroller to collect and process environmental data, supporting precision agriculture through real-time monitoring and automation.

---

## 4(a): ESP32 IoT Simulation

Prototype 4(a) presents the initial simulation of the monitoring system using the Wokwi platform. The simulation demonstrates the interaction between the ESP32 and environmental sensors, validating the system design before physical implementation.

**Wokwi Simulation:**
https://wokwi.com/projects/467051259618482177

For more details, see **Prototype4A.md**.

---

## 4(b): Interfaced ESP32 Architecture

Prototype 4(b) demonstrates the interfaced monitoring system, originally designed to use two ESP32 development boards with the MQ-5 gas sensor and DHT22 temperature and humidity sensor. Following guidance from the laboratory technician, the system was successfully implemented using a single ESP32 while maintaining the intended functionality and optimizing the available hardware resources.

**Wokwi Simulation:**
https://wokwi.com/projects/467063095225347073

For more details, see **Prototype4B.md**.

---

## 4(c): Physical Implementation and Demonstration

Prototype 4(c) demonstrates the successful physical implementation and testing of the monitoring system. The ESP32 successfully acquired and processed real-time temperature, humidity, and gas sensor readings, confirming the correct operation of the integrated hardware and software components. During testing, the relay remained in the **OFF** state because the environmental conditions did not exceed the predefined activation thresholds, demonstrating that the control logic functioned as expected.

**Wokwi Simulation:**
https://wokwi.com/projects/467065745098944513

For more details, see **Prototype4C.md**.

---

## Conclusion

The three prototypes collectively demonstrate the progression of the project from simulation to physical implementation and validation. Together, they confirm the feasibility of an ESP32-based IoT solution for monitoring environmental conditions that support healthy sunflower growth.
