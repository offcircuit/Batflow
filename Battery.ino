#include "Battery.h"

float l[5] = {3.2, 3.8, 4.4, 4.7, 5};
Battery b(8046);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("----------avr-------------");
  Serial.println("---------class--------------");
  Serial.println("----------read-------------");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(b.read());
  Serial.print("----");
  Serial.println(b.percent);
  Serial.println(b.level);
  delay(2000);
}
