# SMART-IRON-BOX

# Smart Iron Box

The **Smart Iron Box** is an automated solution designed to enhance safety and energy efficiency while ironing clothes. This project uses sensors and servos to detect when the iron box is left unattended and automatically lifts it, cutting off the power to prevent accidents.

## Table of Contents
- [Introduction](#introduction)
- [Components Required](#components-required)
- [How It Works](#how-it-works)
- [Wiring Diagram](#wiring-diagram)
- [Code](#code)
- [Applications](#applications)
- [Future Improvements](#future-improvements)

## Introduction
This project is designed to solve the issue of leaving an iron box on, which could potentially burn clothes or cause accidents even if the iron box has an auto cutoff feature. The system detects whether the user is holding the iron box and powers it off and lifts it if left unattended for a certain amount of time.

## Components Required
- A Normal Iron Box
- ESP32 Module
- Two 110g Servos
- 5V Relay
- IR Sensor
- 12V Adapter
- IC 7805 (Voltage Regulator)
- Various Wires

## How It Works
1. An **IR sensor** is placed on the handle of the iron box to detect the presence of a hand.
2. If no hand is detected for **10 seconds**, the **ESP32** triggers the **relay**, cutting off the power to the iron box.
3. At the same time, two **servo motors** rotate by 90 degrees to lift the iron box slightly off the surface, preventing any damage to clothes or the ironing surface.
4. When the hand is detected again, the system restores power to the iron box, and the servos return it to its normal position.

### Power Supply
- A **12V adapter** is used to power the circuit.
- The **IC 7805** regulates the voltage down to 5V for the ESP32 and other components.

## Wiring Diagram
*Coming Soon*  
You can find the complete wiring diagram in the repository.

## Code
The project is controlled by an ESP32, and the code is written in Arduino. The key functionality involves reading the IR sensor output and controlling the servos and relay.  
*You can find the complete code in the repository under the `code` folder.*

## Applications
- **Energy Efficiency**: Automatically turns off the iron box when not in use, saving power.
- **Safety**: Reduces the risk of accidents or burnt clothes.
- **Customization**: The lifting and lowering mechanism can be adjusted based on user preferences or specific garment types.
- **Commercial Use**: Can be adapted for use in laundry centers, hotels, and garment factories for improved productivity.

## Future Improvements
- Add a temperature sensor for more refined control of the iron box.
- Integrate a mobile app for remote control and monitoring.
- Implement machine learning to detect different ironing patterns and automate further tasks.


