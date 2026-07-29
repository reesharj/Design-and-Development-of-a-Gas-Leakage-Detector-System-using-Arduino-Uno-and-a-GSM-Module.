# Design and Development of a Gas Leakage Detector System using Arduino Uno and a GSM Module

An Arduino-based gas leakage detection system designed to improve safety by monitoring gas concentration and automatically responding when dangerous gas levels are detected. The system activates an exhaust fan, sounds a buzzer alarm, and sends an SMS notification using a GSM module to alert the user.

---

## Overview

This project detects gas leakage using a gas sensor connected to an Arduino Uno. When the gas concentration exceeds a predefined threshold, the system automatically:

- Activates an exhaust fan through a relay module
- Sounds a buzzer alarm
- Sends an SMS alert using a GSM module
- Displays the gas level and system status on a 20×4 I2C LCD

This project demonstrates the integration of embedded systems, sensor monitoring, and GSM communication for industrial and household safety applications.

---

## Features

- Real-time gas leakage monitoring
- Automatic exhaust fan control
- Audible buzzer warning
- SMS notification via GSM module
- LCD display for gas level and system status
- Configurable gas detection threshold
- Automatic safety response

---

## Hardware Components

- Arduino Uno
- Gas Sensor
- GSM Module
- 20×4 I2C LCD
- Relay Module
- DC Exhaust Fan
- Buzzer
- Power Supply
- Jumper Wires

---

## Software

- Arduino IDE
- Embedded C/C++
- AT Commands for GSM Communication

---

## Repository Structure

```text
arduino-gsm-gas-leakage-detector/
│
├── code/
│   ├── Arduino_GSM_Gas_Leakage_Detector.ino
│   └── README.md
│
├── hardware/
│   ├── Circuit_Diagram.png
│   ├── Schematic_Diagram.png
│   └── README.md
│
└── README.md
```

---

## System Operation

1. The gas sensor continuously measures the surrounding gas concentration.
2. The Arduino reads the sensor value.
3. If the gas level remains below the threshold:
   - Exhaust fan remains OFF.
   - Buzzer remains OFF.
   - LCD displays the current gas level.
4. If the gas level exceeds the threshold:
   - Exhaust fan turns ON.
   - Buzzer is activated.
   - GSM module sends an SMS alert.
   - LCD displays a gas leakage warning.
5. Once the gas level returns to a safe value, the exhaust fan and buzzer are turned OFF.

---

## Hardware Design

The hardware documentation can be found in the **hardware** folder, including:

- Circuit Diagram
- Schematic Diagram

---

## Source Code

The Arduino program is available in the **code** folder.

Before uploading the program to the Arduino board, replace:

```cpp
YOUR_PHONE_NUMBER
```

with your own phone number including the country code.

Example:

```cpp
+60123456789
```

---

## Future Improvements

- IoT-based remote monitoring
- Mobile application integration
- Cloud data logging
- Multiple gas sensor support
- Email and push notifications
- Battery backup system

---

## Skills Demonstrated

- Embedded Systems
- Arduino Programming
- GSM Communication
- Sensor Interfacing
- Relay Control
- LCD Interfacing
- Safety Monitoring Systems

---

## Author

**Reeshaleni D/O Balakrishenan**

Diploma in Electronic Engineering (Computer)  
POLITEKNIK MERLIMAU MELAKA (PMM)
