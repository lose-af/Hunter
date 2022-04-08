// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SoulSpeedEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOULSPEEDENCHANT
public:
    class SoulSpeedEnchant& operator=(class SoulSpeedEnchant const&) = delete;
    SoulSpeedEnchant(class SoulSpeedEnchant const&) = delete;
    SoulSpeedEnchant() = delete;
#endif

public:
    /*0*/ virtual ~SoulSpeedEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual int getMaxLevel() const;
    /*8*/ virtual void doPostAttack(class Actor&, class Actor&, int) const;
    /*9*/ virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
    /*
    inline bool isDiscoverable() const{
        bool (SoulSpeedEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isDiscoverable@SoulSpeedEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isTreasureOnly() const{
        bool (SoulSpeedEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@SoulSpeedEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;
    MCAPI static int getLevel(class Actor const&);
    MCAPI static float getSpeedBoost(int);
    MCAPI static bool isActive(class Actor const&);
    MCAPI static bool shouldSpawnParticles(class Actor const&);

protected:

private:

};