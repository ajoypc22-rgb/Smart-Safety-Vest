# Phase 3.7 – Fall Detection Engine

## Overview

This phase implements the complete Fall Detection Engine for the Smart Safety Vest.

The system combines multiple motion events to accurately detect a worker fall while minimizing false alarms.

Instead of relying on a single sensor event, the algorithm validates a fall using:

- Free Fall Detection
- Impact Detection
- Lying Position Detection
- Fall Decision Logic
- Fall Latching
- Recovery Detection

This significantly improves reliability compared to single-threshold methods.

---

## Features

### Free Fall Detection

Detects sudden weightlessness using total acceleration.

Condition

Acceleration < 0.70 G

---

### Impact Detection

Detects strong collision with the ground.

Condition

Acceleration > 1.70 G

---

### Lying Position Detection

Confirms that the worker remains in a horizontal position.

Conditions

- Tilt > 70°
- Duration > 1.5 seconds

---

### Fall Decision Engine

A fall is confirmed only when:

Free Fall

↓

Impact

↓

Lying Position

↓

Fall Detected

---

### Fall Latching

Once a fall is detected,

the alarm remains active

until the worker returns to a standing posture.

---

### Recovery Detection

Automatically clears the fall status when

Tilt Pitch < 10°

Tilt Roll < 10°

Worker is no longer lying.

---

## Motion State Machine

States implemented

- Standing
- Forward Lean
- Backward Lean
- Left Lean
- Right Lean
- Lying
- Fall Detected

---

## Hardware Used

- ESP32
- MPU6050
- Arduino IDE

---

## Algorithm

Read MPU6050

↓

Calculate Pitch & Roll

↓

Detect Free Fall

↓

Detect Impact

↓

Detect Lying Position

↓

Fall Decision

↓

Latch Fall

↓

Recovery Detection

---

## Output

Serial Monitor Example

Worker State : STANDING

Worker State : FORWARD LEAN

Worker State : LYING

Worker State : FALL DETECTED

---

## Completed

✔ Motion Filtering

✔ Lean Detection

✔ Lying Detection

✔ Free Fall Detection

✔ Impact Detection

✔ Fall Detection Engine

✔ Fall Latching

✔ Recovery Detection

---
