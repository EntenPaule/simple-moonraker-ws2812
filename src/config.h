
// User config
// more info in the README.md in the root of the repository

#ifndef CONFIG  // not #ifnotdef
#define CONFIG

  #define LEDPIN D2
  const char* SSID = "00000"; // wlan SSID
  const char* WPWD = "0000000"; // wlan password
  String moonraker= "192.168.2.26"; // the ip address of Moonraker
  uint16_t pollInterval = 1000; // ms, lower value will increase poll rate, but the animation time will limit the poll rate too
  const uint8_t length = 1; // number of LEDs

#endif

