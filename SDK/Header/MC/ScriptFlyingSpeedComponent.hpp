// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptFlyingSpeedComponent : public ScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFLYINGSPEEDCOMPONENT
public:
    class ScriptFlyingSpeedComponent& operator=(class ScriptFlyingSpeedComponent const&) = delete;
    ScriptFlyingSpeedComponent(class ScriptFlyingSpeedComponent const&) = delete;
    ScriptFlyingSpeedComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptFlyingSpeedComponent();
    /*4*/ virtual class Scripting::Result<float> getValue() const;
    /*5*/ virtual class Scripting::Result<void> setValue(float const&) const;
    /*
    inline  ~ScriptFlyingSpeedComponent(){
         (ScriptFlyingSpeedComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptFlyingSpeedComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptFlyingSpeedComponent> bind(struct Scripting::Version);

protected:

private:

};