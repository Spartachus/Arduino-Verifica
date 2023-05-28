#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int time=5000;

const int buttonPin1 = 12;
const int ledPin1 = 5;

const int buttonPin2 = 11;

int buttonState1 = 0;  

int buttonState2 = 0;  

void setup()
{
lcd.init();
lcd.backlight();
pinMode(ledPin1, OUTPUT);
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
}

void loop()
{
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);

if (buttonState1 == HIGH) {
    // turn LED on:
    lcd.clear();
    digitalWrite(ledPin1, HIGH);
    lcd.setCursor(0,0);
    lcd.print("LED SPENTO");
    lcd.setCursor(0,1);
    lcd.print("Summer House LLC");
  }
if (buttonState2 == HIGH) {
    // turn LED on:
    lcd.clear();
    digitalWrite(ledPin1, LOW);
    lcd.setCursor(0,0);
    lcd.print("LED ACCESO");
    lcd.setCursor(0,1);
    lcd.print("Summer House LLC");
  } 

}
