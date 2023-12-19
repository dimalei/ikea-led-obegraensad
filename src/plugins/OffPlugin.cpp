#include "plugins/OffPlugin.h"
#include "screen.h"

void OffPlugin::setup() {
    // Setup logic for your plugin
    Screen.clear();
}

void OffPlugin::loop() {
    // Loop logic for your plugin
}

const char* OffPlugin::getName() const {
    return "Off"; // name in GUI
}
