#include "api.h"
#include "PluginManager.h"
#include "screen.h"

void handleCommand(AsyncWebServerRequest *request)
{
    // Ideas:
    // Set Weather Location [check - untested]
    // Rotate Screen [check - untested]

        // http://hostname.local/api?pluginid=0
    if(request->hasArg("pluginid")){
        int id = request->arg("pluginid").toInt();

        pluginManager.setActivePluginById(id);
    }

        // http://hostname.local/api?plugin=Big+Clock
    if(request->hasArg("plugin")){
        std::string plugin = request->arg("plugin").c_str();
        const char *pluginName = plugin.c_str();

        pluginManager.setActivePlugin(pluginName);
    }

        // http://hostname.local/api?next
    if(request->hasArg("next")){

        pluginManager.activateNextPlugin();
    }

        // http://hostname.local/api?brightness=0
    if(request->hasArg("brightness")){
        int brightness = request->arg("brightness").toInt();

        Screen.setBrightness(brightness);
    }

        // http://hostname.local/api?rotate
    if(request->hasArg("rotate")){

        Screen.rotate();
    }

        // http://hostname.local/api?weatherlocation=Zurich
    if(request->hasArg("weatherlocation")){
        weatherLocation = request->arg("weatherlocation").c_str();
    }

};