// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndCityFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDCITYFEATURE
public:
    class EndCityFeature& operator=(class EndCityFeature const&) = delete;
    EndCityFeature(class EndCityFeature const&) = delete;
    EndCityFeature() = delete;
#endif

public:
    /*0*/ virtual ~EndCityFeature();
    /*2*/ virtual bool getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool);
    /*3*/ virtual bool isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, unsigned int, class IPreliminarySurfaceProvider const&);
    /*4*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);
    /*
    inline  ~EndCityFeature(){
         (EndCityFeature::*rv)();
        *((void**)&rv) = dlsym("??1EndCityFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI EndCityFeature(class TheEndGenerator&, unsigned int&);

protected:

private:

};