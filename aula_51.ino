

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);


void setup()
{
 
  
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura: ");
  
}

void loop()
{
  
 
  // faz a leitura da temperatura pelo sensor A0 do ard.
  int sensorValue = analogRead(A0);

  // Converte a temp. para graus celsiu

float  temp = (sensorValue * 5.0 / 1024.0 - 0.5 ) * 100.0; 
  
  // Mostra a temperatura no display LCD
  lcd.setCursor(8, 1);
  lcd.print(temp);
  lcd.print(" C");
  
}