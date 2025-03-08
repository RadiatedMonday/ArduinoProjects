/*
SDA - A4
SDL - A5
VCC - 5V
GND - GND
*/
#define _LCD_TYPE 1

#include <Wire.h> // библиотека для управления устройствами по I2C 
#include <LCD_1602_RUS_ALL.h> // подключаем библиотеку для QAPASS 1602

LCD_1602_RUS LCD(0x27,16,2); // присваиваем имя LCD для дисплея

void setup() {
   LCD.init(); // инициализация LCD дисплея
   LCD.backlight(); // включение подсветки дисплея
   
   LCD.setCursor(1, 0);     // ставим курсор на 1 символ первой строки
   LCD.print("GITHUB");     // печатаем сообщение на первой строке
  
   LCD.setCursor(8, 1);        // ставим курсор на 1 символ второй строки
   LCD.print("ПРИВЕТ");  // печатаем сообщение на второй строке
}

void loop() {
   LCD.noDisplay(); // выключаем и включаем надпись на дисплее
   delay(1000);
   LCD.display();
   delay(1000);
}
