// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
namespace glm {
template <int a1, int a2, typename a3, int a4>
struct mat;
}

#undef BEFORE_EXTRA

class Facing {

#define AFTER_EXTRA
// Add Member There
public:
enum Rotation;
enum Name;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACING
public:
    class Facing& operator=(class Facing const&) = delete;
    Facing(class Facing const&) = delete;
    Facing() = delete;
#endif

public:
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT;
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y;
    MCAPI static std::vector<unsigned char> const ALL_FACES;
    MCAPI static enum Facing::Name const* const BY2DDATA;
    MCAPI static class BlockPos const* const DIRECTION;
    MCAPI static enum Facing::Name const* const DIRECTIONS;
    MCAPI static unsigned char const* const FACINGMASK;
    MCAPI static unsigned char const* const FACINGMASK_INV;
    MCAPI static class Vec3 const* const NORMAL;
    MCAPI static unsigned char const* const OPPOSITE_FACING;
    MCAPI static int const* const STEP_X;
    MCAPI static int const* const STEP_Y;
    MCAPI static int const* const STEP_Z;
    MCAPI static unsigned char convertDirectionToFacingDirection(enum Direction::Type);
    MCAPI static unsigned char convertWeirdoDirectionToFacingDirection(enum WeirdoDirection);
    MCAPI static unsigned char convertYRotationToFacingDirection(float);
    MCAPI static enum Facing::Name from2DDataValue(int);
    MCAPI static unsigned char fromVec3(class Vec3 const&);
    MCAPI static unsigned char getClockWise(unsigned char);
    MCAPI static enum Facing::Rotation getClosestRotation(float);
    MCAPI static unsigned char getCounterClockWise(unsigned char);
    MCAPI static class Vec3 getFaceLocation(unsigned char, float, float);
    MCAPI static class Vec2 getFaceLocationXY(unsigned char, class Vec3 const&);
    MCAPI static unsigned char getFacingDirection(class Vec3 const&, class Vec3 const&);
    MCAPI static unsigned char getOpposite(unsigned char);
    MCAPI static int getRandomFace(class Random&);
    MCAPI static int getRandomFaceHorizontal(class Random&);
    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(unsigned char, enum Facing::Rotation);
    MCAPI static int getStepX(unsigned char);
    MCAPI static int getStepY(unsigned char);
    MCAPI static int getStepZ(unsigned char);
    MCAPI static bool isValidDirection(int);
    MCAPI static unsigned char rotateFace(unsigned char, enum Facing::Rotation);
    MCAPI static unsigned char rotateFaceAroundGivenFace(unsigned char, unsigned char, enum Facing::Rotation);
    MCAPI static class gsl::basic_string_span<char const, -1> toString(unsigned char);

protected:

private:

};