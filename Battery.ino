#include "Battery.h"

Battery b(5160, 5200);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(b.read().val);
  Serial.print("mV ---- ");
  Serial.print(b.percent);
  Serial.print("% ---- ");
  Serial.print(b.level);
  Serial.println("_");
  delay(100);
}
