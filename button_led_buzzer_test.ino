const int button1Pin = 2;   // Button 1 = toggle LED
const int button2Pin = 3;   // Button 2 = force ON
const int button3Pin = 4;   // Button 3 = force OFF
const int ledPin = 13;      // LED
const int buzzerPin = 9;    // Buzzer

int ledState = LOW;         
int lastButton1State = HIGH; 

void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void beep(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(150);
    digitalWrite(buzzerPin, LOW);
    delay(150);
  }
}

void loop() {
  // --- Button 1: Toggle ---
  int button1State = digitalRead(button1Pin);
  if (button1State == LOW && lastButton1State == HIGH) {
    ledState = !ledState;              
    digitalWrite(ledPin, ledState);
    beep(1);  // buzz once
    delay(200);                        
  }
  lastButton1State = button1State;

  // --- Button 2: Force ON ---
  if (digitalRead(button2Pin) == LOW) {
    ledState = HIGH;
    digitalWrite(ledPin, ledState);
    beep(2); // buzz twice
    delay(200); 
  }

  // --- Button 3: Force OFF ---
  if (digitalRead(button3Pin) == LOW) {
    ledState = LOW;
    digitalWrite(ledPin, ledState);
    beep(3); // buzz three times
    delay(200); 
  }
}
