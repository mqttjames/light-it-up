// Light It Up! - Arduino Game Control
// Controls: Start Button, End Button, Light-Up Button
// Outputs: Buzzer + LED Bulb

// Pin mapping
const int startButton = 2;
const int endButton = 3;
const int lightUpButton = 4;
const int bulbPin = 9;     // via TIP120 transistor
const int buzzerPin = 10;

void setup() {
  pinMode(startButton, INPUT_PULLUP);
  pinMode(endButton, INPUT_PULLUP);
  pinMode(lightUpButton, INPUT_PULLUP);
  pinMode(bulbPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(bulbPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Start Button pressed
  if (digitalRead(startButton) == LOW) {
    buzz(200);
  }

  // End Button pressed
  if (digitalRead(endButton) == LOW) {
    buzz(500);
    digitalWrite(bulbPin, HIGH);  // Auto light up
    delay(2000);
    resetGame();
  }

  // Light-Up Button pressed
  if (digitalRead(lightUpButton) == LOW) {
    digitalWrite(bulbPin, HIGH);
    buzz(1000);
    delay(2000);
    resetGame();
  }
}

void buzz(int duration) {
  digitalWrite(buzzerPin, HIGH);
  delay(duration);
  digitalWrite(buzzerPin, LOW);
}

void resetGame() {
  digitalWrite(bulbPin, LOW);
  digitalWrite(buzzerPin, LOW);
}
