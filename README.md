# Fire Alarm System – 8051 Microcontroller Based

## Overview
This project is designed to **enhance public safety** by detecting and alerting occupants and emergency services during fire emergencies.  
It uses an **8051 microcontroller** to monitor **flame and gas sensors** and trigger audio-visual alerts when potential danger is detected.

---

## Purpose
- Provide **early warning** through clear audio and visual alerts.
- Notify the **fire department** in real-time (optional GSM module).
- Enable **prompt detection** to minimize damage and casualties.
- Offer **insurance benefits** for equipped buildings.

---

## Key Components
- **Microcontroller**: 8051 series (e.g., AT89C2051)
- **Sensors**: Flame sensor, Gas sensor
- **Other Electronics**:
  - Crystal Oscillator (12 MHz)
  - Diodes
  - Transformer
  - Capacitors
  - Connectors
  - Relay
  - DC Motor (optional for ventilation control)
  - Buzzer
  - LED Display

---

##  Implementation Steps
1. **Power Supply Setup**  
   - Step-down transformer → bridge rectifier via RLMT connector  
   - Smooth voltage using 1000μF capacitor (35V rating)

2. **Voltage Regulation**  
   - LM7805 regulator maintains a steady 5V output  
   - Filter with 10μF capacitor

3. **Microcontroller Initialization**  
   - Power on pin 2.0  
   - 12 MHz crystal oscillator on pins 4 & 5 for clock signal

4. **Reset Configuration**  
   - RC network (capacitor + 1kΩ resistor) on pin 1

5. **Sensor Integration**  
   - Sensors detect changes → microcontroller triggers alert  
   - Audio & visual signals via buzzer + LCD display

---

##  Functional Workflow
1. **Detection Phase**  
   - Sensors detect smoke/gas → convert to electrical signal  
   - Adjustable sensitivity for accuracy

2. **Alert Mechanisms**  
   - Audio buzzer  
   - Visual LCD display  
   - Optional SMS alerts via GSM module  
   - Optional vibrating alert

3. **Safety Response**  
   - Early-stage fire suppression actions can be triggered

---

