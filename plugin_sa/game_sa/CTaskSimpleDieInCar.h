/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleDie.h"

class PLUGIN_API CTaskSimpleDieInCar : public CTaskSimpleDie {
protected:
    CTaskSimpleDieInCar(plugin::dummy_func_t a) : CTaskSimpleDie(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleDieInCar, 0x);