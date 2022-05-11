#include <Adafruit_NeoPixel.h>


#define PIN 6 //Pin for Arduino control


Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
    breathAll();
}

void breathAll() {
  for (int i = 0; i < 225; i++) {   //The 225 affects the speed of the breathing
    for(int j=0; j<strip.numPixels(); j++) {
      strip.setPixelColor(j, strip.Color(i,i,0)); // yellow color 
    }
    strip.show();
    delay(10);
  }
  for (int i = 225; i > 0; i--) {
    for(int j=0; j<strip.numPixels(); j++) {
      strip.setPixelColor(j, strip.Color(i,i,0)); 
    }
    strip.show();
    delay(10);
  }
}
