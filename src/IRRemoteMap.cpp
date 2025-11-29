#include "IRRemoteMap.h"

// Raw constants (your values)
static const uint32 RAW_BTN_1    = 0xBA45FF00;
static const uint32 RAW_BTN_2    = 0xB946FF00;
static const uint32 RAW_BTN_3    = 0xB847FF00;
static const uint32 RAW_BTN_4    = 0xBB44FF00;
static const uint32 RAW_BTN_5    = 0xBF40FF00;
static const uint32 RAW_BTN_6    = 0xBC43FF00;
static const uint32 RAW_BTN_7    = 0xF807FF00;
static const uint32 RAW_BTN_8    = 0xEA15FF00;
static const uint32 RAW_BTN_9    = 0xF609FF00;
static const uint32 RAW_BTN_STAR = 0xE916FF00;
static const uint32 RAW_BTN_0    = 0xE619FF00;
static const uint32 RAW_BTN_UP   = 0xE718FF00;
static const uint32 RAW_BTN_DOWN = 0xAD52FF00;
static const uint32 RAW_BTN_LEFT = 0xF708FE00;
static const uint32 RAW_BTN_RIGHT= 0xA55AFF00;
static const uint32 RAW_BTN_OK   = 0xE31CFF00;

IRButton IRRemoteMap::getButton(uint32 raw) {
  switch (raw) {
    case RAW_BTN_1:    return IRButton::BTN_1;
    case RAW_BTN_2:    return IRButton::BTN_2;
    case RAW_BTN_3:    return IRButton::BTN_3;
    case RAW_BTN_4:    return IRButton::BTN_4;
    case RAW_BTN_5:    return IRButton::BTN_5;
    case RAW_BTN_6:    return IRButton::BTN_6;
    case RAW_BTN_7:    return IRButton::BTN_7;
    case RAW_BTN_8:    return IRButton::BTN_8;
    case RAW_BTN_9:    return IRButton::BTN_9;
    case RAW_BTN_STAR: return IRButton::BTN_STAR;
    case RAW_BTN_0:    return IRButton::BTN_0;
    case RAW_BTN_UP:   return IRButton::BTN_UP;
    case RAW_BTN_DOWN: return IRButton::BTN_DOWN;
    case RAW_BTN_LEFT: return IRButton::BTN_LEFT;
    case RAW_BTN_RIGHT:return IRButton::BTN_RIGHT;
    case RAW_BTN_OK:   return IRButton::BTN_OK;
    default:           return IRButton::BTN_UNKNOWN;
  }
}

const char* IRRemoteMap::toString(IRButton btn) {
  switch (btn) {
    case IRButton::BTN_1:       return "1";
    case IRButton::BTN_2:       return "2";
    case IRButton::BTN_3:       return "3";
    case IRButton::BTN_4:       return "4";
    case IRButton::BTN_5:       return "5";
    case IRButton::BTN_6:       return "6";
    case IRButton::BTN_7:       return "7";
    case IRButton::BTN_8:       return "8";
    case IRButton::BTN_9:       return "9";
    case IRButton::BTN_STAR:    return "*";
    case IRButton::BTN_0:       return "0";
    case IRButton::BTN_UP:      return "UP";
    case IRButton::BTN_DOWN:    return "DOWN";
    case IRButton::BTN_LEFT:    return "LEFT";
    case IRButton::BTN_RIGHT:   return "RIGHT";
    case IRButton::BTN_OK:      return "OK";
    case IRButton::BTN_UNKNOWN: return "UNKNOWN";
    default: return "UNKNOWN";
  }
}
