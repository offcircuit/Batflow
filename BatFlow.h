#ifndef BATFLOW_H
#define BATFLOW_H

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class BatFlow {
  public:
    byte full = 5;
    const byte &level = _level;
    const long &val = _val;
    const float &percent = _percent;

    explicit BatFlow() {};
    explicit BatFlow(long h): high(h) {};
    explicit BatFlow(long l, long h): low(min(l, h)), high(max(l, h)) {};
    explicit BatFlow(long l, long h, byte f): low(min(l, h)), high(max(l, h)), full(f) {};

    BatFlow read();
    
  private:
    byte _level;
    long high = 5000, low = 0, _val;
    float _percent;
};

#endif
