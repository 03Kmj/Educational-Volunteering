#incldue <LiquidCrystal_I2C.h> //LCD에 대한 정보가 담긴 헤더파일 포함
LiquidCrystal_I2C lcd(0x27, 16, 2); //0x27 자리에 자신의 LCD 주소 작성

void setup() {
  lcd.init(); //LCD 초기화
  lcd.backlight(); //LCD 백라이트 켜기
}

void loop(){
    lcd.setCursor(0, 0);
    lcd.print("Hello, World!");
    delay(1000);
    lcd.setCursor(3, 1);
    lcd.print("I'm MJ");
    lcd.clear();
    delay(1000);
}
