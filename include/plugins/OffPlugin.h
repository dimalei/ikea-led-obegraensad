#pragma once

#include "PluginManager.h"

class OffPlugin : public Plugin 
{
private:
    int fadeBrightness;
    int previousBrighntess;
public:
    void setup() override;
    void loop() override;
    const char* getName() const override;
    void teardown() override;
};