// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RTree {

#define AFTER_EXTRA
// Add Member There
public:
struct Hint {
    Hint() = delete;
    Hint(Hint const&) = delete;
    Hint(Hint const&&) = delete;
};
class Node {
public:
    Node() = delete;
    Node(Node const&) = delete;
    Node(Node const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RTREE
public:
    class RTree& operator=(class RTree const&) = delete;
    RTree(class RTree const&) = delete;
    RTree() = delete;
#endif

public:
    MCAPI ~RTree();
    MCAPI static class std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const&);

protected:

private:
    MCAPI static class std::optional<class RTree::Node> build(std::vector<class RTree::Node>&&);

};