#ifndef IRREMOTE_MAP_H
#define IRREMOTE_MAP_H

#include <Arduino.h>

using uint32 = uint32_t;

enum class IRButton : uint8_t {
  BTN_1,
  BTN_2,
  BTN_3,
  BTN_4,
  BTN_5,
  BTN_6,
  BTN_7,
  BTN_8,
  BTN_9,
  BTN_STAR,
  BTN_0,
  BTN_UP,
  BTN_DOWN,
  BTN_LEFT,
  BTN_RIGHT,
  BTN_OK,
  BTN_UNKNOWN
};

class IRRemoteMap {
public:
  // Map the raw 32-bit decoded value to an IRButton
  static IRButton getButton(uint32 raw);

  // Return human readable name for the IRButton enum
  static const char* toString(IRButton btn);
};

#endif // IRREMOTE_MAP_H
