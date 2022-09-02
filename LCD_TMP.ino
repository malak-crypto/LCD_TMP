#include <dht.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

dht DHT;

int count;

#define DHT11_PIN 7

void setup(){
  lcd.begin(16, 2);
}

void loop(){

  delay(2000);
  Dr_Name();

  delay(2000);
  TA_Name();
  
  delay (2000);
  Proj_Name();

  delay (2000);
  Names_Ids();

  delay(3000);
  Tmp_Humidity();
  delay(3000);
  lcd.clear();

}


void Dr_Name()
{
  for (count =0; count <25; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print(" Insert your text here ");
  lcd.setCursor(0,1);
  lcd.print("  Insert your text here ");
  lcd.scrollDisplayLeft();
  delay(300);
}
  lcd.clear();
}
void TA_Name()
{
   for (count =0; count <24; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.print(" ");
  lcd.scrollDisplayLeft();
  delay(300);
}
  lcd.clear();
}

void Proj_Name()
{
  
 for (count =0; count <25; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print(" Obstacle Avoidance Fire Truck ");
  lcd.setCursor (0,1);
  lcd.print(" :)-------------------------(: ");
  lcd.scrollDisplayLeft();
  delay(300);
}
  lcd.clear();
  
}

void Names_Ids()
{
  
  
   for (count =0; count <13; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print("  ");
  lcd.setCursor (0,1);
  lcd.print("  ");
  lcd.scrollDisplayLeft();
  delay(300);
}

  lcd.clear();

for (count =0; count <13; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print("  ");
  lcd.setCursor (0,1);
  lcd.print(" ");
  lcd.scrollDisplayLeft();
  delay(300);
}
  lcd.clear();

for (count =0; count <13; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print("  ");
  lcd.setCursor (0,1);
  lcd.print("  ");
  lcd.scrollDisplayLeft();
  delay(300);
}
  lcd.clear();

  for (count =0; count <13; count++)
{
  delay(300);
  lcd.setCursor(0,0);
  lcd.print("  ");
  lcd.setCursor (0,1);
  lcd.print("  ");
  lcd.scrollDisplayLeft();
  delay(300);
}

lcd.clear();
}

void Tmp_Humidity()
{
  delay(300);
  int chk = DHT.read11(DHT11_PIN);
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(100);
  
}
