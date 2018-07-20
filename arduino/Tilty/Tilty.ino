#include <Adafruit_CircuitPlayground.h>
#include <math.h>

void setup() {
  // Initialize Circuit Playground library.
  CircuitPlayground.begin();
  Serial.begin(115200);
  CircuitPlayground.clearPixels();
}

void loop() {
float x = CircuitPlayground.motionX();
float y = CircuitPlayground.motionY();


  int bx = round( atan2 (x, y) * 180/3.14159265 ); // radians to degrees and rounding

  int led_index = bx/18;
  int led;
  led_index = abs(led_index-5);

 CircuitPlayground.clearPixels();
 CircuitPlayground.setPixelColor(led_index,0,0,255);
 delay(200);     
 
}
