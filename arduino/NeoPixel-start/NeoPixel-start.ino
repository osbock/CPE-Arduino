#include <Adafruit_NeoPixel.h>


#define LIGHTPIN A8
#define NEOPIXELPIN 8
#define BUTTONA 4
#define BUTTONB 5
#define LEDPIN 13

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, NEOPIXELPIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
    strip.begin();
    strip.show(); // Initialize all pixels to 'off'
}


void loop() {

  
}
