#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
SoftwareSerial mySerial(9, 8);

int gasValue = A0;
int data = 0;
int relay = 6;
int pir_Status;
int buzzerPin = 7;

void setup()
{
  randomSeed(analogRead(0));

  mySerial.begin(9600);
  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  pinMode(gasValue, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("WELCOME TO ");

  lcd.setCursor(2, 1);
  lcd.print("FINAL YEAR PROJECT");

  lcd.setCursor(6, 2);
  lcd.print("DESIGN By :-");

  lcd.setCursor(6, 3);
  lcd.print("REESHA");

  delay(3000);
  lcd.clear();
}

void loop()
{
  data = analogRead(gasValue);

  Serial.print("Gas Level: ");
  Serial.println(data);

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Exhaust fan :- OFF");

  lcd.setCursor(2, 1);
  lcd.print("Gas Level: ");
  lcd.print(data);

  delay(1000);

  if (data > 300)
  {
    SendMessage();

    Serial.print("Gas detect alarm");

    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print("Exhaust fan :- ON");

    lcd.setCursor(2, 2);
    lcd.print("Gas Level Exceed");

    lcd.setCursor(2, 3);
    lcd.print("SMS Sent");

    delay(1000);

    digitalWrite(buzzerPin, HIGH);
    digitalWrite(relay, HIGH);
  }
  else
  {
    Serial.print("Gas Level Low");

    lcd.clear();
    lcd.setCursor(2, 3);
    lcd.print("Gas Level Normal");

    delay(1000);

    digitalWrite(buzzerPin, LOW);
    digitalWrite(relay, LOW);
  }

  //lcd.clear();
}

void SendMessage()
{
  Serial.println("I am in send");

  // Sets the GSM Module in Text Mode
  mySerial.println("AT+CMGF=1");
  delay(1000);

  // Replace with your phone number
  mySerial.println("AT+CMGS=\"YOUR_PHONE_NUMBER\"\r");
  delay(1000);

  // SMS message
  mySerial.println("Excess Gas Detected. Open Windows");
  delay(100);

  // ASCII code of CTRL+Z (Send SMS)
  mySerial.println((char)26);
  delay(1000);
}