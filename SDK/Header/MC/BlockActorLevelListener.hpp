// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockActorLevelListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORLEVELLISTENER
public:
    class BlockActorLevelListener& operator=(class BlockActorLevelListener const&) = delete;
    BlockActorLevelListener(class BlockActorLevelListener const&) = delete;
#endif

public:
    /*0*/ virtual ~BlockActorLevelListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void onSourceDestroyed(class BlockSource&);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void onChunkUnloaded(class LevelChunk&);
    /*
    inline  ~BlockActorLevelListener(){
         (BlockActorLevelListener::*rv)();
        *((void**)&rv) = dlsym("??1BlockActorLevelListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BlockActorLevelListener();

protected:

private:

};