// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct RopeParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEPARAMS
public:
    struct RopeParams& operator=(struct RopeParams const&) = delete;
    RopeParams(struct RopeParams const&) = delete;
    RopeParams() = delete;
#endif

public:
    MCAPI RopeParams(class Vec3 const&, class Vec3 const&, float);
    MCAPI void leadInit();

protected:

private:

};