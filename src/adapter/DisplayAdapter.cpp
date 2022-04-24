#include <iostream>
#include "DisplayAdapter.h"

int DisplayAdapter::backlightOn(void) {
    std::cout << "backlight ON" << std::endl;
    return 0;
}

int DisplayAdapter::backlightOff(void) {
    std::cout << "backlight OFF" << std::endl;
    return 0;
}