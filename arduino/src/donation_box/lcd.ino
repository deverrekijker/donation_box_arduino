/*#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x20 for a 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x38,16,2);  //if the LCD does not work, please use the other address:0x38

uint8_t euro[8] = {0x3,0x4,0x1e,0x8,0x1e,0x8,0x7};

void setup_lcd() {
  lcd.begin(16,2);               // initialize the lcd
  //lcd.init();                      // initialize the lcd

  lcd.init();                      // initialize the lcd
  lcd.init();

  lcd.createChar(0, euro);
  // Print a message to the LCD.
  lcd.backlight();
  lcd.print("MONEYBOX IS GO");
  delay(2000);
  lcd.clear();
  lcd.print("GIMME COINS");
};

      lcd.clear();
      lcd.print("GIMME COINS");
      lcd.setCursor(0,1);
      lcd.print("Total:");
      lcd.setCursor(8,1);
      lcd.write(0);
      lcd.setCursor(9,1);
      lcd.print(sum);

      /*Serial.println(sum);*/
