#include <ArduinoUnit.h>

test(something) {
  int x = 14;
  int y = 14;
  assertEqual(x,y);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  Test::run();
}
