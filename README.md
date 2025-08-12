# Light It Up! – Arduino-Enhanced Board Game

**Light It Up!** is an educational and interactive board game that teaches players about **e-waste recycling** and **energy efficiency**.  
Players move around a circular board, collecting and processing e-waste while balancing their water and energy usage.  
The goal is to be the first to reach the **Light-Up Threshold** or have the highest score when time runs out.

This repository contains the **Arduino code and wiring** that powers the game's physical elements — including a central light bulb and buzzer for audio feedback.

---

## 🎯 Gameplay Overview

- **Theme:** E-waste recycling & energy efficiency  
- **Players:** 2–6  
- **Average Play Time:** ~15 minutes  
- **Winning Conditions:**
  - **Light-Up Victory:** The first player to reach the point threshold (20 points for 2–3 players, 15 points for 4–6 players) presses the Light-Up Button, turning on the bulb and winning instantly.
  - **Time Victory:** If time runs out before anyone reaches the threshold, the player with the highest score wins, and the End Button is pressed to light the bulb.

---

## 🎮 How It Works in the Game
1. **Start of Game:** Press the **Start Button** — the buzzer beeps to signal the game has begun.
2. **During Play:** Players move around the board, collect points, and encounter hazards.
3. **Threshold Reached:** If a player hits the threshold, they press the **Light-Up Button** — the bulb turns on and the buzzer sounds.
4. **Time Runs Out:** If no one reaches the threshold in time, press the **End Button** — the bulb still lights and the buzzer sounds.

---

## 🛠 Hardware Features
- **Start Button** – Begins the game; buzzer sounds to confirm start.
- **Light-Up Button** – Player presses this when reaching the score threshold; triggers bulb + buzzer.
- **End Button** – Used when the timer runs out; triggers bulb + buzzer.
- **Buzzer** – Provides audio feedback for start and victory events.
- **LED Bulb** – Lights up when the Light-Up or End Button is pressed.

---

## 📦 Required Components
- Voltaat Uno R3 (ATmega328P)
- 1 × Small LED bulb
- 3 × Push buttons (Start, Light-Up, End)
- 1 × Buzzer (passive or active)
- Resistors (10kΩ for buttons, ~220Ω for LED)
- Jumper wires & breadboard or PCB

---

## 💻 Code Files
- `main.ino` – Core Arduino logic.
- `tones.h` – Tone frequency definitions for buzzer sounds.
- `README.md` – Project documentation.

---

## 📚 Educational Value
- **E-Waste Awareness:** Teaches players how improper disposal impacts the environment.
- **Energy Efficiency:** Encourages strategic thinking on balancing energy gain with water conservation.
