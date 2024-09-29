# FunctionTimer Library

`FunctionTimer` is a lightweight Arduino library that schedules periodic execution of functions. It can be used to efficiently manage tasks based on a time interval without blocking the main loop.

## Features
- Simple function scheduling
- Adjustable time intervals
- Non-blocking execution

## Usage

### Basic Example

```cpp
#include <FunctionTimer.h>

void myFunction() {
    Serial.println("Task executed!");
}

FunctionTimer myTimer(myFunction, 1000);

void loop() {
    myTimer.service();
}
