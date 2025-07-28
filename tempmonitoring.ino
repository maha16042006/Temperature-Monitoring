#include <LiquidCrystal.h>

// Initialize LCD pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int tempPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temp: ");
  Serial.begin(9600); // Optional, for debugging
}

void loop() {
  int reading = analogRead(tempPin);
  float voltage = reading * 5.0 / 1024.0;
  float tempC = voltage * 100;

  lcd.setCursor(6, 0); // Move cursor after "Temp: "
  lcd.print(" "); // Clear previous digits
  lcd.setCursor(6, 0);
  lcd.print(tempC);
  lcd.print((char)223); // Degree symbol
  lcd.print("C");

  Serial.print("Temperature: ");
  Serial.println(tempC);

  delay(1000);
}
