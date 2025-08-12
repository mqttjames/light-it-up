# Light It Up! – Arduino Board Game

**Light It Up!** is an educational e-waste and energy efficiency board game with a real-world interactive component.  
Using an Arduino Uno, a 16x2 LCD display, an LED bulb, and 3 buttons, the game simulates the process of collecting points, racing against time, and lighting up a bulb when a player reaches the winning threshold.

---

## 🎯 Features
- **LCD Countdown Timer** – Displays the remaining time (default: 15 minutes).
- **Light-Up Button** – Instantly lights the bulb when the first player reaches the winning threshold.
- **Start Button** – Starts a new game session.
- **End Button** – Ends the game early (if time runs out or manually).
- **LED Bulb** – Lights up when the winning condition is met.

---

## 🛠 Hardware Required
- Arduino Uno
- 16x2 LCD Display (with parallel pins)
- 1x LED bulb (or small LED)
- 220Ω resistor (for the LED)
- 3 push buttons:
  - **Start Button**
  - **End Button**
  - **Light-Up Button**
- Breadboard & jumper wires

---

## ⚡ How It Works
1. **Press START** – The LCD shows "Game Started!" and begins the 15-minute countdown.
2. **Play the board game** – Players track points on a scoresheet.
3. **Light-Up Button** – When a player reaches the threshold:
   - LED bulb turns on.
   - LCD shows "Bulb Lit Up!".
   - Game ends.
4. **End Button** – Ends the game early and lights the bulb automatically.

---

## ⏱ Winning Threshold
- **2–3 Players** → 20 Points
- **4–6 Players** → 15 Points  
If no one reaches the threshold in 15 minutes, the player with the highest score wins.

---

## 🔌 Wiring Notes
- **LCD** – Connect according to the pins in `lcd_display.cpp`.
- **LED Bulb** – Connect with a 220Ω resistor to pin 13.
- **Buttons** – Connect each button to the assigned pin with `INPUT_PULLUP`.

---

## 📚 Educational Value
- **E-Waste** – Demonstrates the lifecycle of electronics through game zones and decision-making.
- **Energy Efficiency** – Players must be strategic about resource management to reach the light-up threshold quickly.

---

## 📜 License
This project is licensed under the MIT License – feel free to modify and share.
