// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SensingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENSINGSYSTEM
public:
    class SensingSystem& operator=(class SensingSystem const&) = delete;
    SensingSystem(class SensingSystem const&) = delete;
    SensingSystem() = delete;
#endif

public:
    /*0*/ virtual ~SensingSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);

protected:

private:

};