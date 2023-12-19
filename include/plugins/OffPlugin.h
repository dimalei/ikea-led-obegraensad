#pragma once

#include "PluginManager.h"

class OffPlugin : public Plugin {
public:
    OffPlugin();
    ~OffPlugin() override;

    void setup() override;
    void loop() override;
    const char* getName() const override;
};
