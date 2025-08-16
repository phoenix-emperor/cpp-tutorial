// C++ code
//
int btn1 = 0;

int btn2 = 0;

int btn3 = 0;

int btn4 = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  btn1 = digitalRead(A0);
  btn2 = digitalRead(A1);
  btn3 = digitalRead(A2);
  btn4 = digitalRead(A3);
  if (btn1 == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  if (btn2 == HIGH) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  if (btn3 == HIGH) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  if (btn4 == HIGH) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}