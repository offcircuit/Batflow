#ifndef BATTERY_H
#define BATTERY_H

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Battery {
  public:
    byte full = 5;
    const byte &level = _level;
    const long &val = _val;
    const float &percent = _percent;

    explicit Battery() {};
    explicit Battery(long h): high(h) {};
    explicit Battery(long l, long h): low(min(l, h)), high(max(l, h)) {};
    explicit Battery(long l, long h, byte f): low(min(l, h)), high(max(l, h)), full(f) {};

    Battery read();
    
  private:
    byte _level;
    long high = 5000, low = 0, _val;
    float _percent;
};

#endif
