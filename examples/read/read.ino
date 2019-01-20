#include "Batflow.h"

Batflow bat(3100, 5000, 7);

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
