// LED Harp - LED turns OFF when corresponding LDR is dark (beam blocked)
// Works in Tinkercad: LED pins 2,3,4  |  LDR pins A0,A1,A2  |  Buzzer pin 8

const int ledPins[] = {2, 3, 4};
const int ldrPins[] = {A0, A1, A2};
const int tonesForString[] = {262, 294, 330}; // C4, D4, E4
const int buzzerPin = 8;

const int samples = 5;        // averaging samples
int threshold = 600;          // adjust this after checking Serial values (0-1023)

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], HIGH); // LEDs ON by default (beam on)
  }
  pinMode(buzzerPin, OUTPUT);
}

int avgAnalog(int pin) {
  long sum = 0;
  for (int i = 0; i < samples; i++) {
    sum += analogRead(pin);
    delay(5);
  }
  return sum / samples;
}

void loop() {
  int readings[3];
  int maxReading = -1;
  int maxIndex = -1;
  bool anyBlocked = false;

  // Read & average
  for (int i = 0; i < 3; i++) {
    readings[i] = avgAnalog(ldrPins[i]);
    // In your wiring: LESS light -> LDR resistance ↑ -> Vout ↑ -> analogRead ↑
    if (readings[i] > threshold) {        // blocked (dark)
      digitalWrite(ledPins[i], LOW);      // turn LED OFF when beam is blocked
      anyBlocked = true;
      if (readings[i] > maxReading) {
        maxReading = readings[i];
        maxIndex = i;
      }
    } else {
      digitalWrite(ledPins[i], HIGH);     // beam present, keep LED ON
    }
  }

  // Play tone for strongest blocked string, else silence
  if (anyBlocked && maxIndex >= 0) {
    tone(buzzerPin, tonesForString[maxIndex]);
  } else {
    noTone(buzzerPin);
  }

  // Debug: print readings and threshold
  Serial.print("T:");
  Serial.print(threshold);
  for (int i = 0; i < 3; i++) {
    Serial.print(" | L");
    Serial.print(i+1);
    Serial.print(": ");
    Serial.print(readings[i]);
  }
  Serial.println();

  delay(60);
}
