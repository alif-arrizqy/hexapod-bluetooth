#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3f, 16, 2);
//#include <SoftwareSerial.h>
//SoftwareSerial bt(17, 16); //pin di arduino (RX, TX)

char val;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  //  delay(30);
  lcd.init();
  lcd.backlight();
  delay(100);
  lcd.noBacklight();
  delay(100);
  lcd.backlight();
  delay(100);
  lcd.noBacklight();
  delay(100);
  lcd.backlight();
  delay(100);
  lcd.noBacklight();
  delay(100);
  lcd.backlight();

  lcd.setCursor(3, 0);
  lcd.print(">>WRK-XI<<");
  lcd.setCursor(0, 1);
  lcd.print(">>Robotic-2020<<");
  diam();
  delay(1000);
}

void loop()
{
  //  maju();
  fungsi_gerak();
}

void maju()
{
  Serial.println("maju");
  Serial.println("#1 P1600 #2 P1710 #3 P1140 #5 P1500 #6 P1600 #7 P1590 #9 P1400 #10 P1380 #11 P1690 #13 P1500 #14 P1590 #15 P1320 #17 P1400 #18 P1820 #19 P1190 #21 P1500 #22 P1480 #23 P1570");

  Serial.println("#1 P1600 #2 P1350 #3 P1310 #5 P1550 #6 P1550 #7 P1590 #9 P1400 #10 P1640 #11 P1520 #13 P1420 #14 P1590 #15 P1320 #17 P1400 #18 P1550 #19 P1360 #21 P1450 #22 P1610 #23 P1570");

  Serial.println("#1 P1500 #2 P1410 #3 P1310 #5 P1400 #6 P1300 #7 P1760 #9 P1500 #10 P1640 #11 P1520 #13 P1400 #14 P1840 #15 P1150 #17 P1500 #18 P1580 #19 P1360 #21 P1600 #22 P1270 #23 P1740");

  Serial.println("#1 P1460 #2 P1350 #3 P1310 #5 P1400 #6 P1550 #7 P1590 #9 P1540 #10 P1640 #11 P1520 #13 P1400 #14 P1590 #15 P1320 #17 P1590 #18 P1550 #19 P1360 #21 P1600 #22 P1610 #23 P1570");

}

void diam() {
  Serial.println("diam");
  Serial.println("#1 P1500 #2 P1362 #3 P1310 #5 P1500 #6 P1500 #7 P1624 #9 P1500 #10 P1640 #11 P1520 #13 P1500 #14 P1640 #15 P1286 #17 P1500 #18 P1676 #19 P1180 #21 P1500 #22 P1472 #23 P1734");

  //  Serial.println("#1 P1500 #2 P1500 #3 P1500 #5 P1500 #6 P1500 #7 P1500 #9 P1500 #10 P1500 #11 P1500 #13 P1500 #14 P1500 #15 P1500 #17 P1500 #18 P1500 #19 P1500 #21 P1500 #22 P1500 #23 P1500");

  //  Serial.println("#1 P1500 #2 P1500 #3 P1500 #5 P1500 #6 P1500 #7 P1500 #9 P1500 #10 P1500 #11 P1500 #13 P1500 #14 P1500 #15 P1500 #17 P1500 #18 P1500 #19 P1500 #21 P1500 #22 P1500 #23 P1500");

  //  Serial.println("#1 P1500 #2 P1500 #3 P1500 #5 P1500 #6 P1500 #7 P1500 #9 P1500 #10 P1500 #11 P1500 #13 P1500 #14 P1500 #15 P1500 #17 P1500 #18 P1500 #19 P1500 #21 P1500 #22 P1500 #23 P1500");
}

void kanan() {
  Serial.println("kanan");
  Serial.println("#1 P1540 #2 P1710 #3 P1140 #5 P1500 #6 P1600 #7 P1590 #9 P1440 #10 P1380 #11 P1690 #13 P1500 #14 P1590 #15 P1320 #17 P1590 #18 P1730 #19 P1190 #21 P1500 #22 P1480 #23 P1570");

  Serial.println("#1 P1540 #2 P1410 #3 P1310 #5 P1500 #6 P1600 #7 P1590 #9 P1460 #10 P1640 #11 P1520 #13 P1500 #14 P1590 #15 P1320 #17 P1590 #18 P1630 #19 P1360 #21 P1500 #22 P1480 #23 P1570");

  Serial.println("#1 P1500 #2 P1410 #3 P1310 #5 P1450 #6 P1300 #7 P1760 #9 P1500 #10 P1640 #11 P1520 #13 P1580 #14 P1840 #15 P1150 #17 P1500 #18 P1630 #19 P1360 #21 P1450 #22 P1270 #23 P1740");

  Serial.println("#1 P1460 #2 P1410 #3 P1310 #5 P1450 #6 P1600 #7 P1590 #9 P1540 #10 P1640 #11 P1520 #13 P1580 #14 P1590 #15 P1320 #17 P1410 #18 P1630 #19 P1360 #21 P1450 #22 P1480 #23 P1570");

}

void kiri() {
  Serial.println("kiri");
  Serial.println("#1 P1460 #2 P1710 #3 P1140 #5 P1500 #6 P1600 #7 P1590 #9 P1540 #10 P1380 #11 P1690 #13 P1500 #14 P1590 #15 P1320 #17 P1410 #18 P1730 #19 P1190 #21 P1500 #22 P1480 #23 P1570");

  Serial.println("#1 P1460 #2 P1410 #3 P1310 #5 P1500 #6 P1600 #7 P1590 #9 P1540 #10 P1640 #11 P1520 #13 P1500 #14 P1590 #15 P1320 #17 P1410 #18 P1630 #19 P1360 #21 P1500 #22 P1480 #23 P1570");

  Serial.println("#1 P1500 #2 P1410 #3 P1310 #5 P1550 #6 P1300 #7 P1760 #9 P1500 #10 P1640 #11 P1520 #13 P1420 #14 P1840 #15 P1150 #17 P1500 #18 P1630 #19 P1360 #21 P1550 #22 P1270 #23 P1740");

  Serial.println("#1 P1460 #2 P1410 #3 P1310 #5 P1550 #6 P1600 #7 P1590 #9 P1540 #10 P1640 #11 P1520 #13 P1420 #14 P1590 #15 P1320 #17 P1410 #18 P1630 #19 P1360 #21 P1550 #22 P1480 #23 P1587");

}

void mundur() {
  Serial.println("mundur");
  Serial.println("#1 P1400 #2 P1710 #3 P1140 #5 P1500 #6 P1600 #7 P1590 #9 P1600 #10 P1380 #11 P1690 #13 P1500 #14 P1590 #15 P1320 #17 P1600 #18 P1820 #19 P1190 #21 P1500 #22 P1480 #23 P1570");

  Serial.println("#1 P1400 #2 P1350 #3 P1310 #5 P1450 #6 P1550 #7 P1590 #9 P1600 #10 P1640 #11 P1520 #13 P1550 #14 P1590 #15 P1320 #17 P1600 #18 P1550 #19 P1360 #21 P1450 #22 P1610 #23 P1570");

  Serial.println("#1 P1500 #2 P1410 #3 P1310 #5 P1600 #6 P1300 #7 P1760 #9 P1500 #10 P1640 #11 P1520 #13 P1600 #14 P1840 #15 P1150 #17 P1500 #18 P1580 #19 P1360 #21 P1400 #22 P1270 #23 P1740");

  Serial.println("#1 P1450 #2 P1350 #3 P1310 #5 P1550 #6 P1600 #7 P1550 #9 P1550 #10 P1640 #11 P1520 #13 P1600 #14 P1590 #15 P1320 #17 P1450 #18 P1550 #19 P1360 #21 P1400 #22 P1610 #23 P1570");

}

void geleng() {
  Serial.println("#1 P1250 #2 P1350 #3 P1310 #5 P1750 #6 P1600 #7 P1590 #9 P1750 #10 P1700 #11 P1520 #13 P1250 #14 P1590 #15 P1320 #17 P1250 #18 P1540 #19 P1270 #21 P1750 #22 P1570 #23 P1570");

  Serial.println("#1 P1750 #2 P1350 #3 P1310 #5 P1250 #6 P1600 #7 P1590 #9 P1250 #10 P1700 #11 P1520 #13 P1750 #14 P1590 #15 P1320 #17 P1750 #18 P1540 #19 P1270 #21 P1250 #22 P1570 #23 P1570");

  Serial.println("#1 P1250 #2 P1350 #3 P1310 #5 P1750 #6 P1600 #7 P1590 #9 P1750 #10 P1700 #11 P1520 #13 P1250 #14 P1590 #15 P1320 #17 P1250 #18 P1540 #19 P1270 #21 P1750 #22 P1570 #23 P1570");

  Serial.println("#1 P1750 #2 P1350 #3 P1310 #5 P1250 #6 P1600 #7 P1590 #9 P1250 #10 P1700 #11 P1520 #13 P1750 #14 P1590 #15 P1320 #17 P1750 #18 P1540 #19 P1270 #21 P1250 #22 P1570 #23 P1570");
}
