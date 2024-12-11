int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {

  int redValue = random(0, 256);
  int greenValue = random(0, 256);
  int blueValue = random(0, 256);


  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);


  delay(500); 
}

