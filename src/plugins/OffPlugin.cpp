#include "plugins/OffPlugin.h"
#include "screen.h"

void OffPlugin::setup() {
    // Setup logic for your plugin
    fadeBrightness = previousBrighntess = Screen.getCurrentBrightness();
    //Screen.clear();
}

void OffPlugin::loop() {
    // Loop logic for your plugin
    if(fadeBrightness > 1)
    {
        fadeBrightness--;
        Screen.setBrightness(fadeBrightness);
    } else if (fadeBrightness == 1)
    {
        Screen.clear();
    }
    
}

void OffPlugin::teardown() {
  // code if plugin gets deactivated
  Screen.setBrightness(previousBrighntess);
}

const char* OffPlugin::getName() const {
    return "Off"; // name in GUI
}
