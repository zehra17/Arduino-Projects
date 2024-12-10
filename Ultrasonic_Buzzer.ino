#define ecoPin 6
#define trigPin 7
#define buzzerPin 8

int maximumRange = 50;
int minimumRange = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(ecoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int measurement = distance(maximumRange, minimumRange);
  melody(measurement * 10);
}

int distance(int maxRange, int minRange) {
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(ecoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  if (distance >= maxRange || distance <= minRange) {
    return 0;
  }
  return distance;
}

int melody(int fly) {
  tone(buzzerPin, 440);
  delay(fly);
  noTone(buzzerPin);
  delay(fly);
}
