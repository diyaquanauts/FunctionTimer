#include <Arduino.h>
#include <FunctionTimer.h>

void myFunction() {
    Serial.println("Function executed!");
}

FunctionTimer myTimer(myFunction, 1000);  // Call every 1000ms

void setup() {
    Serial.begin(115200);
}

void loop() {
    myTimer.service();
}
