#include <Arduino.h>

#define FASTLED_ESP8266_RAW_PIN_ORDER
#include <FastLED.h>

CRGB leds[1];

void setup() {
  Serial.begin(74880);
  FastLED.addLeds<WS2812B, 5, GRB>(leds, 1);
}

uint32_t counter = 0;

void loop() {
  leds[0].setHSV(counter++, 255, 255);
  FastLED.show();
  delay(10);
}