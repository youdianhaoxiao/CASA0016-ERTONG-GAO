#include <DHT.h>
#include <DHT_U.h>

#include <FastLED.h>
#include "DHT.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_NeoPixel.h>


//LCD1602
LiquidCrystal_I2C lcd(0x3f,20,4); // set the LCD address to 0x27 for a 20 chars and 4 line display

//DHT22
#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
DHT dht(DHTPIN, DHTTYPE);

//SKC6812
#define LED_PIN     7
#define NUM_LEDS    8
CRGB leds[1];

//gpio
#define ctrl_pin  4
void setup() {
  Serial.begin(115200);   
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  dht.begin();
  lcd.init(); 
  lcd.backlight();  
  pinMode(ctrl_pin, OUTPUT);
  digitalWrite(ctrl_pin,LOW);
}

void loop() {
  float h = dht.readHumidity(); 
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  
  if (isnan(h) || isnan(t) || isnan(f)) {    
    h=0;
    t=0;
    f=0;
  }
  
  float hif = dht.computeHeatIndex(f, h);  
  float hic = dht.computeHeatIndex(t, h, false);
  
  String data = "Humidity :";
  data=data+h;       
  Serial.println(data);
  lcd.setCursor(0,0);   
  lcd.print(data);

  data = "Temperature:"; 
  data=data+t; 
  Serial.println(data);
  lcd.setCursor(0,1);   
  lcd.print(data);

  if(h<50)
  {
    // Red
    leds[0] = CRGB (50, 0, 0);
    digitalWrite(ctrl_pin,HIGH);
  }
  else if(h<60)
  {
    // Green
    leds[0] = CRGB (0, 50, 0);
  }
  else
  { 
    //  Blue
    leds[0] = CRGB (0, 0, 50);
    digitalWrite(ctrl_pin,LOW);
  }
  FastLED.show();
  delay(500);
}
