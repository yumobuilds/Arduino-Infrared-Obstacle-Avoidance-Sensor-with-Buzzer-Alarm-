const int sensorPin = 3;     // IR obstacle sensor pin
const int buzzerPin = 13;    // buzzer pin
int sensorState = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  sensorState = digitalRead(sensorPin);

  if (sensorState == LOW) {
    // object detected -> fast beeping
    digitalWrite(buzzerPin, HIGH);
    delay(80);
    digitalWrite(buzzerPin, LOW);
    delay(80);
  } else {
    // no object -> silent
    digitalWrite(buzzerPin, LOW);
  }
}