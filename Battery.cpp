#include "Battery.h"

// PUBLIC

Battery Battery::read() {
  ADMUX = _BV(REFS0) | _BV(MUX3) | _BV(MUX2) | _BV(MUX1);
  delay(2);
  ADCSRA |= _BV(ADSC);
  while (bit_is_set(ADCSRA, ADSC));
  _val = 1126400L / (ADCL | (ADCH << 8));
  _percent = (_val * 100) / (float)max(_val, high);
  _level = max(0, map(_val, min(_val, low), max(_val, high), 0, full));
  return *this;
}

// PRIVATE
