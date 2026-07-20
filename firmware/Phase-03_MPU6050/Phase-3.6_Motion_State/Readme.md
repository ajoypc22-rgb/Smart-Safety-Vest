# Phase 3.6 – Worker Motion State Machine

## Project
**Smart Safety Vest**

## Firmware
Phase-3.6_Motion_State_Machine.ino

## Version
v1.6

## Objective

The objective of this phase is to detect the worker's body posture in real time using the MPU6050 sensor. By calculating the Pitch and Roll angles, the system determines whether the worker is standing normally, leaning forward, leaning backward, leaning to the left, or leaning to the right.

This phase establishes the foundation for the upcoming Fall Detection Engine.

---

# Hardware Used

- ESP32 DevKit V1
- MPU6050 Accelerometer & Gyroscope Module

---

# Software Used

- Arduino IDE
- Wire Library
- MPU6050 Library

---

# Features

- MPU6050 Initialization
- Moving Average Filter
- Automatic Calibration
- Pitch Angle Calculation
- Roll Angle Calculation
- Reference Angle Generation
- Real-Time Tilt Measurement
- Worker Motion State Machine
- State Change Detection
- Serial Monitor Output

---

# Sensor Mounting Position

The MPU6050 sensor is mounted vertically on the **right side of the worker's chest**.

The complete motion detection algorithm, angle calculation, and thresholds are designed specifically for this mounting orientation.

---

# Motion States

The system currently supports five body posture states.

| State | Description |
|--------|-------------|
| STANDING | Worker is standing normally |
| FORWARD_LEAN | Worker bends forward |
| BACKWARD_LEAN | Worker bends backward |
| LEFT_LEAN | Worker leans toward the left |
| RIGHT_LEAN | Worker leans toward the right |

---

# Detection Threshold

Current threshold values used in the system:

| Parameter | Value |
|-----------|-------|
| Pitch Threshold | ±20° |
| Roll Threshold | ±20° |

These values were determined experimentally after multiple real-world tests.

---

# Working Principle

1. Read raw accelerometer values from the MPU6050.
2. Apply a Moving Average Filter to reduce sensor noise.
3. Calculate Pitch and Roll angles.
4. Perform Automatic Calibration to save the worker's normal standing posture.
5. Calculate real-time tilt angles by comparing current angles with the reference angles.
6. Compare the tilt values with predefined thresholds.
7. Determine the worker's current body posture.
8. Detect state changes and print the updated state to the Serial Monitor.

---

# Program Flow

```text
Start

↓

Initialize ESP32

↓

Initialize MPU6050

↓

Automatic Calibration

↓

Save Reference Pitch & Roll

↓

Read MPU6050 Data

↓

Apply Moving Average Filter

↓

Calculate Pitch & Roll

↓

Calculate Tilt Angles

↓

Compare with Thresholds

↓

Determine Motion State

↓

Print New State

↓

Repeat
```

---

# Expected Serial Output

```
Worker State : STANDING

Worker State : FORWARD LEAN

Worker State : BACKWARD LEAN

Worker State : LEFT LEAN

Worker State : RIGHT LEAN
```

---

# Validation Results

The motion state machine was tested by manually changing the worker's body posture.

| Body Position | Result |
|--------------|--------|
| Standing | Passed |
| Forward Lean | Passed |
| Backward Lean | Passed |
| Left Lean | Passed |
| Right Lean | Passed |

All five motion states were successfully detected.

---

# Applications

This module can be used as the foundation for:

- Worker Safety Monitoring
- Smart PPE
- Industrial Safety Systems
- Construction Worker Monitoring
- Elderly Care Systems
- Health Monitoring Systems

---

# Limitations

- Only body posture detection is implemented.
- No fall detection is included in this phase.
- No emergency alert generation.
- No GPS integration.
- No LoRa communication.

These features will be implemented in the next phases.

---

# Next Phase

## Phase 3.7 – Fall Detection Engine

Upcoming features:

- Free Fall Detection
- Impact Detection
- Lying Position Detection
- Fall Confirmation Timer
- False Alarm Reduction
- FALL_DETECTED State

---

# Conclusion

Phase 3.6 successfully implements a complete Worker Motion State Machine capable of recognizing five different body postures using MPU6050 orientation data. With automatic calibration, moving average filtering, and real-time state detection, this module provides a reliable foundation for the Fall Detection Engine that will be developed in the next phase.

---

# Phase Status

**Completed**
