// Light It Up! – Game Control Code (Actual Game Version)

// Button 1 (pin 2) → Start 15-minute timer. LED lights up after timer. 
//                    Buzzer buzzes 1x at press, 3x when LED turns on.
// Button 2 (pin 3) → Instant win: LED instantly ON (ignores timer), buzzer buzzes 5x (1s interval), resets timer.
// Button 3 (pin 4) → End round, reset timer, LED OFF, buzzer buzzes 1x.

const int button1Pin = 2;
const int button2Pin = 3;
const int button3Pin = 4;
const int ledPin = 13;
const int buzzerPin = 9;

unsigned long startTime = 0;
bool timerRunning = false;
bool ledOn = false;

void beep(int times, int duration = 200, int pause = 200) {
  for (int i = 0; i < times; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(duration);
    digitalWrite(buzzerPin, LOW);
    delay(pause);
  }
}

void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(ledPin, LOW);    // Ensure LED is OFF at start
  digitalWrite(buzzerPin, LOW); // Ensure buzzer is OFF at start
}

void loop() {
  // --- Button 1: Start 15-min Timer ---
  if (digitalRead(button1Pin) == LOW && !timerRunning && !ledOn) {
    startTime = millis();
    timerRunning = true;
    beep(1);   // buzz once when button is pressed
    delay(300); // debounce
  }

  // Check if 15-min timer expired → LED ON + 3 buzzes
  if (timerRunning && !ledOn && millis() - startTime >= 15UL * 60UL * 1000UL) {
    digitalWrite(ledPin, HIGH);
    ledOn = true;
    beep(1);   // buzz 3x when LED turns on
    timerRunning = false; // stop timer after LED ON
  }

  // --- Button 2: Instant Win ---
  if (digitalRead(button2Pin) == LOW && !ledOn) {
    digitalWrite(ledPin, HIGH);
    ledOn = true;
    beep(1, 500, 500); // buzz 5x with 1 second interval
    timerRunning = false; // reset any timer
    delay(300); // debounce
  }

  // --- Button 3: End Round / Reset ---
  if (digitalRead(button3Pin) == LOW) {
    digitalWrite(ledPin, LOW);
    timerRunning = false;
    ledOn = false;
    beep(1); // buzz once to signal reset
    delay(300); // debounce
  }
}
