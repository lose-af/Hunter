// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ExplosionStartedEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOSIONSTARTEDEVENT
public:
    struct ExplosionStartedEvent& operator=(struct ExplosionStartedEvent const&) = delete;
    ExplosionStartedEvent() = delete;
#endif

public:
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent&&);
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent const&);
    MCAPI ~ExplosionStartedEvent();

protected:

private:

};