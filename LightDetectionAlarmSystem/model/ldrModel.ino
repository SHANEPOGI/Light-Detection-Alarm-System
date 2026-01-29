#ifndef LDR_MODEL_H
#define LDR_MODEL_H

#include "pinConfig.ino"

class LDRModel {
  public:
    void begin() {
      pinMode(LDR_PIN, INPUT);
    }

    int readLight() {
      return analogRead(LDR_PIN);
    }
};

#endif

