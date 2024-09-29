#ifndef FUNCTIONTIMER_H
#define FUNCTIONTIMER_H

#include <Arduino.h>

class FunctionTimer {
public:
    void (* func_ptr)();
    int update_time;
    int last;
    FunctionTimer(void (* _func_ptr)(), int _update_time) {
        func_ptr = _func_ptr;
        update_time = _update_time;
        last = 0;
    }

    void service() {
        if ((millis() - last) > update_time) {
            func_ptr();
            last = millis();
        }
    }
};

#endif
