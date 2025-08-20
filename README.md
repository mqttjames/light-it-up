# Light It Up! – Arduino Board Game 🎮💡

## Overview
**Light It Up!** is an educational board game integrating concepts of **e-waste management ♻️** and **energy efficiency ⚡**.  
Players move around a circular board collecting points, avoiding hazards, and processing e-waste in the most efficient way possible.  
The Arduino Uno controls the electronic feedback system with buttons, a buzzer, and a light bulb that marks victory 💡.

---

## Features ✨
- Interactive **Arduino Uno** integration 🖥️
- **Button 1** – Start Timer ⏱️ (15 minutes)
- **Button 2** – Instant Win 🏆
- **Button 3** – End Round / Reset 🔄
- **LED Bulb** that lights up upon reaching the victory threshold 💡
- **Buzzer** feedback 🔊 for start, win, and reset
- Educational mechanics tied to sustainability concepts 🌱

---

## Winning Conditions 🏁
- **Light-Up Victory**: First player to reach the Energy Threshold (20 points for 2–3 players, 15 points for 4–6 players) and press the Light-Up button (LED turns on) 💡.  
- **Time Victory**: If no one reaches the threshold in 15 minutes ⏰, the player with the highest Energy score wins.

---

## Button Functions 🎛️
| Button | Function |
|--------|----------|
| **Button 1** | Starts the 15-minute timer ⏱️. LED lights up automatically after the timer. Buzzer buzzes once when pressed and three times when the LED turns on 🔊. |
| **Button 2** | Instant Win 🏆: LED lights up immediately (ignores timer). Buzzer buzzes 5 times with 1-second intervals 🔊🔊🔊🔊🔊. Resets any ongoing timer. |
| **Button 3** | Ends the round 🔄: turns off LED, stops timer, buzzer buzzes once 🔊 to signal reset. |

---

## Repository Contents 📂
- `game_main.ino` → Main Arduino code for controlling buttons, buzzer, and LED 💡🔊.
- `instructions.md` → Full game setup and gameplay rules 📄.
- `wiring_diagram.png` → Circuit diagram for assembling electronic components 🔌.
- `button_led_buzzer_test.ino` → Test code for checking buttons, LED, and buzzer functionality 🛠️.
- `gameboard_design.xcs` → 3D design file for the board game layout 🎨.
- `led_cover.stl` → 3D printable LED cover for the central bulb 🖤💡.
- `player_tokens/` → Files or designs for player tokens 🎲.
- `README.md` → This file 📘.

---

## Quick Start ⚡
1. Assemble components according to the wiring diagram 🔧.
2. Upload `game_main.ino` to your Arduino Uno using the [Arduino IDE](https://www.arduino.cc/en/software) 🖥️.
3. Set up the board game pieces and score sheets 🎲.
4. Press the **Start (Button 1)** to begin the round ⏱️.
5. Players move around the circular board, apply zone effects, and use buttons according to game rules 🌀.

---

## Materials List 🛠️
- Voltaat/Arduino Uno R3 (ATmega328P) 🖥️
- Small LED bulb 💡
- Buzzer 🔊
- Mini Momentary Push Buttons 🔘
- Breadboard, jumper wires, alligator clip cables 🔌
- Power supply (USB or 9V DC adapter) ⚡

---

## Educational Value 📚
**E-Waste ♻️**: Demonstrates the importance of proper e-waste processing by rewarding sustainable methods and penalizing hazardous practices.  
**Energy Efficiency ⚡**: Encourages players to maximize net gains, simulating how efficiency impacts energy savings in real-world scenarios 🌱.

---

## License 📝
MIT License – free to use, modify, and distribute.
