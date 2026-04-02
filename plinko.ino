#include <Adafruit_NeoPixel.h>

#define SLOT1 D0
#define SLOT2 D5
#define SLOT3 D6
#define SLOT4 D7
#define SLOT5 D8
#define NUM_LEDS 150
#define LED_STRIP D2

Adafruit_NeoPixel strip(NUM_LEDS, LED_STRIP, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(SLOT1, INPUT);
  pinMode(SLOT2, INPUT);
  pinMode(SLOT3, INPUT);
  pinMode(SLOT4, INPUT);
  pinMode(SLOT5, INPUT);
  pinMode(LED_STRIP, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  strip.setPixelColor(0, 255, 0, 0); // set pixel 0 to red
  strip.show();
  
  delay(500);
  
  strip.clear();
  strip.show();
  
  delay(500);

}

void blinks(int slot, int red, int green, int blue) {
  if(slot == HIGH) {
    for(int i = 0; i<NUM_LEDS; i++) {
      strip.setPixelColor(i, red, green, blue); 
    }
    strip.show();
  } else {
    strip.clear();
    strip.show();
  }
}

void loop() {
  int reading_slot1 = digitalRead(SLOT1);
  int reading_slot2 = digitalRead(SLOT2);
  int reading_slot3 = digitalRead(SLOT3);
  int reading_slot4 = digitalRead(SLOT4);
  int reading_slot5 = digitalRead(SLOT5);
  
  blinks(reading_slot1, 237, 40, 40);
  blinks(reading_slot2, 240, 34, 150 );
  blinks(reading_slot3, 182, 34, 240);
  blinks(reading_slot4, 0, 0, 255);
  blinks(reading_slot5, 0, 255, 0);
} 
