#include "controller/lightController.ino"

LightController controller;

void setup() {
  controller.begin();
}

void loop() {
  controller.update();
}

