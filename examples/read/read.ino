#include "Battery.h"

Battery bat(5150, 5200, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(bat.read().val);
  Serial.print("mV ---- ");
  Serial.print(bat.percent);
  Serial.print("% ---- ");
  Serial.print(bat.level);
  Serial.println("_");
  delay(2000);
}
