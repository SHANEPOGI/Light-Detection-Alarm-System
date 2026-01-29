#ifndef ALARM_VIEW_H
#define ALARM_VIEW_H

#include "pinConfig.ino"

class AlarmView {
  public:
    void begin() {
      pinMode(GREEN_LED, OUTPUT);
      pinMode(ORANGE_LED, OUTPUT);
      pinMode(BUZZER_PIN, OUTPUT);
      Serial.begin(9600);
    }

    void showBright(int value) {
      Serial.println(value);
      digitalWrite(ORANGE_LED, HIGH);
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BUZZER_PIN, LOW);
    }

    void showDark(int value) {
      Serial.println(value);
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(ORANGE_LED, LOW);
      digitalWrite(BUZZER_PIN, HIGH);
    }
};

#endif

