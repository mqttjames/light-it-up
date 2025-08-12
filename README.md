# Light It Up! – Arduino Board Game

## Overview
**Light It Up!** is an educational board game integrating concepts of **e-waste management** and **energy efficiency**.  
Players move around a circular board collecting points, avoiding hazards, and processing e-waste in the most efficient way possible.  
The Arduino Uno controls the electronic feedback system with buttons, a buzzer, and a light bulb that marks victory.

---

## Features
- Interactive **Arduino Uno** integration
- **Start**, **End**, and **Light-Up** buttons for gameplay control
- **LED Bulb** that lights up upon reaching the victory threshold
- **Buzzer** feedback for start, win, and end
- Educational mechanics tied to sustainability concepts

---

## Winning Conditions
- **Light-Up Victory**: First player to reach the Energy Threshold (20 points for 2–3 players, 15 points for 4–6 players) and press the Light-Up button.
- **Time Victory**: If no one reaches the threshold in the allotted 15 minutes, the player with the highest Energy score wins.

---

## Repository Contents
- `LightItUp_Game.ino` → Arduino code for controlling buttons, buzzer, and light bulb.
- `Game_Instructions.md` → Full game setup and gameplay rules.
- `wiring_diagram.png` → Circuit diagram for assembling the game’s electronic components.
- `README.md` → This file.

---

## Quick Start
1. Assemble components according to the wiring diagram.
2. Upload `LightItUp_Game.ino` to your Arduino Uno using the [Arduino IDE](https://www.arduino.cc/en/software).
3. Set up the board game pieces and score sheets.
4. Press the **Start** button to begin play.

---

## Full Instructions
📄 See the [Game Instructions](instructions.md) for full rules, setup guide, and gameplay flow.

---

## Materials List
- Voltaat Uno R3 (ATmega328P)
- Small LED bulb
- Buzzer
- Start Button, End Button, Light-Up Button
- Resistors (10 kΩ for pull-down/pull-up)
- Breadboard, jumper wires
- Power supply (USB or 9V DC adapter)

---

## Educational Value
**E-Waste**: Demonstrates the importance of proper e-waste processing by rewarding sustainable methods and penalizing hazardous practices.  
**Energy Efficiency**: Encourages players to maximize net gains, simulating how efficiency impacts energy savings in real-world scenarios.

---

## License
MIT License – free to use, modify, and distribute.
