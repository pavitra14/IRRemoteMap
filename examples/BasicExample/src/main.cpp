#include <Arduino.h>
#include <IRremote.hpp>
#include "IRRemoteMap.h"

#define IR_PIN 3

void setup() {
  Serial.begin(115200);
  IrReceiver.begin(IR_PIN, ENABLE_LED_FEEDBACK);
  Serial.println("IRRemoteMap BasicExample ready");
}

void loop() {
  if (IrReceiver.decode()) {
    uint32_t raw = (uint32_t)IrReceiver.decodedIRData.decodedRawData;
    IRButton btn = IRRemoteMap::getButton(raw);

    Serial.print("Raw: 0x");
    Serial.println(raw, HEX);
    Serial.print("Button: ");
    Serial.println(IRRemoteMap::toString(btn));

    // example action
    if (btn == IRButton::BTN_OK) {
      Serial.println("OK -> do something");
    }

    IrReceiver.resume();
  }
}
