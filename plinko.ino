#define SLOT1 D0
#define SLOT2 D5
#define SLOT3 D6
#define SLOT4 D7
#define SLOT5 D8

void setup() {
  pinMode(SLOT1, INPUT);
  pinMode(SLOT2, INPUT);
  pinMode(SLOT3, INPUT);
  pinMode(SLOT4, INPUT);
  pinMode(SLOT5, INPUT);
  
  pinMode(LED_BUILTIN, OUTPUT);
}

void blinks(int slot) {
  if(slot == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
}

void loop() {
  int reading_slot1 = digitalRead(SLOT1);
  int reading_slot2 = digitalRead(SLOT2);
  int reading_slot3 = digitalRead(SLOT3);
  int reading_slot4 = digitalRead(SLOT4);
  int reading_slot5 = digitalRead(SLOT5);
  
  blinks(reading_slot1);
  blinks(reading_slot2);
  blinks(reading_slot3);
  blinks(reading_slot4);
  blinks(reading_slot5);
} 
