// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackNetManagerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERBASE
public:
    class ItemStackNetManagerBase& operator=(class ItemStackNetManagerBase const&) = delete;
    ItemStackNetManagerBase(class ItemStackNetManagerBase const&) = delete;
    ItemStackNetManagerBase() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackNetManagerBase();
    /*1*/ virtual bool isEnabled() const;
    /*2*/ virtual class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const = 0;
    /*3*/ virtual bool retainSetItemStackNetIdVariant() const;
    /*4*/ virtual bool allowInventoryTransactionManager() const = 0;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void onContainerScreenClose();
    /*8*/ virtual class SparseContainer* initOpenContainer(class BlockSource&, enum ContainerEnumName, class ContainerWeakRef const&);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void _initScreen(class ItemStackNetManagerScreen&);
    /*
    inline void _initScreen(class ItemStackNetManagerScreen& a0){
        void (ItemStackNetManagerBase::*rv)(class ItemStackNetManagerScreen&);
        *((void**)&rv) = dlsym("?_initScreen@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@@Z");
        return (this->*rv)(std::forward<class ItemStackNetManagerScreen&>(a0));
    }
    inline void _addLegacyTransactionRequestSetItemSlot(class ItemStackNetManagerScreen& a0, enum ContainerType a1, int a2){
        void (ItemStackNetManagerBase::*rv)(class ItemStackNetManagerScreen&, enum ContainerType, int);
        *((void**)&rv) = dlsym("?_addLegacyTransactionRequestSetItemSlot@ItemStackNetManagerBase@@MEAAXAEAVItemStackNetManagerScreen@@W4ContainerType@@H@Z");
        return (this->*rv)(std::forward<class ItemStackNetManagerScreen&>(a0), std::forward<enum ContainerType>(a1), std::forward<int>(a2));
    }
    inline  ~ItemStackNetManagerBase(){
         (ItemStackNetManagerBase::*rv)();
        *((void**)&rv) = dlsym("??1ItemStackNetManagerBase@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void onContainerScreenOpen(class ContainerScreenContext const& a0){
        void (ItemStackNetManagerBase::*rv)(class ContainerScreenContext const&);
        *((void**)&rv) = dlsym("?onContainerScreenOpen@ItemStackNetManagerBase@@UEAAXAEBVContainerScreenContext@@@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0));
    }
    */
    MCAPI ItemStackNetManagerBase(class Player&, bool, bool);
    MCAPI bool isClientSide() const;
    MCAPI bool isScreenOpen() const;
    MCAPI static bool setPlayerContainer(class Player&, enum ContainerType, int, class ItemStack const&, class ItemStack&, class std::function<void (class ItemStack const& )> const&);

protected:

private:

};