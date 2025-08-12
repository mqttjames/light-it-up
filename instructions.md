# Light It Up! – Game Instructions

## Objective
Be the first player to reach the Light-Up Threshold **or** have the highest score when time runs out.

---

## Components
- Circular game board with spaces for collecting e-waste, hazards, and processing zones
- Energy & Water score tracking sheet for each player
- Processing buttons connected to the Arduino Uno
- Light-Up button (triggers bulb if threshold reached)
- Start and End buttons (start/end the game round)
- LED bulb as central light
- Buzzer for feedback

---

## Setup
1. Place the game board in the center of all players.
2. Give each player a score sheet to track Energy and Water points.
3. Place the Arduino unit with the 3 buttons and LED bulb in an accessible area.
4. Decide game duration (default is **15 minutes**).
5. Set the Light-Up Threshold:
   - **20 points** for 2–3 players
   - **15 points** for 4–6 players

---

## How to Play
1. **Start the Game** – Press the Start button. The buzzer will sound, and players can begin.
2. On your turn, roll the die and move clockwise around the board.
3. Take the action of the space you land on:
   - **E-Waste Collection** – Gain Energy & Water points.
   - **Hazard Space** – Lose Energy and/or Water points.
   - **Processing Zone** – Adjust your points based on your net score:
     - If **net gain ≥ 6**, gain an Efficiency Bonus (+2 Energy points).
     - If **net gain ≤ 0**, lose 2 Energy points.
4. Use the score sheet to keep track of your Energy and Water points.
5. If your total Energy points reach the Light-Up Threshold, press the Light-Up button to light the bulb and end the game instantly.
6. If time runs out and no one reaches the threshold, press the End button and the player with the highest Energy score wins.

---

## Winning
- **Light-Up Victory**: First to reach the threshold and press the Light-Up button.
- **Time Victory**: Highest Energy score when time ends.

---

## Notes
- Innovation Cards may increase or decrease points depending on card effects.
- The buzzer will sound for Start, Light-Up, and End events.
- Reset the game using the Reset button before starting a new round.
