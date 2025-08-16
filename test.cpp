const int ledPins[] = {2, 3, 4, 5};
const int buttonPins[] = {A0, A1, A2, A3};
// const int buzzerPin = 10;

const int maxRounds = 100;
int sequence[maxRounds];
int currentLevel = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP); // Using internal pull-up resistors
  }
  pinMode(buzzerPin, OUTPUT);
  randomSeed(analogRead(A0)); // Seed random from noise
  startGame();
}

void loop() {
  playSequence();
  if (!getPlayerInput()) {
    gameOver();
    startGame();
  } else {
    delay(1000); // Next round
    currentLevel++;
    if (currentLevel >= maxRounds) {
      victory();
      startGame();
    }
  }
}

void startGame() {
  currentLevel = 1;
  for (int i = 0; i < maxRounds; i++) {
    sequence[i] = random(0, 4); // Random number from 0 to 3
  }
}

void playSequence() {
  for (int i = 0; i < currentLevel; i++) {
    int led = sequence[i];
    digitalWrite(ledPins[led], HIGH);
    tone(buzzerPin, 200 + led * 100, 200);
    delay(500);
    digitalWrite(ledPins[led], LOW);
    delay(200);
  }
}

bool getPlayerInput() {
  for (int i = 0; i < currentLevel; i++) {
    int buttonPressed = waitForButton();
    if (buttonPressed != sequence[i]) {
      return false;
    }
  }
  return true;
}

int waitForButton() {
  while (true) {
    for (int i = 0; i < 4; i++) {
      if (digitalRead(buttonPins[i]) == LOW) {
        tone(buzzerPin, 200 + i * 100, 100);
        digitalWrite(ledPins[i], HIGH);
        delay(300);
        digitalWrite(ledPins[i], LOW);
        while (digitalRead(buttonPins[i]) == LOW); // wait for release
        return i;
      }
    }
  }
}

void gameOver() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) digitalWrite(ledPins[j], HIGH);
    tone(buzzerPin, 100, 500);
    delay(500);
    for (int j = 0; j < 4; j++) digitalWrite(ledPins[j], LOW);
    delay(500);
  }
}

void victory() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i % 4], HIGH);
    tone(buzzerPin, 400 + (i * 50), 100);
    delay(100);
    digitalWrite(ledPins[i % 4], LOW);
  }
}
