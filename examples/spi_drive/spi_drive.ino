/*
This is an example that use an MCP23s17 as GPIO
Extender and SPI. Library drives correctly even 2 chip-LCD's
with using just 3 wires!
 */
#include <SPI.h>
#include <LiquidCrystalNew.h>


//RS,RW,EN,EN2,D4,D5,D6,D7
//LiquidCrystalNew lcd(12,11,10,8,7,6,5);
//CS pin,use more chip,SPI address
LiquidCrystalNew lcd(10,1,0x20);//use SPI


void setup() {
  //Serial.begin(38400);
  //Serial.println("started");
  // set up the LCD's number of columns and rows: 
  lcd.begin(40, 4);
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("0123456789012345678901234567890123456789");
  lcd.backlight(0);
  delay(400);
  lcd.setCursor(0,1);
  lcd.print("ABCDEFGHKILMNOPQRSTUVWXYZABCDEFGHILMNOPQ");
    lcd.backlight(1);
  delay(400);
  lcd.setCursor(0,2);
  lcd.print("AaBbCcDdEeFfGgHhIiLlMmNnOo01234567890123");
    lcd.backlight(0);
  delay(400);
  lcd.setCursor(0,3);
  lcd.print("abcdefghkilmnopqrstuvwxyzabcdefghjilmnop");
    lcd.backlight(1 );
  delay(400);
}

void loop() {
  // Turn off the display:
  lcd.noDisplay();
  delay(500);
  // Turn on the display:
  lcd.display();
  delay(500);
}

/*
void printByte(byte data){
  for (int i=7; i>=0; i--){
    if (bitRead(data,i)==1){
      Serial.print("1");
    } 
    else {
      Serial.print("0");
    }
  }
  Serial.print(" -> 0x");
  Serial.print(data,HEX);
  Serial.print("\n");
}
*/
