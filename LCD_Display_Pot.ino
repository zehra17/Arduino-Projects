#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);


int potPin = A0;  
int potValue = 0; 


void setup() {

  lcd.begin(16, 2); 
  lcd.print("Pot Value:"); 

}

void loop() {

  potValue = analogRead(potPin);
  lcd.setCursor(0, 1);
  lcd.print(potValue);
  delay(200);  

}

