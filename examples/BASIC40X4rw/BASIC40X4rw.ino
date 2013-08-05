/*
  LiquidCrystal Library - display() and noDisplay()
 
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 
 This sketch prints "Hello World!" to the LCD and uses the 
 display() and noDisplay() functions to turn on and off
 the display.
 
 The circuit:
 * LCD RS pin to digital pin 12
 * LCD RW pin to digital pin 9
 * LCD EN pin to digital pin 11
 * LCD EN2 pin to digital pin 10

 * LCD D4 pin to digital pin 8
 * LCD D5 pin to digital pin 7
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 5
 

 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe 
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystalNew.h>
//RS,RW,EN,EN2,D4,D5,D6,D7
// initialize the library with the numbers of the interface pins
LiquidCrystalNew lcd(12,9,11,10,8,7,6,5);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(40, 4);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("0123456789012345678901234567890123456789");
  lcd.setCursor(0,1);
  lcd.print("ABCDEFGHKILMNOPQRSTUVWXYZABCDEFGHILMNOPQ");
    lcd.setCursor(0,2);
  lcd.print("0123456789012345678901234567890123456789");
  lcd.setCursor(0,3);
  lcd.print("ABCDEFGHKILMNOPQRSTUVWXYZABCDEFGHILMNOPQ");
}

void loop() {
  // Turn off the display:
  lcd.noDisplay();
  delay(500);
   // Turn on the display:
  lcd.display();
  delay(500);
}
