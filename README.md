# Arduino Projects

## Lesson 1: LED Blinking Sequence

This lesson introduces the basics of controlling digital pins on an Arduino. You will learn how to:

* Set pin modes as `OUTPUT`
* Turn LEDs on and off using `digitalWrite()`
* Use `delay()` to control timing
* Organize code using functions for cleaner, more scalable programs

### Description

We use three LEDs:

* **Red** on pin **8**
* **Green** on pin **9**
* **Blue** on pin **10**

The goal is to blink:

* Red LED: **1 time**
* Green LED: **2 times**
* Blue LED: **3 times**


### What You Learned

* Basic Arduino pin control
* Timing using delays
* Using functions to simplify repetitive code


## Lesson2: Binary Counting with LEDs

This project demonstrates how to represent numbers **1 to 10 in binary** using **four LEDs** connected to digital pins 8, 9, 10, and 11 on an Arduino board.

The code for this lesson is saved separately as **lessonBinaryLEDs.ino**.

---

## 📘 Project Description

This lesson uses four LEDs to display binary numbers. Each LED represents one binary bit:

* **LED on pin 8** → Least Significant Bit (LSB)
* **LED on pin 9**
* **LED on pin 10**
* **LED on pin 11** → Most Significant Bit (MSB)

The program cycles from **1 to 10**, lighting LEDs according to the binary representation of each number.

Each number stays on for **2 seconds** before switching to the next.

---

## 🧠 What You Learn

* How binary numbers work (1 = 0001, 2 = 0010, 3 = 0011...)
* How to control multiple LED outputs
* How to display values using digitalWrite()
* How timing works using delay()
* How integers and pin variables make code cleaner

---

## 🔌 Hardware Required

* Arduino Uno (or compatible board)
* 4 LEDs
* 4 resistors (220Ω recommended)
* Jumper wires
* Breadboard

---

## 🛠️ Wiring Guide

Each LED is connected:

* **Anode (long leg)** → Arduino pins **8, 9, 10, 11**
* **Cathode (short leg)** → **220Ω resistor** → **GND**

---

## 📊 Binary Table (1 to 10)

| Decimal | Binary | LED pattern (MSB → LSB) |
| ------- | ------ | ----------------------- |
| 1       | 0001   | 0001                    |
| 2       | 0010   | 0010                    |
| 3       | 0011   | 0011                    |
| 4       | 0100   | 0100                    |
| 5       | 0101   | 0101                    |
| 6       | 0110   | 0110                    |
| 7       | 0111   | 0111                    |
| 8       | 1000   | 1000                    |
| 9       | 1001   | 1001                    |
| 10      | 1010   | 1010                    |

---

## ▶️ How It Works Step-by-Step

1. Four output pins are defined.
2. LEDs are turned ON/OFF to match the binary representation of each number.
3. The pattern stays for **2000 ms (2 seconds)**.
4. Program loops continuously.

---

# Potentiometer Voltage Reader (Arduino)

## Overview
This Arduino sketch reads the analog voltage from a potentiometer on pin A2, prints the voltage to the Serial Monitor, and turns an LED on pin 9 ON only when the voltage reaches 5.0 V.

## How It Works
- `analogRead(A2)` reads a value from 0–1023 based on the potentiometer position.
- The code converts this value to voltage using:
  V2 = (5.0 / 1023.0) * readVal
- The voltage is printed through Serial at 9600 baud.
- If the voltage equals 5.0 V, the LED on pin 9 is turned ON.
- Otherwise, the LED stays OFF.
- The loop repeats every 500 ms.


# Arduino Potentiometer LED Control

## Requirements
- Arduino Uno (or compatible)
- Potentiometer (≈10kΩ)
- LED
- 220Ω resistor
- Breadboard and jumper wires

## Pin Connections
- Potentiometer middle pin → A3  
- Potentiometer sides → 5V, GND  
- LED anode → Pin 6 (PWM)  
- LED cathode → GND (through 220Ω resistor)

## Functionality
- Reads analog value from potentiometer (0–1023)
- Scales value to PWM range (0–255)
- Controls LED brightness using `analogWrite`
- Prints PWM value to Serial Monitor (9600 baud)

## Core Logic
- `analogRead(A3)` → potentiometer input
- `LEDVal = (255.0 / 1023.0) * potVal`
- `analogWrite(6, LEDVal)`

## Notes
- Pin 6 supports PWM
- PWM range: 0–255
- ADC resolution: 10-bit (0–1023)


# Potentiometer Controlled Buzzer (Arduino)

## Description
This project demonstrates how to control a **buzzer** using a **potentiometer** with an Arduino.  
The Arduino continuously reads the analog value from the potentiometer. When this value exceeds a predefined threshold, the buzzer is activated for a short duration.  
The potentiometer readings are also displayed on the **Serial Monitor** for monitoring and debugging.

---

## Components Used
- Arduino board (Uno / Nano / Mega)
- Potentiometer (e.g., 10kΩ)
- Buzzer
- Jumper wires
- Breadboard (optional)

---

## Pin Configuration

| Component       | Arduino Pin |
|-----------------|-------------|
| Buzzer (+)      | Digital Pin 8 |
| Buzzer (–)      | GND |
| Potentiometer (Middle pin) | A3 |
| Potentiometer (Side pins)  | 5V, GND |

---

## How It Works
1. The potentiometer provides a variable voltage between **0–5V**.
2. `analogRead()` converts this voltage into a value between **0–1023**.
3. The value is printed to the Serial Monitor.
4. If the value exceeds **1000**, the buzzer turns ON for **300 ms**, then turns OFF.

---

## Code Behavior
- Continuous potentiometer monitoring
- Serial output at **9600 baud**
- Threshold-based buzzer activation

---

## Customization
- Adjust the sensitivity by changing the threshold value (`1000`)
- Modify the buzzer ON time by changing the delay duration
- Replace `delay()` with `millis()` for non-blocking control
- Use `tone()` for frequency-based sound output

---

## Notes
- Analog input range: **0–1023**
- Ensure correct grounding to avoid unstable readings
- Suitable for beginners learning analog input and digital output control

---
