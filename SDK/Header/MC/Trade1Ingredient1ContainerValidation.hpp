// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Trade1Ingredient1ContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE1INGREDIENT1CONTAINERVALIDATION
public:
    class Trade1Ingredient1ContainerValidation& operator=(class Trade1Ingredient1ContainerValidation const&) = delete;
    Trade1Ingredient1ContainerValidation(class Trade1Ingredient1ContainerValidation const&) = delete;
    Trade1Ingredient1ContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~Trade1Ingredient1ContainerValidation();
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*8*/ virtual int getContainerOffset(class ContainerScreenContext const&) const;
    MCAPI Trade1Ingredient1ContainerValidation(bool);

protected:

private:

};