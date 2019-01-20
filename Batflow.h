#ifndef BATFLOW_H
#define BATFLOW_H

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Batflow {
  public:
    byte full = 5;
    const byte &level = _level;
    const long &val = _val;
    const float &percent = _percent;

    explicit Batflow() {};
    explicit Batflow(long h): high(h) {};
    explicit Batflow(long l, long h): low(min(l, h)), high(max(l, h)) {};
    explicit Batflow(long l, long h, byte f): low(min(l, h)), high(max(l, h)), full(f) {};

    Batflow read();
    
  private:
    byte _level;
    long high = 5000, low = 0, _val;
    float _percent;
};

#endif
