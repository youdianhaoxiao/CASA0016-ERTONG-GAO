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
