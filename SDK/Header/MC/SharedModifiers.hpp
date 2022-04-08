// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SharedModifiers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDMODIFIERS
public:
    class SharedModifiers& operator=(class SharedModifiers const&) = delete;
    SharedModifiers(class SharedModifiers const&) = delete;
    SharedModifiers() = delete;
#endif

public:
    MCAPI static class std::shared_ptr<class AttributeModifier> DAMAGE_BOOST;
    MCAPI static class std::shared_ptr<class AttributeModifier> HEALTH_BOOST;
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SLOWDOWN;
    MCAPI static class std::shared_ptr<class AttributeModifier> MOVEMENT_SPEED;
    MCAPI static class std::shared_ptr<class AttributeModifier> SPRINTING_BOOST;
    MCAPI static class std::shared_ptr<class AttributeModifier> WEAKNESS;

protected:

private:

};