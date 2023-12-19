#include "api.h"
#include "PluginManager.h"
#include "screen.h"
//#include <ESPAsyncWebServer.h>

void handleCommand(AsyncWebServerRequest *request)
{

        // Extracting parameters from the URL
    std::string text = request->arg("text").c_str();
    int repeat = request->arg("repeat").toInt();
    int id = request->arg("id").toInt();
    int delay = request->arg("delay").toInt();
    int miny = request->arg("miny").toInt();
    int maxy = request->arg("maxy").toInt();

    // http://hostname.local/api?pluginid=0
    if(request->hasArg("pluginid")){
        int mode = request->arg("pluginid").toInt();

        pluginManager.setActivePluginById(mode);
    }

    // http://hostname.local/api?pluginid=0
    if(request->hasArg("brightness")){
        int brightness = request->arg("brightness").toInt();

        Screen.setBrightness(brightness);
    }

};