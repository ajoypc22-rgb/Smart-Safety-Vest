# Smart Safety Vest
## Phase 3.8 – MPU6050 Module Finalization

---

# Overview

This phase finalizes the MPU6050-based Worker Motion Monitoring Module for the Smart Safety Vest project.

The module is capable of detecting:

- Worker Standing
- Forward Lean
- Backward Lean
- Left Lean
- Right Lean
- Lying Position
- Free Fall
- Impact
- Fall Detection
- Recovery after Fall

This marks the completion of the complete MPU6050 Motion Detection subsystem before integrating additional hardware modules.

---

# Project Status

**Phase:** 3.10

**Status:** Completed

**Firmware Version:** v2.1 Stable

**Module Status:** Production Ready

---

# Hardware Used

- ESP32 DevKit V1
- MPU6050 6-Axis Accelerometer & Gyroscope
- Breadboard
- Jumper Wires
- USB Cable

---

# Libraries

```
Wire.h
MPU6050.h
math.h
```

---

# Features

## Motion Detection

- Standing Detection
- Forward Lean Detection
- Backward Lean Detection
- Left Lean Detection
- Right Lean Detection

---

## Fall Detection

The fall detection algorithm uses three-stage verification.

### Stage 1

Free Fall Detection

↓

### Stage 2

Impact Detection

↓

### Stage 3

Lying Position Confirmation

↓

### Final Result

Fall Detected

---

## Lying Detection

The worker must remain in a horizontal position for 1.5 seconds before confirming the lying state.

---

## Recovery Detection

Once the worker returns to a normal standing position, the fall state is automatically cleared.

---

# Motion Detection Parameters

| Parameter | Value |
|-----------|-------|
| Pitch Threshold | 15° |
| Roll Threshold | 20° |
| Lying Angle | 70° |
| Lying Confirmation Time | 1500 ms |
| Free Fall Threshold | 0.80 g |
| Impact Threshold | 1.80 g |
| Fall Timeout | 6000 ms |

---

# Worker States

```
STANDING

FORWARD LEAN

BACKWARD LEAN

LEFT LEAN

RIGHT LEAN

LYING

FALL DETECTED
```

---

# Motion Detection Flow

```
Read MPU6050 Data
        │
        ▼
Filter Sensor Data
        │
        ▼
Calculate Pitch & Roll
        │
        ▼
Determine Motion State
        │
        ▼
Free Fall Detection
        │
        ▼
Impact Detection
        │
        ▼
Lying Confirmation
        │
        ▼
Fall Detection
        │
        ▼
Recovery Detection
```

---

# Testing Summary

| Test | Result |
|------|--------|
| Standing Detection | PASS |
| Forward Lean | PASS |
| Backward Lean | PASS |
| Left Lean | PASS |
| Right Lean | PASS |
| Free Fall Detection | PASS |
| Impact Detection | PASS |
| Lying Detection | PASS |
| Fall Detection | PASS |
| Recovery Detection | PASS |
| False Alarm Test | PASS |

---

# False Alarm Validation

The module was tested under normal worker activities.

Tested Activities:

- Walking
- Running
- Sitting
- Kneeling
- Forward Bending
- Picking Objects
- Body Rotation

No false fall detection was observed.

---

# Repository Contents

```
Phase-3.10-MPU6050-Module-Finalization/

│── Smart_Safety_Vest.ino
│── README.md
│── LICENSE
```

---

# Notes

- This release is the final stable version of the MPU6050 Motion Detection Module.
- No further firmware changes are planned for this module.
- Future project phases will integrate GPS, GSM, and cloud connectivity without modifying the motion detection algorithm.

---

# Next Phase

**Phase 4.0 – GPS Module Integration**

Upcoming objectives:

- GPS Location Tracking
- Worker Speed Estimation
- Distance Calculation
- Route Logging
- Location Sharing During Emergency

---

# Author

**Ajoy Das Team**

Project: Smart Safety Vest

Firmware Version: v2.1 Stable

Phase: 3.10 – MPU6050 Module Finalization
