// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptLevelWeatherComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTLEVELWEATHERCOMPONENT
public:
    class ScriptLevelWeatherComponent& operator=(class ScriptLevelWeatherComponent const&) = delete;
    ScriptLevelWeatherComponent(class ScriptLevelWeatherComponent const&) = delete;
    ScriptLevelWeatherComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptLevelWeatherComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle const&) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, class ScriptApi::ScriptObjectHandle&) const;
    /*
    inline bool hasComponent(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Actor& a3, bool& a4) const{
        bool (ScriptLevelWeatherComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Actor&, bool&) const;
        *((void**)&rv) = dlsym("?hasComponent@ScriptLevelWeatherComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVActor@@AEA_N@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Actor&>(a3), std::forward<bool&>(a4));
    }
    inline bool hasComponent(class ScriptApi::ScriptVersionInfo const& a0, class ScriptEngine& a1, class ScriptServerContext& a2, class Level& a3, bool& a4) const{
        bool (ScriptLevelWeatherComponent::*rv)(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Level&, bool&) const;
        *((void**)&rv) = dlsym("?hasComponent@ScriptLevelWeatherComponent@@UEBA_NAEBVScriptVersionInfo@ScriptApi@@AEAVScriptEngine@@AEAVScriptServerContext@@AEAVLevel@@AEA_N@Z");
        return (this->*rv)(std::forward<class ScriptApi::ScriptVersionInfo const&>(a0), std::forward<class ScriptEngine&>(a1), std::forward<class ScriptServerContext&>(a2), std::forward<class Level&>(a3), std::forward<bool&>(a4));
    }
    */

protected:

private:
    MCAPI static class HashedString const mHash;

};