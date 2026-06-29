## Group Members

* **161031** – Okeyo Marie Hoppe Solini
* **161790** – Kimani Anise Wambui
* **164856** – Mucheke Diana Kawira
* **166234** – Njoroge Wachira
* **125309** – Mboto Deborah Moraa
* **166382** – Kariuki Mary Wambui

---

## Question 4

### 4a. Schematic Design Observations

During the schematic design in EasyEDA, the Design Rule Check (DRC) reported connectivity warnings, indicated by red markers at the capacitor connections. These warnings were caused by incomplete or unverified electrical connections between the capacitors and the associated nets within the schematic. Although the warnings did not prevent the schematic from being completed, they indicated that the capacitor pins required further verification to ensure proper connectivity. Due to time constraints, the issue was noted but not resolved during the design phase and was considered during the physical implementation.

---

### 4b. Physical Implementation

The physical implementation of the project was successfully completed using the ESP32 development board together with the required sensors and peripheral components. All integrated components functioned as expected, with the ESP32 successfully collecting and processing real-time temperature, humidity, gas concentration, soil moisture, soil pH, and light intensity data.

Although the original design proposed using two ESP32 development boards, the laboratory technician advised that the entire system could be implemented using a single ESP32 without affecting the required functionality. Our group adopted this approach to optimize the use of the available hardware resources and allow other groups to access the remaining ESP32 boards. The single-board implementation successfully met the project requirements.

During testing, the relay module remained in the **OFF** state because the environmental conditions did not exceed the predefined threshold values required to trigger activation. This behavior was expected and confirmed that the relay control logic was functioning correctly.

---

### 4c. System Demonstration

The completed system was successfully demonstrated under normal operating conditions. The ESP32 continuously acquired data from the connected sensors and displayed the readings through the serial terminal. Real-time temperature, humidity, gas concentration, soil moisture, soil pH, and light intensity measurements confirmed that the sensing, processing, and communication components were operating correctly.

The demonstration verified the successful integration of both the hardware and software components, confirming that the system met its intended functional requirements.
