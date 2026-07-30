# Gas Leakage Detector using Arduino Uno and GSM Module

An Arduino Uno-based gas leakage detection system developed as an individual Diploma Final Year Project. The system continuously monitors gas level and automatically activates an exhaust fan, sounds a buzzer alarm, and sends an SMS notification via a GSM module when a gas leak is detected.

## Overview

This project was developed to enhance safety by providing real-time gas leakage monitoring and automatic emergency response. It integrates gas sensing, embedded control, and GSM communication to deliver timely alerts and help reduce potential hazards in household and small-scale environments.

## Features

* Real-time gas leakage monitoring
* Automatic exhaust fan activation
* Audible buzzer alarm
* SMS notification via GSM module
* 20×4 I2C LCD for gas level and system status
* Configurable gas detection threshold

## Hardware Components

* Arduino Uno
* Gas Sensor
* GSM Module
* 20×4 I2C LCD
* Relay Module
* DC Exhaust Fan
* Buzzer
* Power Supply
* Jumper Wires

## Software

* Arduino IDE
* Embedded C++
* AT Commands for GSM Communication

## Repository Structure

```text
Gas-Leakage-Detector-using-Arduino-Uno-and-GSM-Module/
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

## System Operation

1. The gas sensor continuously monitors the surrounding gas concentration.
2. The Arduino Uno reads the sensor value.
3. If the gas level is below the predefined threshold:

   * Exhaust fan remains OFF.
   * Buzzer remains OFF.
   * LCD displays the current gas level.
4. If the gas level exceeds the threshold:

   * Exhaust fan turns ON.
   * Buzzer sounds an alarm.
   * GSM module sends an SMS alert to the designated phone number.
   * LCD displays a gas leakage warning.
5. Once the gas level returns to a safe level, the exhaust fan and buzzer are automatically turned OFF.

## Hardware Documentation

The **hardware** folder contains:

* Circuit Diagram
* Schematic Diagram

## Source Code

The Arduino program is available in the **code** folder.

Before uploading the program, replace:

```text
YOUR_PHONE_NUMBER
```

with your own mobile number, including the country code.

Example:

```text
+60123456789
```

## Future Improvements

* IoT-based remote monitoring
* Mobile application integration
* Cloud data logging
* Multiple gas sensor support
* Email and push notifications
* Battery backup system

## Skills Demonstrated

* Embedded Systems
* Arduino Programming
* Sensor Interfacing
* GSM Communication
* Relay Control
* LCD Interfacing
* Safety Monitoring Systems

## Author

**Reeshaleni D/O Balakrishenan**

Individual Diploma Final Year Project

Diploma in Computer Electronics Engineering

Politeknik Merlimau Melaka (PMM)
