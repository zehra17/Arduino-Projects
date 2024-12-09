#define LED 2 

void setup() {
  Serial.begin(9600); 
  pinMode(LED, OUTPUT); 
}

float readTemperature() {
  int analogValue = analogRead(A0); 
  float voltage = analogValue * (5.0 / 1023.0); 
  float temperature = voltage * 100.0; 
  return temperature; 
}

void loop() {
  float temperature = readTemperature(); 
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");


  if (temperature < 25) {
    digitalWrite(LED, HIGH); 
  } else {
    digitalWrite(LED, LOW); 
  }

  delay(500); 
}


