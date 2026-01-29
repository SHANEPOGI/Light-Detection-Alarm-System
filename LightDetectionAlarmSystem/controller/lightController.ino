#ifndef LIGHT_CONTROLLER_H
#define LIGHT_CONTROLLER_H

#include "ldrModel.ino"
#include "alarmView.ino"
#include "pinConfig.ino"

class LightController {
  private:
    LDRModel model;
    AlarmView view;

  public:
    void begin() {
      model.begin();
      view.begin();
    }

    void update() {
      int ldrValue = model.readLight();

      if (ldrValue >= LIGHT_THRESHOLD) {
        view.showBright(ldrValue);
      } else {
        view.showDark(ldrValue);
      }

      delay(500);
    }
};

#endif

